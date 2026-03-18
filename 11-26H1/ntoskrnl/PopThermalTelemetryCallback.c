/*
 * XREFs of PopThermalTelemetryCallback @ 0x140607C60
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F0F620.SchedulerAssist, DelayedWorkQueue);
}
