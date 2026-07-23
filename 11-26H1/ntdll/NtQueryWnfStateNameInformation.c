/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x180161C70
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180090610 (RtlWaitForWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800CB794 (SignalStartWerSvc.c)
 *     RtlQueryWnfMetaNotification @ 0x1800FD3F0 (RtlQueryWnfMetaNotification.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801492A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  NTSTATUS result; // eax

  result = 370;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
