/*
 * XREFs of NtWaitForSingleObject @ 0x18015EEC0
 * Callers:
 *     EtwpStopUmLogger @ 0x180064E98 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x180065D1C (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x180066820 (EtwpLogger.c)
 *     RtlpWaitOnCriticalSection @ 0x180068F40 (RtlpWaitOnCriticalSection.c)
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     RtlReportSilentProcessExit @ 0x18007EAA0 (RtlReportSilentProcessExit.c)
 *     RtlWaitForWnfMetaNotification @ 0x180090610 (RtlWaitForWnfMetaNotification.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 *     LdrpResReadFile @ 0x1800A96A8 (LdrpResReadFile.c)
 *     RtlAcquireResourceShared @ 0x1800C4D90 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800C9BE0 (RtlAcquireResourceExclusive.c)
 *     WaitForWerSvc @ 0x1800CB944 (WaitForWerSvc.c)
 *     LdrpWaitForInitializationComplete @ 0x1800CC2E4 (LdrpWaitForInitializationComplete.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D8C3C (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138848 (RtlpWow64NinjaSuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180138A38 (RtlpWow64SuspendProcess.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139B00 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x18013A090 (RtlSetProcessDebugInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180149660 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     LdrHotPatchNotify @ 0x18015B7C0 (LdrHotPatchNotify.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
