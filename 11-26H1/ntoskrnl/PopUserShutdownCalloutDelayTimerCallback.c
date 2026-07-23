/*
 * XREFs of PopUserShutdownCalloutDelayTimerCallback @ 0x14060A5D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char PopUserShutdownCalloutDelayTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F113A8, DelayedWorkQueue);
}
