/*
 * XREFs of MiReleaseNonPagedResourcesNotExposed @ 0x1403C2FD8
 * Callers:
 *     MiFreeLargePageCharges @ 0x1403C4704 (MiFreeLargePageCharges.c)
 *     MiObtainMdlCharges @ 0x1404CA0EC (MiObtainMdlCharges.c)
 *     MiReturnMdlCharges @ 0x140501A88 (MiReturnMdlCharges.c)
 *     MmRemovePhysicalMemory @ 0x140867460 (MmRemovePhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140B60228 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 */

unsigned __int64 __fastcall MiReleaseNonPagedResourcesNotExposed(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2, 16);
  return MiReturnResident(a1, a2);
}
