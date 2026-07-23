/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1406097E0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F124E8, DelayedWorkQueue);
}
