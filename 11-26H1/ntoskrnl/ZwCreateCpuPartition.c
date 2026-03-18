/*
 * XREFs of ZwCreateCpuPartition @ 0x1407248F0
 * Callers:
 *     DifZwCreateCpuPartitionWrapper @ 0x14069E210 (DifZwCreateCpuPartitionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCpuPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
