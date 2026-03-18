/*
 * XREFs of TakeTelemetryAssertsLock @ 0x14005B578
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14005B070 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
