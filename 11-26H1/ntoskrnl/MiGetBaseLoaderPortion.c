/*
 * XREFs of MiGetBaseLoaderPortion @ 0x1404F5130
 * Callers:
 *     MiRaisedIrqlFault @ 0x1403A2A28 (MiRaisedIrqlFault.c)
 *     MiBackSingleImageWithPagefile @ 0x1408640D0 (MiBackSingleImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x140864164 (MiBackSystemImageWithPagefile.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToDriver @ 0x14086E13C (MiApplyHotPatchToDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14086E384 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIsActiveSystemHotPatch @ 0x140870D14 (MiIsActiveSystemHotPatch.c)
 *     MiLogHotPatchRundown @ 0x14087272C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140874330 (MiQueryProcessActivePatches.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140A78E84 (MiDriverLoadSucceeded.c)
 *     MiLockdownSections @ 0x140AA94F0 (MiLockdownSections.c)
 *     MiInitializeImageSectionLocks @ 0x140AA98A0 (MiInitializeImageSectionLocks.c)
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140AC7F80 (MiReturnSystemImageCommitment.c)
 *     MiUnlockDriverCode @ 0x140AC7FD8 (MiUnlockDriverCode.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC817C (MiFreeRetpolineImportInfo.c)
 *     MmChangeImageProtection @ 0x140AD5D10 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140AEB960 (MiObtainSectionForDriver.c)
 *     MiUnloadApproved @ 0x140B3B1D8 (MiUnloadApproved.c)
 *     MiSplitDriverPage @ 0x140B47A14 (MiSplitDriverPage.c)
 *     MiApplyRequiredDriverHotPatches @ 0x140B57160 (MiApplyRequiredDriverHotPatches.c)
 *     MiEnumerateBasePatches @ 0x140C016F8 (MiEnumerateBasePatches.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140C017D4 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetBaseLoaderPortion(__int64 a1)
{
  return a1;
}
