/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140607EB0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F0F620.UserAffinity, DelayedWorkQueue);
}
