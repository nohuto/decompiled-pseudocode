/*
 * XREFs of NtCreateDirectoryObject @ 0x140AFC2C0
 * Callers:
 *     DifNtCreateDirectoryObjectWrapper @ 0x140674010 (DifNtCreateDirectoryObjectWrapper.c)
 *     CreateSystemRootLink @ 0x140CAFEFC (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x140CC2DB0 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140CC2EA4 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140CEC404 (ExpInitializeCallbacks.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140AFC300 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
