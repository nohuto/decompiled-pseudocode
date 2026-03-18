/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1403421D0
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x140341F7C (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     UninitializeTelemetryAssertsKM @ 0x1403420AC (UninitializeTelemetryAssertsKM.c)
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
