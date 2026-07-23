/*
 * XREFs of EtwpRegisterPrivateSession @ 0x140833120
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     PidNodeCompare @ 0x140833710 (PidNodeCompare.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  BOOLEAN v4; // r14
  __int64 v5; // r12
  unsigned __int64 CurrentThreadProcessId; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rbx
  _RTL_BALANCED_NODE *v15; // rdi
  int v16; // eax
  int v17; // r9d
  _RTL_BALANCED_NODE *v18; // rax
  __int64 Pool2; // rax
  _RTL_BALANCED_NODE *v20; // rbx
  unsigned int Object; // edi
  _RTL_BALANCED_NODE *i; // r14
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rtt
  _RTL_BALANCED_NODE *v26; // rax
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
  v15 = *(_RTL_BALANCED_NODE **)v5;
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
          for ( i = v20[1].Children[1]; i != (_RTL_BALANCED_NODE *)&v20[1].Right; i = i->Children[0] )
          {
            if ( *(_WORD *)&i->0 == a2 )
            {
              Object = -1073741811;
              goto LABEL_27;
            }
            if ( *(_WORD *)&i->0 > a2 )
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
            v26 = i->Children[1];
            i->Children[1] = 0LL;
            v26->Children[0] = 0LL;
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
          if ( v20[1].Children[1] == (_RTL_BALANCED_NODE *)&v20[1].Right )
          {
            RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 4352), v20);
            ExFreePoolWithTag(v20, 0);
          }
          goto LABEL_29;
        }
        v18 = v15->Children[0];
        if ( !v15->Children[0] )
          break;
      }
      else
      {
        v18 = v15->Children[1];
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
  v20 = (_RTL_BALANCED_NODE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = v28;
    *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
    RtlRbInsertNodeEx((PRTL_RB_TREE)v5, v15, v4, (PRTL_BALANCED_NODE)Pool2);
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
