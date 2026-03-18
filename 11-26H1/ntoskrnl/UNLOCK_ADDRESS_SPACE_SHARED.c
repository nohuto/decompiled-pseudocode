/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x1404057B0
 * Callers:
 *     MiCopyOnWriteCheckConditions @ 0x1403A2E0C (MiCopyOnWriteCheckConditions.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403BBEA0 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x140405328 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140874E24 (MmCheckForSafeExecution.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x140877984 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiAllocateUserPhysicalPagesCleanup @ 0x140877BB0 (MiAllocateUserPhysicalPagesCleanup.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiUnlockVadRange @ 0x140960890 (MiUnlockVadRange.c)
 *     MiLockUnlockVmCleanup @ 0x140960AFC (MiLockUnlockVmCleanup.c)
 *     MiMapAllImageScpPages @ 0x140962E18 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140962EBC (MiCommitInitialVadMetadataBits.c)
 *     MmIsFileMapped @ 0x1409706E8 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCreateLargePageEvent @ 0x140B3C9EC (MiCreateLargePageEvent.c)
 *     MiDeleteVadLargePageEvent @ 0x140B3EA60 (MiDeleteVadLargePageEvent.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a2 + 600;
  *(_DWORD *)(a1 + 1448) &= ~2u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 600), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 600));
  KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
