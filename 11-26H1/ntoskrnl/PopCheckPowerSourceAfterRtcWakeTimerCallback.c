/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14060AA60
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0FC08, DelayedWorkQueue);
}
