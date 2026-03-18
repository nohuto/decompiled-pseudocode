/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1400A5708
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140065848 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
