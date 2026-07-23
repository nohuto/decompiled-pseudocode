/*
 * XREFs of ZwOpenSession @ 0x14072A6C0
 * Callers:
 *     DifZwOpenSessionWrapper @ 0x1406B1380 (DifZwOpenSessionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SessionHandle);
}
