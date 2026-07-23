/*
 * XREFs of ZwOpenPartition @ 0x14069D760
 * Callers:
 *     IopLiveDumpOpenVMMemoryPartition @ 0x140598D38 (IopLiveDumpOpenVMMemoryPartition.c)
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
