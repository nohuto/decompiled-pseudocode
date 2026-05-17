/*
 * XREFs of NtQueryInformationProcess @ 0x18015F260
 * Callers:
 *     RtlDecodePointer @ 0x18004D5D0 (RtlDecodePointer.c)
 *     RtlpInitRandomExVector @ 0x18006EDE4 (RtlpInitRandomExVector.c)
 *     RtlEncodePointer @ 0x18007E8D0 (RtlEncodePointer.c)
 *     WerpProcessId @ 0x1800887B0 (WerpProcessId.c)
 *     WerpGlobalFlagsForProcess @ 0x180088964 (WerpGlobalFlagsForProcess.c)
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     PsspCaptureProcessInformation @ 0x1800B53C8 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800B624C (PsspCaptureHandleInformation.c)
 *     PsspCaptureHandleTrace @ 0x1800B703C (PsspCaptureHandleTrace.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800CD310 (RtlpCreateExecutionRequiredRequest.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800CE394 (LdrpLogLoadFailureEtwEvent.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800D41CC (RtlpGetModifiedProcessCookie.c)
 *     SetAssertBufferPtrinPeb @ 0x1800D6E84 (SetAssertBufferPtrinPeb.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D87E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800E9DF0 (RtlWow64GetSharedInfoProcess.c)
 *     WerpIsDebugPortPresent @ 0x18010BCE8 (WerpIsDebugPortPresent.c)
 *     PsspDumpObject_Process @ 0x18010DA50 (PsspDumpObject_Process.c)
 *     LdrpQueryInformationCurrentProcess @ 0x18010ECD0 (LdrpQueryInformationCurrentProcess.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x180111428 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     WerpIsProcessNative @ 0x180120630 (WerpIsProcessNative.c)
 *     DbgUiIssueRemoteBreakin @ 0x1801392F0 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 *     RtlSetProcessIsCritical @ 0x1801478C0 (RtlSetProcessIsCritical.c)
 *     RtlQueryProcessAvailableCpus @ 0x180149060 (RtlQueryProcessAvailableCpus.c)
 *     RtlQueryProcessAvailableCpusCount @ 0x1801490F0 (RtlQueryProcessAvailableCpusCount.c)
 *     RtlDecodeRemotePointer @ 0x18015CC60 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x18015CCD0 (RtlEncodeRemotePointer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
