/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x140814CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&SshpBlockerCollections.ResourceIndex, 0LL, 0LL);
  KeQueryPerformanceCounter((PLARGE_INTEGER)&RtlpBootStatHandleLock.CycleTime);
  return 1LL;
}
