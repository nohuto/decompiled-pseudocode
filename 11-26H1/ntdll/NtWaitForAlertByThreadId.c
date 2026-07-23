/*
 * XREFs of NtWaitForAlertByThreadId @ 0x180162AB0
 * Callers:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppWaitCompletion @ 0x180016C30 (TppWaitCompletion.c)
 *     RtlSleepConditionVariableSRW @ 0x180017BF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlSleepConditionVariableCS @ 0x180036250 (RtlSleepConditionVariableCS.c)
 *     RtlpWaitOnCriticalSection @ 0x180068F40 (RtlpWaitOnCriticalSection.c)
 *     RtlWaitOnAddress @ 0x180069B00 (RtlWaitOnAddress.c)
 *     RtlpWaitOnAddress @ 0x180069DA0 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006A0A0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x18006A5E0 (RtlpWaitOnAddressWithTimeout.c)
 *     TppCancelTimer @ 0x180088B20 (TppCancelTimer.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     RtlpRunOnceWaitForInit @ 0x180090498 (RtlpRunOnceWaitForInit.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FB3F0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 484;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
