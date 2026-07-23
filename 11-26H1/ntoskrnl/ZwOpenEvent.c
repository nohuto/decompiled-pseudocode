/*
 * XREFs of ZwOpenEvent @ 0x1407287C0
 * Callers:
 *     DifZwOpenEventWrapper @ 0x1406AF400 (DifZwOpenEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
