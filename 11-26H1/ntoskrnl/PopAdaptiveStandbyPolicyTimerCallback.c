/*
 * XREFs of PopAdaptiveStandbyPolicyTimerCallback @ 0x140614180
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char PopAdaptiveStandbyPolicyTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0BCB8, DelayedWorkQueue);
}
