/*
 * XREFs of NtQueryInformationProcess @ 0x18015F160
 * Callers:
 *     RtlDecodePointer @ 0x180037B50 (RtlDecodePointer.c)
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     WerpProcessId @ 0x18007FB30 (WerpProcessId.c)
 *     WerpGlobalFlagsForProcess @ 0x18007FCE4 (WerpGlobalFlagsForProcess.c)
 *     RtlpInitRandomExVector @ 0x18008F234 (RtlpInitRandomExVector.c)
 *     PsspCaptureProcessInformation @ 0x1800B28E8 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800B376C (PsspCaptureHandleInformation.c)
 *     PsspCaptureHandleTrace @ 0x1800B455C (PsspCaptureHandleTrace.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800CAA80 (RtlpCreateExecutionRequiredRequest.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800CBB04 (LdrpLogLoadFailureEtwEvent.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800CFEE4 (RtlpGetModifiedProcessCookie.c)
 *     SetAssertBufferPtrinPeb @ 0x1800D3E44 (SetAssertBufferPtrinPeb.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D57A0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlEncodePointer @ 0x1800D8BA0 (RtlEncodePointer.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800E9000 (RtlWow64GetSharedInfoProcess.c)
 *     WerpIsDebugPortPresent @ 0x18010B838 (WerpIsDebugPortPresent.c)
 *     PsspDumpObject_Process @ 0x18010D5A0 (PsspDumpObject_Process.c)
 *     LdrpQueryInformationCurrentProcess @ 0x18010E820 (LdrpQueryInformationCurrentProcess.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x180110FA8 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     WerpIsProcessNative @ 0x1801203E0 (WerpIsProcessNative.c)
 *     DbgUiIssueRemoteBreakin @ 0x180139060 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 *     RtlSetProcessIsCritical @ 0x180147770 (RtlSetProcessIsCritical.c)
 *     RtlQueryProcessAvailableCpus @ 0x180148F10 (RtlQueryProcessAvailableCpus.c)
 *     RtlQueryProcessAvailableCpusCount @ 0x180148FA0 (RtlQueryProcessAvailableCpusCount.c)
 *     RtlDecodeRemotePointer @ 0x18015CB20 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x18015CB90 (RtlEncodeRemotePointer.c)
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
