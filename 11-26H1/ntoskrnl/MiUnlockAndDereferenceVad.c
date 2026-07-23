/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x14027EB70
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiProbeAndLockPrepare @ 0x1402C74B0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MiFaultTrimBehind @ 0x14043AA6C (MiFaultTrimBehind.c)
 *     MiFinishVadDeletion @ 0x14043B7B8 (MiFinishVadDeletion.c)
 *     MmUpdateUserShadowStackValue @ 0x1404DA2DC (MmUpdateUserShadowStackValue.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     MmLockPhysicalPagesByVa @ 0x1406EF4CC (MmLockPhysicalPagesByVa.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     MmSecureVirtualMemoryEx @ 0x14077A5F0 (MmSecureVirtualMemoryEx.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14087103C (MmAdjustSecuredVirtualMemorySize.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiCreatePatchSectionRequest @ 0x140875B58 (MiCreatePatchSectionRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x1408763E8 (MiGetVadForHotPatchInProgress.c)
 *     MmCommitHotPatchTable @ 0x14087AD88 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x14087B034 (MmPrepareImagePagesForHotPatch.c)
 *     MiCreateEnclave @ 0x14087C3B8 (MiCreateEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     NtTerminateEnclave @ 0x14087D760 (NtTerminateEnclave.c)
 *     MiScrubProcessLargePage @ 0x1408842B8 (MiScrubProcessLargePage.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     MiHandleInsertedDataVad @ 0x140996734 (MiHandleInsertedDataVad.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409EE268 (MmStoreAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiCleanVad @ 0x140A00E3C (MiCleanVad.c)
 *     MiReserveUserMemoryFinishVad @ 0x140A01EA0 (MiReserveUserMemoryFinishVad.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A027C4 (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MiFreeToSubAllocatedRegion @ 0x140A04984 (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     MiCommitInitialVadMetadataBits @ 0x140A08D44 (MiCommitInitialVadMetadataBits.c)
 *     MiGetWriteWatchFinish @ 0x140A92888 (MiGetWriteWatchFinish.c)
 *     MiQuerySingleLoadedPatch @ 0x140A9D93C (MiQuerySingleLoadedPatch.c)
 *     MiCfgMarkValidEntries @ 0x140AA27E4 (MiCfgMarkValidEntries.c)
 *     MiResetVirtualMemory @ 0x140AAF5F0 (MiResetVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140AB8910 (NtResetWriteWatch.c)
 *     MiInitializeEnclave @ 0x140AB8BBC (MiInitializeEnclave.c)
 *     MmRotatePhysicalView @ 0x140AEF280 (MmRotatePhysicalView.c)
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140B2CB38 (MmSelectVsmEnclaveByAddress.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6E518 (MiProcessVaRangesInfoClass.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C07A84 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
