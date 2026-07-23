/*
 * XREFs of ZwSetIRTimer @ 0x14072B460
 * Callers:
 *     DifZwSetIRTimerWrapper @ 0x1406BD390 (DifZwSetIRTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
