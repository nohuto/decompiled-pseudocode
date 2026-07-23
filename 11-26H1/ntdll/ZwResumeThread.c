/*
 * XREFs of ZwResumeThread @ 0x18015F880
 * Callers:
 *     EtwpCreateEtwThread @ 0x180064950 (EtwpCreateEtwThread.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpWow64ChangeThreadStateSuspend @ 0x180138678 (RtlpWow64ChangeThreadStateSuspend.c)
 *     RtlSetProcessDebugInformation @ 0x18013A090 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x18013AB70 (WerReportExceptionWorker.c)
 *     RtlRemoteCall @ 0x180148130 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 82;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
