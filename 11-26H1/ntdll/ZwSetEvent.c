/*
 * XREFs of ZwSetEvent @ 0x18015F000
 * Callers:
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     EtwpSwitchBuffer @ 0x18005CAB0 (EtwpSwitchBuffer.c)
 *     EtwpSynchronizeWithLogger @ 0x180065D1C (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x180066820 (EtwpLogger.c)
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     RtlpTpTimerRundown @ 0x180087C3C (RtlpTpTimerRundown.c)
 *     LdrpInitializationComplete @ 0x1800CC3C0 (LdrpInitializationComplete.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     RtlpTpWaitRundown @ 0x1800DAA10 (RtlpTpWaitRundown.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FB554 (RtlpTpTimerQueueRundown.c)
 *     RtlpWnfMetaCallbackProc @ 0x180106BF0 (RtlpWnfMetaCallbackProc.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x180110240 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139B00 (RtlpProcessReflectionStartup.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x180149640 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
