/*
 * XREFs of NtTerminateThread @ 0x18015F8A0
 * Callers:
 *     EtwpCreateEtwThread @ 0x180064950 (EtwpCreateEtwThread.c)
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     RtlExitUserThread @ 0x18007DD10 (RtlExitUserThread.c)
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 *     RtlAssert @ 0x1800913D0 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlSetProcessDebugInformation @ 0x18013A090 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x18013AB70 (WerReportExceptionWorker.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 83;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
