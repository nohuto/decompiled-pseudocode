/*
 * XREFs of ZwSetInformationCpuPartition @ 0x14072B480
 * Callers:
 *     DifZwSetInformationCpuPartitionWrapper @ 0x1406BD500 (DifZwSetInformationCpuPartitionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationCpuPartition(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
