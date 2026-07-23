/*
 * XREFs of NtAlpcSetInformation @ 0x180160010
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x1800167D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18003F4EC (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x180085234 (TppAllocAlpcCompletion.c)
 *     TpCallbackIndependent @ 0x1800BD4B0 (TpCallbackIndependent.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800FB910 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     AlpcRegisterCompletionList @ 0x180103B20 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x18010FF30 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180110440 (AlpcUnregisterCompletionList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  NTSTATUS result; // eax

  result = 143;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
