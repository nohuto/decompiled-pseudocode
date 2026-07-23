/*
 * XREFs of MiVadPureReserve @ 0x1403193E0
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1402C74B0 (MiProbeAndLockPrepare.c)
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     MiDecommitInitializePacket @ 0x140363928 (MiDecommitInitializePacket.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiComputeVadCharges @ 0x1404BDF20 (MiComputeVadCharges.c)
 *     MiAdjacentVadResolvesPageTable @ 0x1404EF0F0 (MiAdjacentVadResolvesPageTable.c)
 *     MiSelectDataMapAddress @ 0x140995DF0 (MiSelectDataMapAddress.c)
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     MiCommitPagefileBackedSection @ 0x14099A540 (MiCommitPagefileBackedSection.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 *     MiReturnVadQuotaCharges @ 0x140A81B4C (MiReturnVadQuotaCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x140B262B8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x80000) != 0 )
  {
    return (v1 & 0x1C) == 0 && (v1 & 0x400000) == 0;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x3E0) != 0x300 )
      return 0LL;
    v2 = **(_QWORD **)(a1 + 80);
    if ( *(_QWORD *)(v2 + 64) )
      return 0LL;
    return (*(_DWORD *)(v2 + 56) >> 12) & 1;
  }
}
