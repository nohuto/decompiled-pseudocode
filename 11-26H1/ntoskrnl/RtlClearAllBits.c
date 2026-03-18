/*
 * XREFs of RtlClearAllBits @ 0x14047EA90
 * Callers:
 *     HalpIrtExtendRemappingRange @ 0x140784988 (HalpIrtExtendRemappingRange.c)
 *     SepInitializeLowBoxNumberTable @ 0x140816AD0 (SepInitializeLowBoxNumberTable.c)
 *     VmRegisterFeatureBitmap @ 0x14081BCA0 (VmRegisterFeatureBitmap.c)
 *     MiExpandPartitionIds @ 0x140869008 (MiExpandPartitionIds.c)
 *     MiPrepareToHotPatchImage @ 0x1408735EC (MiPrepareToHotPatchImage.c)
 *     MmStoreRegister @ 0x14087D67C (MmStoreRegister.c)
 *     HvStoreModifiedData @ 0x1408B7270 (HvStoreModifiedData.c)
 *     HvResetDirtyData @ 0x1408B8348 (HvResetDirtyData.c)
 *     SepAddLuidToIndexEntry @ 0x140A2B9A4 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A2C7B8 (SepGetLowBoxNumberEntry.c)
 *     EtwpUpdateStackTracing @ 0x140A70A48 (EtwpUpdateStackTracing.c)
 *     MiCaptureImageExceptionValues @ 0x140AA95F8 (MiCaptureImageExceptionValues.c)
 *     HvpPerformLogFileRecovery @ 0x140AEB2A8 (HvpPerformLogFileRecovery.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 *     CmCheckRegistry @ 0x140B7E7A0 (CmCheckRegistry.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140BECDA8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpIommuInitializeAll @ 0x140C0D57C (HalpIommuInitializeAll.c)
 *     ViAllocateContiguousMemory @ 0x140C25DA4 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140C509A4 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset_0(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
