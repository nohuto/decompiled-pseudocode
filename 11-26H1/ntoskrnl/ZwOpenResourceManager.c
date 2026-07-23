/*
 * XREFs of ZwOpenResourceManager @ 0x14072A680
 * Callers:
 *     DifZwOpenResourceManagerWrapper @ 0x1406B0ED0 (DifZwOpenResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
