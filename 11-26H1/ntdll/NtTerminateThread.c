/*
 * XREFs of NtTerminateThread @ 0x18015F9A0
 * Callers:
 *     RtlAssert @ 0x180070F80 (RtlAssert.c)
 *     EtwpCreateEtwThread @ 0x180076130 (EtwpCreateEtwThread.c)
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlSetProcessDebugInformation @ 0x18013A320 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x18013AE00 (WerReportExceptionWorker.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 NtTerminateThread()
{
  __int64 result; // rax

  result = 83LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
