/*
 * XREFs of ZwAlertThreadByThreadId @ 0x18015FD50
 * Callers:
 *     RtlWakeConditionVariable @ 0x18002A8A0 (RtlWakeConditionVariable.c)
 *     RtlpWakeConditionVariable @ 0x18002B160 (RtlpWakeConditionVariable.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     TppWorkPost @ 0x180041770 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     TppIteWakeWaiters @ 0x180067C70 (TppIteWakeWaiters.c)
 *     RtlRunOnceComplete @ 0x18006EFF0 (RtlRunOnceComplete.c)
 *     RtlWakeAllConditionVariable @ 0x1800784D0 (RtlWakeAllConditionVariable.c)
 *     RtlpWaitOnCriticalSection @ 0x18007A720 (RtlpWaitOnCriticalSection.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18007BA14 (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FBE04 (RtlpTpTimerQueueRundown.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlertThreadByThreadId()
{
  __int64 result; // rax

  result = 113LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
