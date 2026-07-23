/*
 * XREFs of ZwCreateIRTimer @ 0x1407295E0
 * Callers:
 *     DifZwCreateIRTimerWrapper @ 0x1406A2E70 (DifZwCreateIRTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIRTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
