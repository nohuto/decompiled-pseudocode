/*
 * XREFs of ZwOpenEvent @ 0x14069B940
 * Callers:
 *     DifZwOpenEventWrapper @ 0x140635730 (DifZwOpenEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x1407635E4 (PspShutdownCsrProcess.c)
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
