/*
 * XREFs of NtWaitForAlertByThreadId @ 0x180162BB0
 * Callers:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppWaitCompletion @ 0x18002BB30 (TppWaitCompletion.c)
 *     RtlSleepConditionVariableSRW @ 0x18002CAF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlSleepConditionVariableCS @ 0x18004BCD0 (RtlSleepConditionVariableCS.c)
 *     TppCancelTimer @ 0x1800686D0 (TppCancelTimer.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpRunOnceWaitForInit @ 0x180070048 (RtlpRunOnceWaitForInit.c)
 *     RtlpWaitOnCriticalSection @ 0x18007A720 (RtlpWaitOnCriticalSection.c)
 *     RtlWaitOnAddress @ 0x18007B2E0 (RtlWaitOnAddress.c)
 *     RtlpWaitOnAddress @ 0x18007B580 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18007B880 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x18007BDC0 (RtlpWaitOnAddressWithTimeout.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FBCA0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForAlertByThreadId()
{
  __int64 result; // rax

  result = 484LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
