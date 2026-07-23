/*
 * XREFs of HvlResumePartition @ 0x1405C0840
 * Callers:
 *     <none>
 * Callees:
 *     HvlSetPartitionProperty @ 0x1405C0A98 (HvlSetPartitionProperty.c)
 */

__int64 __fastcall HvlResumePartition(__int64 a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, 0LL);
}
