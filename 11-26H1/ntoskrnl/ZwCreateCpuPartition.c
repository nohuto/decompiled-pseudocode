/*
 * XREFs of ZwCreateCpuPartition @ 0x1407294C0
 * Callers:
 *     DifZwCreateCpuPartitionWrapper @ 0x1406A1DF0 (DifZwCreateCpuPartitionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCpuPartition(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
