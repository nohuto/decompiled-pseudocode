/*
 * XREFs of HalpIommuFlushPhysicalPtesFromCacheSize @ 0x14047BB44
 * Callers:
 *     HalpIommuUnmapLogicalRange @ 0x14047B208 (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuMapLogical @ 0x14047B810 (HalpIommuMapLogical.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14047BD64 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuMapLogicalRange @ 0x14047BE6C (HalpIommuMapLogicalRange.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1405A0B74 (HalpIommuInitializeDmarPageTable.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14024FA80 (KeInvalidateRangeAllCachesNoIpi.c)
 */

char __fastcall HalpIommuFlushPhysicalPtesFromCacheSize(__int64 a1, unsigned int a2)
{
  char result; // al

  if ( !HalpDeviceBlockUnblockPushLock.ApcState.InProgressFlags )
    return KeInvalidateRangeAllCachesNoIpi(a1, a2);
  return result;
}
