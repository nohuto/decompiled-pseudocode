/*
 * XREFs of ZwQueryInformationCpuPartition @ 0x140725E90
 * Callers:
 *     DifZwQueryInformationCpuPartitionWrapper @ 0x1406B1060 (DifZwQueryInformationCpuPartitionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationCpuPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
