/*
 * XREFs of ZwOpenEvent @ 0x140723BF0
 * Callers:
 *     DifZwOpenEventWrapper @ 0x1406AB820 (DifZwOpenEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&DesiredAccess);
}
