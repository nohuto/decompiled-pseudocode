/*
 * XREFs of EtwpGetPrivateSessionTraceHandle @ 0x140832DA4
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     RtlRandomEx @ 0x140200BE0 (RtlRandomEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PidNodeCompare @ 0x140833710 (PidNodeCompare.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140916DD4 (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpGetPrivateSessionTraceHandle(_DWORD *a1, unsigned int a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r13
  struct _LIST_ENTRY *Flink; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // r15
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rdi
  _DWORD *v13; // rdi
  __int64 v14; // rsi
  unsigned __int16 v15; // r14
  unsigned int i; // ebp
  bool v17; // zf
  unsigned __int64 v18; // rdi
  int v19; // esi
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 **v22; // rdi
  __int64 *j; // rcx
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  struct _LIST_ENTRY *v26; // rtt
  PEPROCESS Process[9]; // [rsp+20h] [rbp-48h] BYREF
  char v30; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v4 = a2;
  Process[0] = 0LL;
  v30 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  CurrentThread = KeGetCurrentThread();
  v8 = (unsigned __int64)&Flink[272];
  --CurrentThread->KernelApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire(v8 + 16, 0LL, 0LL, v9);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v10, v8 + 16);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( (_DWORD)v4 )
  {
    v13 = a1;
    v14 = v4;
    do
    {
      if ( PsLookupProcessByProcessId((HANDLE)(unsigned int)*v13, Process) )
      {
        *v13 = 0;
      }
      else
      {
        if ( (unsigned int)EtwpCheckCurrentUserProcessAccess(Process[0]) )
          *v13 = 0;
        ObfDereferenceObjectWithTag(Process[0], 0x746C6644u);
      }
      v13 += 2;
      --v14;
    }
    while ( v14 );
  }
  do
LABEL_15:
    v15 = RtlRandomEx((PULONG)Process) & 0x7FFF;
  while ( v15 < 0x40u );
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    if ( a1[2 * i] )
    {
      v17 = (*(_BYTE *)(v8 + 8) & 1) == 0;
      v18 = *(_QWORD *)v8;
      LODWORD(Process[0]) = a1[2 * i];
      if ( !v17 )
      {
        if ( v18 )
          v18 ^= v8;
        else
          v18 = 0LL;
      }
      v19 = *(_BYTE *)(v8 + 8) & 1;
      while ( v18 )
      {
        v20 = PidNodeCompare(Process, v18);
        if ( v20 >= 0 )
        {
          if ( v20 <= 0 )
            break;
          v21 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v21 = *(_QWORD *)v18;
        }
        if ( v19 && v21 )
          v18 ^= v21;
        else
          v18 = v21;
      }
      if ( v18 )
      {
        v22 = (__int64 **)(v18 + 32);
        for ( j = *v22; j != (__int64 *)v22; j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 9) == v15 )
            goto LABEL_15;
          if ( *((_WORD *)j + 8) == LOWORD(a1[2 * i + 1]) )
          {
            if ( *((_WORD *)j + 10) != HIWORD(a1[2 * i + 1]) )
              break;
            *((_WORD *)j + 9) = v15;
            v30 = 1;
          }
        }
      }
    }
  }
  _m_prefetchw((const void *)(v8 + 16));
  v24 = *(_QWORD *)(v8 + 16);
  v25 = v24 - 16;
  if ( (v24 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v25 = 0LL;
  if ( (v24 & 2) != 0
    || (v26 = *(struct _LIST_ENTRY **)(v8 + 16),
        v26 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v25, v24)) )
  {
    ExfReleasePushLock((_QWORD *)(v8 + 16));
  }
  KeAbPostRelease(v8 + 16);
  KeLeaveCriticalRegion();
  if ( v30 )
    *a3 = v15;
  else
    return (unsigned int)-1073741275;
  return v3;
}
