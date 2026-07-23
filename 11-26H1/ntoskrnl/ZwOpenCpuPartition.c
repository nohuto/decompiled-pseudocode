/*
 * XREFs of ZwOpenCpuPartition @ 0x14072A4A0
 * Callers:
 *     DifZwOpenCpuPartitionWrapper @ 0x1406AEDD0 (DifZwOpenCpuPartitionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenCpuPartition(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
