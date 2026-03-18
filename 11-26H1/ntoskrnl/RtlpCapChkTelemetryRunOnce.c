/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x14080F220
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&SshpBlockerCollections.ResourceIndex, 0LL, 0LL);
  KeQueryPerformanceCounter((PLARGE_INTEGER)&RtlpBootStatHandleLock.CycleTime);
  return 1LL;
}
