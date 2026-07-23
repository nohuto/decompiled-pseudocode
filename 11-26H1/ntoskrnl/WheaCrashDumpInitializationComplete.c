/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x14084F960
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x14084F9C4 (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpContextListLock.Process);
  WheapCrashDumpInitialized = 1;
  v1 = *(_QWORD *)&CmpContextListLock.ThreadFlags2 != (_QWORD)&CmpContextListLock.512;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpContextListLock.Process);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
