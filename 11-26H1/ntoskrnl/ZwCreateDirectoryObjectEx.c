/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x140729560
 * Callers:
 *     DifZwCreateDirectoryObjectExWrapper @ 0x1406A2480 (DifZwCreateDirectoryObjectExWrapper.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407C5AAC (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x1407C5FFC (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x140885B24 (MiCreatePartitionNamespace.c)
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
