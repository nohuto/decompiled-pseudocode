/*
 * XREFs of EtwpCoverageEnsureUserModeView @ 0x140B0F800
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140B0F758 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall EtwpCoverageEnsureUserModeView(__int64 a1)
{
  _KPROCESS *Process; // r14
  struct _LIST_ENTRY *v3; // r15
  int v4; // esi
  struct _KLOCK_ENTRIES *v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rsi
  __int64 v10; // rcx
  __int64 *ReadyTime; // rax
  _QWORD v13[5]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+98h] [rbp+10h] BYREF
  _KPROCESS *v15; // [rsp+A0h] [rbp+18h]
  __int64 v16; // [rsp+A8h] [rbp+20h] BYREF

  v14 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = Process;
  v13[0] = 0LL;
  v3 = Process[1].ProcessListEntry.Blink + 122;
  if ( RtlReadULong64FromUser(v3) )
  {
    v4 = 0;
  }
  else
  {
    v16 = 0LL;
    v4 = MmMapViewOfSection(*(_QWORD *)(a1 + 8), (__int64)Process, &v14, 0LL, 0LL, (__int64)v13, &v16, 1, 0, 2);
    if ( v4 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.Padding[2], 0LL, 0LL, v5);
      v9 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.Padding[2], 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock.Padding[2], v7, (__int64)&ExpSysDbgLock.Padding[2]);
      if ( v9 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v9, v8);
        else
          *((_BYTE *)v9 + 10) = 1;
      }
      EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
      if ( !RtlReadULong64FromUser(v3) )
      {
        RtlWriteULong64ToUser(v3, v14);
        v14 = 0LL;
      }
      v10 = 0LL;
      ReadyTime = (__int64 *)Process[1].ReadyTime;
      if ( ReadyTime )
        v10 = *ReadyTime;
      if ( v10 )
        RtlWriteULongToUser((_DWORD *)(v10 + 1116), v14);
      v4 = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.Padding[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.Padding[2]);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.Padding[2]);
    KeLeaveCriticalRegion();
  }
  if ( v14 )
    MiUnmapViewOfSection(Process, v14, 0LL, 0);
  return (unsigned int)v4;
}
