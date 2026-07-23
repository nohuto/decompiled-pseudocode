/*
 * XREFs of ZwCancelTimer @ 0x14069BD60
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x140630CD0 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
