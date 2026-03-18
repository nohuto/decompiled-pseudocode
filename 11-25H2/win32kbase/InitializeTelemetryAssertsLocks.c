/*
 * XREFs of InitializeTelemetryAssertsLocks @ 0x1401A0678
 * Callers:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x14014AC88 (InitializeTelemetryAssertsKMWorkerInternal.c)
 * Callees:
 *     <none>
 */

__int64 InitializeTelemetryAssertsLocks()
{
  struct _FAST_MUTEX *Pool2; // rax

  Pool2 = (struct _FAST_MUTEX *)ExAllocatePool2(66LL, 56LL, 1953657665LL);
  g_AssertFastMutex = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  Pool2->Owner = 0LL;
  Pool2->Contention = 0;
  Pool2->Count = 1;
  KeInitializeEvent(&Pool2->Event, SynchronizationEvent, 0);
  return 0LL;
}
