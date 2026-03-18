/*
 * XREFs of MiReturnFreeZeroPage @ 0x1402AA690
 * Callers:
 *     MiCoalesceFreeSmallPages @ 0x14028D060 (MiCoalesceFreeSmallPages.c)
 *     MiTradePageMarkedActive @ 0x1402931C0 (MiTradePageMarkedActive.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402AA2EC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDemoteSlabEntry @ 0x1402AA3B4 (MiDemoteSlabEntry.c)
 *     MiWalkImageReleasePage @ 0x1402CC6DC (MiWalkImageReleasePage.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402FA410 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiTradePageMarkedPoisoned @ 0x1405193C8 (MiTradePageMarkedPoisoned.c)
 *     MiFreeLargeInitializationCodePages @ 0x140520698 (MiFreeLargeInitializationCodePages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnFreeZeroPage(__int64 a1, int a2)
{
  __int64 v4; // r9
  int v5; // r10d
  unsigned int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  int v9; // r10d
  int v10; // edx

  v4 = (a1 + 0x220000000000LL) / 48;
  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x50000;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 32) & 0xD7C7FFFF;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_DWORD *)(a1 + 32) = v6;
  v7 = 0;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    v7 = *(_DWORD *)(a1 + 36) & 0x18000000;
  *(_DWORD *)(a1 + 36) = v7;
  *(_DWORD *)(a1 + 32) &= ~0x10000000u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_DWORD *)(a1 + 32) &= 0xFFFF0000;
  v8 = *(_QWORD *)(a1 + 16);
  LOBYTE(v5) = (v8 & 0x3E0) != 0;
  v9 = v5 + 1;
  if ( qword_140E2D740 && (*(_QWORD *)(a1 + 16) & 0x10) == 0 )
    HIDWORD(v8) &= HIDWORD(qword_140E2D748);
  v10 = v9 | 0x400;
  if ( HIDWORD(v8) != -3 )
    v10 = v9;
  return MiInsertPageInFreeOrZeroedList(v4, a2 | (unsigned int)v10);
}
