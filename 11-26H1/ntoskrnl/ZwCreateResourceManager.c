/*
 * XREFs of ZwCreateResourceManager @ 0x140729860
 * Callers:
 *     DifZwCreateResourceManagerWrapper @ 0x1406A53C0 (DifZwCreateResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        PUNICODE_STRING Description)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
