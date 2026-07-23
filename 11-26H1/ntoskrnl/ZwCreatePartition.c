/*
 * XREFs of ZwCreatePartition @ 0x140729760
 * Callers:
 *     DifZwCreatePartitionWrapper @ 0x1406A4450 (DifZwCreatePartitionWrapper.c)
 *     ExpInitializeMemoryMirroring @ 0x140CEA00C (ExpInitializeMemoryMirroring.c)
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
