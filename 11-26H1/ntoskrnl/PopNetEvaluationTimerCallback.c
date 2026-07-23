/*
 * XREFs of PopNetEvaluationTimerCallback @ 0x1404F6520
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char PopNetEvaluationTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetGracePeriodState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&PopPdcDeviceListLock.PriorityFloorSummary, DelayedWorkQueue);
  return v0;
}
