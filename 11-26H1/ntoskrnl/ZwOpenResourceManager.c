/*
 * XREFs of ZwOpenResourceManager @ 0x140725AB0
 * Callers:
 *     DifZwOpenResourceManagerWrapper @ 0x1406AD2F0 (DifZwOpenResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&DesiredAccess);
}
