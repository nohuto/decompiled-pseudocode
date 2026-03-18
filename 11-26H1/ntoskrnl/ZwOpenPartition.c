/*
 * XREFs of ZwOpenPartition @ 0x140725A30
 * Callers:
 *     IopLiveDumpOpenVMMemoryPartition @ 0x1405D0C1C (IopLiveDumpOpenVMMemoryPartition.c)
 *     DifZwOpenPartitionWrapper @ 0x1406AC9C0 (DifZwOpenPartitionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
