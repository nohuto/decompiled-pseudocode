/*
 * XREFs of ZwCancelTimer @ 0x140728BE0
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x1406A0820 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
