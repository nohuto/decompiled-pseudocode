/*
 * XREFs of PopNetEvaluationTimerCallback @ 0x1404FCFE0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char PopNetEvaluationTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetGracePeriodState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&stru_140F0C428.WaitBlockFill11[64], DelayedWorkQueue);
  return v0;
}
