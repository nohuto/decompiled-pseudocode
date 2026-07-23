/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140603E10
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F12EA0.AffinityPrimaryGroup, DelayedWorkQueue);
}
