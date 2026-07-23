/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x14069C6E0
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14073773C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1407EFF58 (MiCreatePartitionNamespace.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
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
