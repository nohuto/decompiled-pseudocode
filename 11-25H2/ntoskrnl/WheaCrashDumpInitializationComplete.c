/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x1407B8FBC
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x1407B9020 (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  WheapCrashDumpInitialized = 1;
  v1 = WheapDispatchPtr.Queue.Wcb.DeviceRoutine != (PDRIVER_CONTROL)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
