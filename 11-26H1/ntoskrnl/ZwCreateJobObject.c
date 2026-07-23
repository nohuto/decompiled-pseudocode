/*
 * XREFs of ZwCreateJobObject @ 0x140729640
 * Callers:
 *     DifZwCreateJobObjectWrapper @ 0x1406A3330 (DifZwCreateJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
