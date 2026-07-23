/*
 * XREFs of MiGetBaseLoaderPortion @ 0x1404EE710
 * Callers:
 *     MiRaisedIrqlFault @ 0x1403A4788 (MiRaisedIrqlFault.c)
 *     MiBackSingleImageWithPagefile @ 0x14086A4B0 (MiBackSingleImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x14086A544 (MiBackSystemImageWithPagefile.c)
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToDriver @ 0x14087450C (MiApplyHotPatchToDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIsActiveSystemHotPatch @ 0x140877074 (MiIsActiveSystemHotPatch.c)
 *     MiLogHotPatchRundown @ 0x140878A8C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     MiDriverLoadSucceeded @ 0x1409E4E98 (MiDriverLoadSucceeded.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MiLockdownSections @ 0x140AA58F8 (MiLockdownSections.c)
 *     MiInitializeImageSectionLocks @ 0x140AA5CA8 (MiInitializeImageSectionLocks.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140AC9B70 (MiReturnSystemImageCommitment.c)
 *     MiUnlockDriverCode @ 0x140AC9BC8 (MiUnlockDriverCode.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC9D6C (MiFreeRetpolineImportInfo.c)
 *     MmChangeImageProtection @ 0x140AD2CC0 (MmChangeImageProtection.c)
 *     MiObtainSectionForDriver @ 0x140AEE86C (MiObtainSectionForDriver.c)
 *     MiUnloadApproved @ 0x140B3D458 (MiUnloadApproved.c)
 *     MiSplitDriverPage @ 0x140B497A8 (MiSplitDriverPage.c)
 *     MiApplyRequiredDriverHotPatches @ 0x140B5A0B4 (MiApplyRequiredDriverHotPatches.c)
 *     MiEnumerateBasePatches @ 0x140C07908 (MiEnumerateBasePatches.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140C079E4 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetBaseLoaderPortion(__int64 a1)
{
  return a1;
}
