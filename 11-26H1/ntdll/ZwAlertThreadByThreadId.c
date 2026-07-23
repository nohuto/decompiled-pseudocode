/*
 * XREFs of ZwAlertThreadByThreadId @ 0x18015FC50
 * Callers:
 *     RtlWakeConditionVariable @ 0x1800159A0 (RtlWakeConditionVariable.c)
 *     RtlpWakeConditionVariable @ 0x180016260 (RtlpWakeConditionVariable.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     TppWorkPost @ 0x18002BCE0 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     RtlWakeAllConditionVariable @ 0x180066CF0 (RtlWakeAllConditionVariable.c)
 *     RtlpWaitOnCriticalSection @ 0x180068F40 (RtlpWaitOnCriticalSection.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18006A234 (RtlpWaitOnAddressWakeEntireList.c)
 *     TppIteWakeWaiters @ 0x1800880C0 (TppIteWakeWaiters.c)
 *     RtlRunOnceComplete @ 0x18008F440 (RtlRunOnceComplete.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FB554 (RtlpTpTimerQueueRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  NTSTATUS result; // eax

  result = 113;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
