/*
 * XREFs of ZwSetInformationCpuPartition @ 0x1407268B0
 * Callers:
 *     DifZwSetInformationCpuPartitionWrapper @ 0x1406B9920 (DifZwSetInformationCpuPartitionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationCpuPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
