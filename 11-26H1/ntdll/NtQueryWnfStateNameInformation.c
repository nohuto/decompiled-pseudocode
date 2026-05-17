/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x180161D70
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800701C0 (RtlWaitForWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800CE024 (SignalStartWerSvc.c)
 *     RtlQueryWnfMetaNotification @ 0x1800FDCA0 (RtlQueryWnfMetaNotification.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801493F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 370LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
