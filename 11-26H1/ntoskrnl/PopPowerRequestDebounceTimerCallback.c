/*
 * XREFs of PopPowerRequestDebounceTimerCallback @ 0x140603DE0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F12EA0.MutantListHead, DelayedWorkQueue);
}
