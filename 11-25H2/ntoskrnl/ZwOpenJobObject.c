/*
 * XREFs of ZwOpenJobObject @ 0x14069D680
 * Callers:
 *     DifZwOpenJobObjectWrapper @ 0x140635A60 (DifZwOpenJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
