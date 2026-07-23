/*
 * XREFs of ZwOpenTimer @ 0x14072A720
 * Callers:
 *     DifZwOpenTimerWrapper @ 0x1406B1B40 (DifZwOpenTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
