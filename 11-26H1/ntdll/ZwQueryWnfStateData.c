/*
 * XREFs of ZwQueryWnfStateData @ 0x180161D50
 * Callers:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18006F200 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x180117B7C (RtlpFcNotifyFeatureUsageTarget.c)
 *     RtlRegisterAvailableCpusChangeNotification @ 0x180149170 (RtlRegisterAvailableCpusChangeNotification.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801493F0 (RtlRaiseCustomSystemEventTrigger.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180157D34 (UcpRetrieveCurrentConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 369LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
