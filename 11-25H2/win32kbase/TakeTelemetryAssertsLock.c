/*
 * XREFs of TakeTelemetryAssertsLock @ 0x140147430
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1401456C4 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
