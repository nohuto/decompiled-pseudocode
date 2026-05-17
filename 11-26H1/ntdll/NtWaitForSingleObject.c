/*
 * XREFs of NtWaitForSingleObject @ 0x18015EFC0
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800701C0 (RtlWaitForWnfMetaNotification.c)
 *     EtwpStopUmLogger @ 0x180076678 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x1800774FC (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x180078000 (EtwpLogger.c)
 *     RtlpWaitOnCriticalSection @ 0x18007A720 (RtlpWaitOnCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     RtlReportSilentProcessExit @ 0x180087720 (RtlReportSilentProcessExit.c)
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     LdrpResReadFile @ 0x1800AA578 (LdrpResReadFile.c)
 *     RtlAcquireResourceShared @ 0x1800C75D0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800CC470 (RtlAcquireResourceExclusive.c)
 *     WaitForWerSvc @ 0x1800CE1D4 (WaitForWerSvc.c)
 *     LdrpWaitForInitializationComplete @ 0x1800CEB74 (LdrpWaitForInitializationComplete.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DBCCC (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138AD8 (RtlpWow64NinjaSuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180138CC8 (RtlpWow64SuspendProcess.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x18013A320 (RtlSetProcessDebugInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801497B0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     LdrHotPatchNotify @ 0x18015B900 (LdrHotPatchNotify.c)
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
