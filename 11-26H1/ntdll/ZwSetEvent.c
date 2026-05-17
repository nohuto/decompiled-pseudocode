/*
 * XREFs of ZwSetEvent @ 0x18015F100
 * Callers:
 *     EtwpSwitchBuffer @ 0x180011380 (EtwpSwitchBuffer.c)
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     RtlpTpTimerRundown @ 0x1800677EC (RtlpTpTimerRundown.c)
 *     EtwpSynchronizeWithLogger @ 0x1800774FC (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x180078000 (EtwpLogger.c)
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     LdrpInitializationComplete @ 0x1800CEC50 (LdrpInitializationComplete.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     RtlpTpWaitRundown @ 0x1800DDAA0 (RtlpTpWaitRundown.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FBE04 (RtlpTpTimerQueueRundown.c)
 *     RtlpWnfMetaCallbackProc @ 0x1801071F0 (RtlpWnfMetaCallbackProc.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1801106B0 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x180149790 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetEvent()
{
  __int64 result; // rax

  result = 14LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
