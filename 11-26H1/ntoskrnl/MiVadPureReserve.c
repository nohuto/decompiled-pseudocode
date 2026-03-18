/*
 * XREFs of MiVadPureReserve @ 0x1403173B0
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1402E5470 (MiProbeAndLockPrepare.c)
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 *     MiDeleteEmptyPageTables @ 0x140315248 (MiDeleteEmptyPageTables.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     NtLockVirtualMemory @ 0x140318600 (NtLockVirtualMemory.c)
 *     MiDecommitInitializePacket @ 0x140361B88 (MiDecommitInitializePacket.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiInPagePageTable @ 0x1403A4C70 (MiInPagePageTable.c)
 *     MiComputeVadCharges @ 0x1404C4640 (MiComputeVadCharges.c)
 *     MiAdjacentVadResolvesPageTable @ 0x1404F5B30 (MiAdjacentVadResolvesPageTable.c)
 *     MiReserveUserMemoryInsertVad @ 0x14095BBAC (MiReserveUserMemoryInsertVad.c)
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 *     MiSelectDataMapAddress @ 0x1409C4E10 (MiSelectDataMapAddress.c)
 *     MiCommitPageTablesForVad @ 0x1409C6018 (MiCommitPageTablesForVad.c)
 *     MiSectionProtectGetCharges @ 0x1409C6FE0 (MiSectionProtectGetCharges.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MiCommitPagefileBackedSection @ 0x1409C9560 (MiCommitPagefileBackedSection.c)
 *     MiReturnVadQuotaCharges @ 0x140A79C0C (MiReturnVadQuotaCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x140B23EB8 (MiReturnPageTablePageCommitment.c)
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
