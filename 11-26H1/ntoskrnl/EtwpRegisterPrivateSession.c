/*
 * XREFs of EtwpRegisterPrivateSession @ 0x14082CEE0
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     PsGetCurrentThreadProcessId @ 0x1404575B0 (PsGetCurrentThreadProcessId.c)
 *     ObReferenceObjectByPointer @ 0x14045F750 (ObReferenceObjectByPointer.c)
 *     PidNodeCompare @ 0x14082D4D0 (PidNodeCompare.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  bool v4; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 CurrentThreadProcessId; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rbx
  _QWORD *v15; // rdi
  int v16; // eax
  int v17; // r9d
  _QWORD *v18; // rax
  unsigned __int64 Pool2; // rax
  _QWORD *v20; // rbx
  unsigned int Object; // edi
  __int64 *i; // r14
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rtt
  _QWORD *v26; // rax
  __int64 v27; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-19h]
  __int64 v29; // [rsp+70h] [rbp-11h] BYREF
  __int128 v30; // [rsp+78h] [rbp-9h] BYREF
  __int128 v31; // [rsp+88h] [rbp+7h]
  __int128 v32; // [rsp+98h] [rbp+17h]
  int v33; // [rsp+E8h] [rbp+67h] BYREF
  _WORD *v34; // [rsp+F8h] [rbp+77h]
  _DWORD *v35; // [rsp+100h] [rbp+7Fh]

  v35 = a4;
  v34 = a3;
  v4 = 0;
  v5 = a1 + 4352;
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  *(_QWORD *)&v32 = 0LL;
  v31 = 0LL;
  DWORD2(v32) = 0;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  v28 = CurrentThreadProcessId;
  v33 = CurrentThreadProcessId;
  --CurrentThread->KernelApcDisable;
  v12 = (AutoBoost *)KeAbPreAcquire(v5 + 16, 0LL, 0LL, v11);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 16), v12, v5 + 16);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  v15 = *(_QWORD **)v5;
  if ( *(_QWORD *)v5 )
  {
    while ( 1 )
    {
      v16 = PidNodeCompare(&v33, v15);
      if ( v16 <= 0 )
      {
        if ( v16 >= 0 )
        {
          v20 = v15;
LABEL_21:
          for ( i = (__int64 *)v20[4]; i != v20 + 4; i = (__int64 *)*i )
          {
            if ( *((_WORD *)i + 8) == a2 )
            {
              Object = -1073741811;
              goto LABEL_27;
            }
            if ( *((_WORD *)i + 8) > a2 )
              break;
          }
          LOBYTE(v17) = 1;
          *((_QWORD *)&v30 + 1) = 0LL;
          *(_QWORD *)&v31 = 0LL;
          LODWORD(v30) = 48;
          DWORD2(v31) = 64;
          v32 = 0LL;
          Object = ObCreateObjectEx(0, (_DWORD)EtwpSessionDemuxObjectType, (unsigned int)&v30, v17);
          if ( !Object )
          {
            MEMORY[0x10] = a2;
            MEMORY[0x14] = ++*(_WORD *)(a1 + 4376);
            MEMORY[0x18] = v20;
            v26 = (_QWORD *)i[1];
            i[1] = 0LL;
            *v26 = 0LL;
            MEMORY[8] = v26;
            MEMORY[0] = i;
            ObReferenceObjectByPointer(0LL, 0, EtwpSessionDemuxObjectType, 0);
            Object = ObInsertObjectEx(0LL, 0LL, 0LL, 0LL, 0, &v29, &v27);
            if ( !Object )
            {
              *v34 = MEMORY[0x14];
              *v35 = v27;
              goto LABEL_29;
            }
          }
LABEL_27:
          if ( (_QWORD *)v20[4] == v20 + 4 )
          {
            RtlRbRemoveNode(a1 + 4352, (__int64)v20);
            ExFreePoolWithTag(v20, 0);
          }
          goto LABEL_29;
        }
        v18 = (_QWORD *)*v15;
        if ( !*v15 )
          break;
      }
      else
      {
        v18 = (_QWORD *)v15[1];
        if ( !v18 )
        {
          v4 = 1;
          break;
        }
      }
      v15 = v18;
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v20 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = v28;
    *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
    RtlRbInsertNodeEx(v5, (unsigned __int64)v15, v4, Pool2);
    goto LABEL_21;
  }
  Object = -1073741801;
LABEL_29:
  _m_prefetchw((const void *)(v5 + 16));
  v23 = *(_QWORD *)(v5 + 16);
  v24 = v23 - 16;
  if ( (v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v24 = 0LL;
  if ( (v23 & 2) != 0
    || (v25 = *(_QWORD *)(v5 + 16), v25 != _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), v24, v23)) )
  {
    ExfReleasePushLock((_QWORD *)(v5 + 16));
  }
  KeAbPostRelease(v5 + 16);
  KeLeaveCriticalRegion();
  return Object;
}
