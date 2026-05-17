/*
 * XREFs of ZwResumeThread @ 0x18015F980
 * Callers:
 *     EtwpCreateEtwThread @ 0x180076130 (EtwpCreateEtwThread.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpWow64ChangeThreadStateSuspend @ 0x180138908 (RtlpWow64ChangeThreadStateSuspend.c)
 *     RtlSetProcessDebugInformation @ 0x18013A320 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x18013AE00 (WerReportExceptionWorker.c)
 *     RtlRemoteCall @ 0x180148280 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeThread()
{
  __int64 result; // rax

  result = 82LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
