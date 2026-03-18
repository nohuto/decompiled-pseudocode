/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x140849650
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x1408496B4 (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpCallbackListLock.UserAffinity);
  WheapCrashDumpInitialized = 1;
  v1 = CmpCallbackListLock.QueueListEntry.Flink != &CmpCallbackListLock.QueueListEntry;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpCallbackListLock.UserAffinity);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
