/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x140AFC2E0
 * Callers:
 *     DifNtCreateDirectoryObjectExWrapper @ 0x140673E70 (DifNtCreateDirectoryObjectExWrapper.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140AFC300 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, ShadowDirectoryHandle, Flags);
}
