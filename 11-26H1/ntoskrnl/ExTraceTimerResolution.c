/*
 * XREFs of ExTraceTimerResolution @ 0x1404E3B34
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoTraceSystemTimerResolution @ 0x140A73B00 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A910A0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A91120 (ExReleaseTimeRefreshLockShared.c)
 *     PoRundownSystemTimer @ 0x140B348A4 (PoRundownSystemTimer.c)
 */

__int64 ExTraceTimerResolution()
{
  KIRQL v0; // al
  int v1; // r15d
  int v2; // r14d
  ULONG v3; // ebp
  int Dpc; // esi
  char Flink; // di
  char v6; // bl
  __int64 v7; // rcx
  struct _KTHREAD *i; // rbx

  ExAcquireTimeRefreshLockShared();
  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink);
  v1 = KeNonHrTimeIncrement;
  v2 = KeMinimumIncrement;
  v3 = KeMaximumIncrement;
  Dpc = (int)ExpSysDbgLock.Timer.Dpc;
  Flink = (char)ExpSysDbgLock.Timer.TimerListEntry.Flink;
  v6 = KeTimeIncrement;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink, v0);
  PoRundownSystemTimer(v1, v2, v3, Dpc, Flink, v6);
  for ( i = (struct _KTHREAD *)ExpSysDbgLock.WaitBlock[0].WaitListEntry.Flink;
        i != (struct _KTHREAD *)&ExpSysDbgLock.320;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    LOBYTE(v7) = 1;
    PoTraceSystemTimerResolution(v7, &i[-2].KernelWaitTime);
  }
  return ExReleaseTimeRefreshLockShared();
}
