/*
 * XREFs of ZwCreateResourceManager @ 0x14069C9E0
 * Callers:
 *     DifZwCreateResourceManagerWrapper @ 0x140632080 (DifZwCreateResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&DesiredAccess);
}
