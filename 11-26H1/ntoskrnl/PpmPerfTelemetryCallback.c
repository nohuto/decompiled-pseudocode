/*
 * XREFs of PpmPerfTelemetryCallback @ 0x140606CE0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F12208, DelayedWorkQueue);
}
