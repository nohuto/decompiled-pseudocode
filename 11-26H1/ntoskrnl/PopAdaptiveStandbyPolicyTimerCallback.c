/*
 * XREFs of PopAdaptiveStandbyPolicyTimerCallback @ 0x140610F10
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char PopAdaptiveStandbyPolicyTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0B928, DelayedWorkQueue);
}
