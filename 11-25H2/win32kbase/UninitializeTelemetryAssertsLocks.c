/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1401A1ED8
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x14014AC88 (InitializeTelemetryAssertsKMWorkerInternal.c)
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
