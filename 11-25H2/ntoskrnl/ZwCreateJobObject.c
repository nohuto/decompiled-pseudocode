/*
 * XREFs of ZwCreateJobObject @ 0x14069C7C0
 * Callers:
 *     DifZwCreateJobObjectWrapper @ 0x140631B70 (DifZwCreateJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
