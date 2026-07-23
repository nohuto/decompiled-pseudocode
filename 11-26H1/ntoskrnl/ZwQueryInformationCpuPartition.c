/*
 * XREFs of ZwQueryInformationCpuPartition @ 0x14072AA60
 * Callers:
 *     DifZwQueryInformationCpuPartitionWrapper @ 0x1406B4C40 (DifZwQueryInformationCpuPartitionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationCpuPartition(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
