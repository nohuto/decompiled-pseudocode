/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14027F6FC
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x140315248 (MiDeleteEmptyPageTables.c)
 *     MiPerformVadSplitting @ 0x140315B44 (MiPerformVadSplitting.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MmOutSwapVirtualAddresses @ 0x140405328 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MiCommitPageTableRangesForVad @ 0x14052B41C (MiCommitPageTableRangesForVad.c)
 *     MiSplitReducedCommitClonePage @ 0x14052CA98 (MiSplitReducedCommitClonePage.c)
 *     MiFreeToSubAllocatedRegion @ 0x14095F0C4 (MiFreeToSubAllocatedRegion.c)
 *     MmAssignProcessToJob @ 0x14096022C (MmAssignProcessToJob.c)
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 *     MiSectionProtectGetCharges @ 0x1409C6FE0 (MiSectionProtectGetCharges.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C8F44 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  --*(_WORD *)(a1 + 486);
  v4 = (unsigned __int64 *)(a2 + 608);
  v5 = (AutoBoost *)KeAbPreAcquire(a2 + 608, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
