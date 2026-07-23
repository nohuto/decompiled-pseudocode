/*
 * XREFs of ZwUpdateWnfStateData @ 0x180162A70
 * Callers:
 *     SignalStartWerSvc @ 0x1800CB794 (SignalStartWerSvc.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800E2980 (RtlTestAndPublishWnfStateData.c)
 *     RtlPublishWnfStateData @ 0x1800E2A40 (RtlPublishWnfStateData.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1801175DC (RtlpFcNotifyFeatureUsageTarget.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801492A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  NTSTATUS result; // eax

  result = 482;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
