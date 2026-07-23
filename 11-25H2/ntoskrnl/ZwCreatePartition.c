/*
 * XREFs of ZwCreatePartition @ 0x14069C8E0
 * Callers:
 *     ExpInitializeMemoryMirroring @ 0x140C2F1BC (ExpInitializeMemoryMirroring.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ParentPartitionHandle);
}
