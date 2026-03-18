/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x14027F600
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiProbeAndLockPrepare @ 0x1402E5470 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
 *     MiFaultTrimBehind @ 0x140441F5C (MiFaultTrimBehind.c)
 *     MiFinishVadDeletion @ 0x140442CA8 (MiFinishVadDeletion.c)
 *     MmUpdateUserShadowStackValue @ 0x1404E0BFC (MmUpdateUserShadowStackValue.c)
 *     MiObtainReferencedSecureVad @ 0x1404E4F18 (MiObtainReferencedSecureVad.c)
 *     MmLockPhysicalPagesByVa @ 0x1406EA82C (MmLockPhysicalPagesByVa.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 *     MmSecureVirtualMemoryEx @ 0x140777750 (MmSecureVirtualMemoryEx.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14086AC5C (MmAdjustSecuredVirtualMemorySize.c)
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     MiCreatePatchSectionRequest @ 0x14086F788 (MiCreatePatchSectionRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x140870088 (MiGetVadForHotPatchInProgress.c)
 *     MmCommitHotPatchTable @ 0x140874A28 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140874C50 (MmPrepareImagePagesForHotPatch.c)
 *     MiCreateEnclave @ 0x140875FD4 (MiCreateEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140876988 (MiLoadSectionIntoVsmEnclave.c)
 *     NtTerminateEnclave @ 0x140877380 (NtTerminateEnclave.c)
 *     MiScrubProcessLargePage @ 0x14087DEB8 (MiScrubProcessLargePage.c)
 *     MiCleanVad @ 0x14095B57C (MiCleanVad.c)
 *     MiReserveUserMemoryFinishVad @ 0x14095C5E0 (MiReserveUserMemoryFinishVad.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14095CF04 (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14095D738 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x14095E5D8 (MmProtectVirtualMemory.c)
 *     MiFreeToSubAllocatedRegion @ 0x14095F0C4 (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x14095F790 (MiFreeVirtualMemory.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     MiCommitInitialVadMetadataBits @ 0x140962EBC (MiCommitInitialVadMetadataBits.c)
 *     MmUnsecureVirtualMemory @ 0x1409C1B90 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     MiHandleInsertedDataVad @ 0x1409C5754 (MiHandleInsertedDataVad.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C8F44 (MiAllocateFromSubAllocatedRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409F1A98 (MmStoreAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     MiGetWriteWatchFinish @ 0x140A8DBB8 (MiGetWriteWatchFinish.c)
 *     MiQuerySingleLoadedPatch @ 0x140A997BC (MiQuerySingleLoadedPatch.c)
 *     MiCfgMarkValidEntries @ 0x140AA0D20 (MiCfgMarkValidEntries.c)
 *     MiResetVirtualMemory @ 0x140AB1600 (MiResetVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140AB72D0 (NtResetWriteWatch.c)
 *     MiInitializeEnclave @ 0x140AB757C (MiInitializeEnclave.c)
 *     MmRotatePhysicalView @ 0x140AEC270 (MmRotatePhysicalView.c)
 *     NtLoadEnclaveData @ 0x140AEE740 (NtLoadEnclaveData.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140B2AAB8 (MmSelectVsmEnclaveByAddress.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6B41C (MiProcessVaRangesInfoClass.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C01874 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiUnlockVad @ 0x14027F670 (MiUnlockVad.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(volatile signed __int32 *P)
{
  signed __int32 v2; // eax
  struct _KTHREAD *CurrentThread; // rcx

  v2 = _InterlockedDecrement(P + 9);
  if ( v2 == -1 )
    KeBugCheckEx(0x1Au, 0x41203uLL, (ULONG_PTR)P, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  if ( v2 )
  {
    MiUnlockVad(CurrentThread, P);
  }
  else
  {
    MiUnlockVad(CurrentThread, P);
    ExFreePoolWithTag((PVOID)P, 0);
  }
}
