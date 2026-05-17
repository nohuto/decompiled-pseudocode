/*
 * XREFs of NtAlpcSetInformation @ 0x180160110
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x18002B6D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180054F6C (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x180064DE4 (TppAllocAlpcCompletion.c)
 *     TpCallbackIndependent @ 0x1800BFD20 (TpCallbackIndependent.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800FC1C0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     AlpcRegisterCompletionList @ 0x1801047A0 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x1801103A0 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x1801108B0 (AlpcUnregisterCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcSetInformation()
{
  __int64 result; // rax

  result = 143LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
