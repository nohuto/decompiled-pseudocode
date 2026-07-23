/*
 * XREFs of ZwOpenPartition @ 0x14072A600
 * Callers:
 *     IopLiveDumpOpenVMMemoryPartition @ 0x1405D3420 (IopLiveDumpOpenVMMemoryPartition.c)
 *     DifZwOpenPartitionWrapper @ 0x1406B05A0 (DifZwOpenPartitionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PartitionHandle);
}
