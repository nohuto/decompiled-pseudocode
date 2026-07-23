/*
 * XREFs of ZwCreateDebugObject @ 0x140729520
 * Callers:
 *     DifZwCreateDebugObjectWrapper @ 0x1406A22F0 (DifZwCreateDebugObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateDebugObject(
        PHANDLE DebugObjectHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObjectHandle);
}
