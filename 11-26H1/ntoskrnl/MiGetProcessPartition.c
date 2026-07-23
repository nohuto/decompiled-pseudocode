/*
 * XREFs of MiGetProcessPartition @ 0x1404441E0
 * Callers:
 *     MiCreateUserPhysicalViewCharges @ 0x140773E70 (MiCreateUserPhysicalViewCharges.c)
 *     VmpPauseResumeNotify @ 0x140822E14 (VmpPauseResumeNotify.c)
 *     MiCreateVsmEnclave @ 0x14087C860 (MiCreateVsmEnclave.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x14087DD64 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiDeleteAweInfoPages @ 0x14087F2AC (MiDeleteAweInfoPages.c)
 *     MiDeleteVadEventAwe @ 0x14087F3B0 (MiDeleteVadEventAwe.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140880B10 (MiInSwapSharedWorkingSetWorker.c)
 *     MiLogCommitRequestFailed @ 0x140881BEC (MiLogCommitRequestFailed.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x140883F14 (MiReferenceNonPagedMemoryProcessList.c)
 *     MiQuerySecureBasicInfo @ 0x140923550 (MiQuerySecureBasicInfo.c)
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiReturnVadCharges @ 0x140997954 (MiReturnVadCharges.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 *     MiCommitVadPreparePacket @ 0x140998470 (MiCommitVadPreparePacket.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemoryPrepare @ 0x140A010AC (MiReserveUserMemoryPrepare.c)
 *     MiRemoveVadCharges @ 0x140A02094 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x140A0567C (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x140ABFF40 (MiAllocateProcessShadow.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 *     MiInSwapStore @ 0x140AEC480 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x140AECA90 (MiInSwapStoreWorker.c)
 *     MmRotatePhysicalView @ 0x140AEF280 (MmRotatePhysicalView.c)
 *     MmInSwapVirtualAddresses @ 0x140AF6684 (MmInSwapVirtualAddresses.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF6D60 (MiDoneWithThisPageGetAnother.c)
 *     MiDeleteVadBitmap @ 0x140AFCE30 (MiDeleteVadBitmap.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B08044 (MiFinishPlaceholderVadReplacement.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198));
}
