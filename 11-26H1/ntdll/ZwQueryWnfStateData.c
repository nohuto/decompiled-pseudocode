/*
 * XREFs of ZwQueryWnfStateData @ 0x180161C50
 * Callers:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18008F650 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1801175DC (RtlpFcNotifyFeatureUsageTarget.c)
 *     RtlRegisterAvailableCpusChangeNotification @ 0x180149020 (RtlRegisterAvailableCpusChangeNotification.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801492A0 (RtlRaiseCustomSystemEventTrigger.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180157C04 (UcpRetrieveCurrentConfigSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  NTSTATUS result; // eax

  result = 369;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
