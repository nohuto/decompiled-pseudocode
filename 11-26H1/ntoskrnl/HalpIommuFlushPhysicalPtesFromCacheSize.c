/*
 * XREFs of HalpIommuFlushPhysicalPtesFromCacheSize @ 0x1404754B4
 * Callers:
 *     HalpIommuUnmapLogicalRange @ 0x140474B78 (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuMapLogical @ 0x140475180 (HalpIommuMapLogical.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404756D4 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuMapLogicalRange @ 0x1404757DC (HalpIommuMapLogicalRange.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1405A3384 (HalpIommuInitializeDmarPageTable.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402513E0 (KeInvalidateRangeAllCachesNoIpi.c)
 */

char __fastcall HalpIommuFlushPhysicalPtesFromCacheSize(__int64 a1, unsigned int a2)
{
  char result; // al

  if ( !HalpDeviceBlockUnblockPushLock.ApcState.InProgressFlags )
    return KeInvalidateRangeAllCachesNoIpi(a1, a2);
  return result;
}
