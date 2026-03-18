/*
 * XREFs of EtwpCoverageFlushWorkItemCallback @ 0x140B43DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EtwpCoverageReset @ 0x140829D38 (EtwpCoverageReset.c)
 *     EtwpCoverageFlushPending @ 0x140B433F0 (EtwpCoverageFlushPending.c)
 */

void __fastcall EtwpCoverageFlushWorkItemCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi

  *(_DWORD *)(EtwpCoverageNonPagedContext + 12) = 0;
  if ( (*(_DWORD *)(a1 + 36) & 1) != 0 )
    EtwpCoverageReset(a1, 4, a3, a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.1136, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.1136, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpSysDbgLock.1136, v6, (__int64)&ExpSysDbgLock.1136);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(*(_QWORD *)a1 + 16LL) >= *(_DWORD *)(a1 + 28) )
    EtwpCoverageFlushPending((int **)a1);
  EtwpCoverageLockOwner = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.AutoBoostThreadState, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.1136);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.1136);
  KeLeaveCriticalRegion();
}
