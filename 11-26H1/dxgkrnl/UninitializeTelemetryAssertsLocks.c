/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1400A5744
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1400A559C (InitializeTelemetryAssertsKMWorkerInternal.c)
 * Callees:
 *     <none>
 */

void UninitializeTelemetryAssertsLocks()
{
  if ( g_AssertFastMutex )
  {
    ExFreePoolWithTag(g_AssertFastMutex, 0x74727341u);
    g_AssertFastMutex = 0LL;
  }
}
