/*
 * XREFs of ZwUpdateWnfStateData @ 0x180162B70
 * Callers:
 *     SignalStartWerSvc @ 0x1800CE024 (SignalStartWerSvc.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800E4AD0 (RtlTestAndPublishWnfStateData.c)
 *     RtlPublishWnfStateData @ 0x1800E4B90 (RtlPublishWnfStateData.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x180117B7C (RtlpFcNotifyFeatureUsageTarget.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801493F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 482LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
