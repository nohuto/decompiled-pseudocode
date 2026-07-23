/*
 * XREFs of ZwWaitForAlertByThreadId @ 0x14072BC40
 * Callers:
 *     DifZwWaitForAlertByThreadIdWrapper @ 0x1406C2BF0 (DifZwWaitForAlertByThreadIdWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Address);
}
