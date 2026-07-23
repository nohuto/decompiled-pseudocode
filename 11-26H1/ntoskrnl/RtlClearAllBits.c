/*
 * XREFs of RtlClearAllBits @ 0x140478400
 * Callers:
 *     HalpIrtExtendRemappingRange @ 0x1407874BC (HalpIrtExtendRemappingRange.c)
 *     SepInitializeLowBoxNumberTable @ 0x14081CCE0 (SepInitializeLowBoxNumberTable.c)
 *     VmRegisterFeatureBitmap @ 0x140821EB0 (VmRegisterFeatureBitmap.c)
 *     MiExpandPartitionIds @ 0x14086F3E8 (MiExpandPartitionIds.c)
 *     MiPrepareToHotPatchImage @ 0x14087994C (MiPrepareToHotPatchImage.c)
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 *     HvStoreModifiedData @ 0x1408BD840 (HvStoreModifiedData.c)
 *     HvResetDirtyData @ 0x1408BE918 (HvResetDirtyData.c)
 *     SepGetLowBoxNumberEntry @ 0x140A3E414 (SepGetLowBoxNumberEntry.c)
 *     MiCaptureImageExceptionValues @ 0x140AA5A00 (MiCaptureImageExceptionValues.c)
 *     EtwpUpdateStackTracing @ 0x140AB2624 (EtwpUpdateStackTracing.c)
 *     SepAddLuidToIndexEntry @ 0x140AB7B44 (SepAddLuidToIndexEntry.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     CmCheckRegistry @ 0x140B87680 (CmCheckRegistry.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140BF2DA8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpIommuInitializeAll @ 0x140C1378C (HalpIommuInitializeAll.c)
 *     ViAllocateContiguousMemory @ 0x140C2BDB4 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140C569A4 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset_0(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
