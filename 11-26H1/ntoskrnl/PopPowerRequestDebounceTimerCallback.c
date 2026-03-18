/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x140601330
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F12D20.WaitBlock[2].SparePtr, DelayedWorkQueue);
}
