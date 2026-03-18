/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1401C5D00
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1401880EC (InitializeTelemetryAssertsKMWorkerInternal.c)
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
