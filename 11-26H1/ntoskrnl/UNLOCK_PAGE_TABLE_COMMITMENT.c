/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MmOutSwapVirtualAddresses @ 0x1403FE41C (MmOutSwapVirtualAddresses.c)
 *     MiSetVadDeleted @ 0x140468E88 (MiSetVadDeleted.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MiCommitPageTableRangesForVad @ 0x14052D93C (MiCommitPageTableRangesForVad.c)
 *     MiSplitReducedCommitClonePage @ 0x14052EFB8 (MiSplitReducedCommitClonePage.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x140A04984 (MiFreeToSubAllocatedRegion.c)
 *     MmAssignProcessToJob @ 0x140A05AEC (MmAssignProcessToJob.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall UNLOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = a2 + 608;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 608), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 608);
  KeAbPostRelease(v3);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
