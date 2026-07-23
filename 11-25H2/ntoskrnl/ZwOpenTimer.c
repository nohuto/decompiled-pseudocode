/*
 * XREFs of ZwOpenTimer @ 0x14069D880
 * Callers:
 *     DifZwOpenTimerWrapper @ 0x140637040 (DifZwOpenTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
