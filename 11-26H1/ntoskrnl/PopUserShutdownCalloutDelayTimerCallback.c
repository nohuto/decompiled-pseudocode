/*
 * XREFs of PopUserShutdownCalloutDelayTimerCallback @ 0x140607A70
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char PopUserShutdownCalloutDelayTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F10FC8, DelayedWorkQueue);
}
