/*
 * XREFs of ZwOpenCpuPartition @ 0x1407258D0
 * Callers:
 *     DifZwOpenCpuPartitionWrapper @ 0x1406AB1F0 (DifZwOpenCpuPartitionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenCpuPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
