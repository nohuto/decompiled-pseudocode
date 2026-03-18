/*
 * XREFs of ExTraceTimerResolution @ 0x1404EA784
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoTraceSystemTimerResolution @ 0x140A66B30 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A8BDD0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A8BE50 (ExReleaseTimeRefreshLockShared.c)
 *     PoRundownSystemTimer @ 0x140B32450 (PoRundownSystemTimer.c)
 */

__int64 ExTraceTimerResolution()
{
  KIRQL v0; // al
  int v1; // r15d
  int v2; // r14d
  int v3; // ebp
  int v4; // esi
  char v5; // di
  char v6; // bl
  __int64 v7; // rcx
  struct _KTHREAD *i; // rbx

  ExAcquireTimeRefreshLockShared();
  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread);
  v1 = KeNonHrTimeIncrement;
  v2 = KeMinimumIncrement;
  v3 = KeMaximumIncrement;
  v4 = *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[152];
  v5 = ExpSysDbgLock.gap90[12];
  v6 = KeTimeIncrement;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread, v0);
  PoRundownSystemTimer(v1, v2, v3, v4, v5, v6);
  for ( i = (struct _KTHREAD *)ExpSysDbgLock.WaitBlock[2].SparePtr;
        i != (struct _KTHREAD *)&ExpSysDbgLock.WaitBlockFill11[136];
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    LOBYTE(v7) = 1;
    PoTraceSystemTimerResolution(v7, &i[-2].KernelWaitTime);
  }
  return ExReleaseTimeRefreshLockShared();
}
