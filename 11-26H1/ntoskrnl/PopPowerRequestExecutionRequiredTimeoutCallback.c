/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140601360
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F12D20.648, DelayedWorkQueue);
}
