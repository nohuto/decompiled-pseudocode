/*
 * XREFs of PopPepArmIdleTimer @ 0x14021C06C
 * Callers:
 *     PopPepIdleTimeoutDpcRoutine @ 0x140202F50 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1403BB820 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutRoutine @ 0x14047D3E0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PopPepArmIdleTimer(char a1)
{
  KIRQL v2; // di

  if ( PopPepIdleStateTimeout )
  {
    v2 = ExAcquireSpinLockExclusive(&PopDirectedDripsDiagLock.AbCompletedIoQoSBoostCount);
    if ( a1 )
      PopDirectedDripsDiagLock.SchedulerApcFill3[49] = 0;
    if ( !PopDirectedDripsDiagLock.SchedulerApcFill3[49] && *(int *)&PopDirectedDripsDiagLock.SchedulerApcFill5[52] > 0 )
    {
      PopDirectedDripsDiagLock.SchedulerApcFill3[49] = 1;
      KeSetCoalescableTimer(
        (PKTIMER)&PopDirectedDripsDiagLock.SchedulerApcFill5[80],
        (LARGE_INTEGER)(-10000LL * PopPepIdleStateTimeout),
        0,
        PopPepIdleStateTimeout,
        (PKDPC)&PopDirectedDripsDiagLock.792);
    }
    ExReleaseSpinLockExclusive(&PopDirectedDripsDiagLock.AbCompletedIoQoSBoostCount, v2);
  }
}
