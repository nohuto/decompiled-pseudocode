/*
 * XREFs of ZwCancelTimer @ 0x140724010
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x14069CC40 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, CurrentState);
}
