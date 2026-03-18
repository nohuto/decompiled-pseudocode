/*
 * XREFs of TakeTelemetryAssertsLock @ 0x14021A760
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14020428C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     UninitializeTelemetryAssertsKM @ 0x1403420AC (UninitializeTelemetryAssertsKM.c)
 * Callees:
 *     <none>
 */

__int64 TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return 0xFFFFFFFFLL;
  ExAcquireFastMutex(g_AssertFastMutex);
  return 0LL;
}
