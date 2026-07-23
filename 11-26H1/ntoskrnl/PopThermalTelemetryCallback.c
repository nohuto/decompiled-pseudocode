/*
 * XREFs of PopThermalTelemetryCallback @ 0x14060A810
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F0FE28, DelayedWorkQueue);
}
