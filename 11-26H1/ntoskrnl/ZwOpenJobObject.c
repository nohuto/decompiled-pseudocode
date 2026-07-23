/*
 * XREFs of ZwOpenJobObject @ 0x14072A520
 * Callers:
 *     DifZwOpenJobObjectWrapper @ 0x1406AF8B0 (DifZwOpenJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
