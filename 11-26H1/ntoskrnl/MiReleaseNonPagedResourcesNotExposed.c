/*
 * XREFs of MiReleaseNonPagedResourcesNotExposed @ 0x1403CCED8
 * Callers:
 *     MiFreeLargePageCharges @ 0x1403CE610 (MiFreeLargePageCharges.c)
 *     MiObtainMdlCharges @ 0x1404C3B1C (MiObtainMdlCharges.c)
 *     MiReturnMdlCharges @ 0x1404FB278 (MiReturnMdlCharges.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140B632C4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 */

unsigned __int64 __fastcall MiReleaseNonPagedResourcesNotExposed(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2, 16);
  return MiReturnResident(a1, a2);
}
