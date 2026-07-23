/*
 * XREFs of ZwSetTimer @ 0x140728C00
 * Callers:
 *     DifZwSetTimerWrapper @ 0x1406C0290 (DifZwSetTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN ResumeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
