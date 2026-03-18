/*
 * XREFs of MiGetProcessPartition @ 0x14044C0C0
 * Callers:
 *     MiCreateUserPhysicalViewCharges @ 0x140770E70 (MiCreateUserPhysicalViewCharges.c)
 *     VmpPauseResumeNotify @ 0x14081CC04 (VmpPauseResumeNotify.c)
 *     MiCreateVsmEnclave @ 0x14087647C (MiCreateVsmEnclave.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x140877984 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiDeleteAweInfoPages @ 0x140878ECC (MiDeleteAweInfoPages.c)
 *     MiDeleteVadEventAwe @ 0x140878FD0 (MiDeleteVadEventAwe.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14087A710 (MiInSwapSharedWorkingSetWorker.c)
 *     MiLogCommitRequestFailed @ 0x14087B7EC (MiLogCommitRequestFailed.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x14087DB14 (MiReferenceNonPagedMemoryProcessList.c)
 *     MiQuerySecureBasicInfo @ 0x14091F660 (MiQuerySecureBasicInfo.c)
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemoryPrepare @ 0x14095B7EC (MiReserveUserMemoryPrepare.c)
 *     MiRemoveVadCharges @ 0x14095C7D4 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14095FDBC (MiDecommitRegion.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 *     MiReturnVadCharges @ 0x1409C6974 (MiReturnVadCharges.c)
 *     MiSectionProtectGetCharges @ 0x1409C6FE0 (MiSectionProtectGetCharges.c)
 *     MiCommitExistingVad @ 0x1409C7300 (MiCommitExistingVad.c)
 *     MiCommitVadPreparePacket @ 0x1409C7490 (MiCommitVadPreparePacket.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1409C7944 (MiChargeFullProcessCommitment.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     MiReturnFullProcessCommitment @ 0x140A82B94 (MiReturnFullProcessCommitment.c)
 *     MiAllocateTopLevelPage @ 0x140ABD7B0 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x140ABD950 (MiAllocateProcessShadow.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
 *     MiInSwapStore @ 0x140AE9990 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x140AE9FA0 (MiInSwapStoreWorker.c)
 *     MmRotatePhysicalView @ 0x140AEC270 (MmRotatePhysicalView.c)
 *     MmInSwapVirtualAddresses @ 0x140AF3C64 (MmInSwapVirtualAddresses.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF46EC (MiDoneWithThisPageGetAnother.c)
 *     MiDeleteVadBitmap @ 0x140AFAF24 (MiDeleteVadBitmap.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B05F14 (MiFinishPlaceholderVadReplacement.c)
 *     MmDeleteProcessAddressSpace @ 0x140B3F940 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198));
}
