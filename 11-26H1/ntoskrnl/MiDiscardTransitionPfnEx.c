/*
 * XREFs of MiDiscardTransitionPfnEx @ 0x140369FE0
 * Callers:
 *     MiCachedPageFinish @ 0x1402A0710 (MiCachedPageFinish.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiRepurposeStandbySlabPage @ 0x1402C9588 (MiRepurposeStandbySlabPage.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402FA410 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCombineWithStandbyExisting @ 0x140307CC4 (MiCombineWithStandbyExisting.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MiCombineInitialInstance @ 0x1403093AC (MiCombineInitialInstance.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiActOnTransitionPte @ 0x14033C8B0 (MiActOnTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x140369680 (MiGetRepurposedSlabStandbyPage.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiUnlinkStandbyPfn @ 0x14045C8B0 (MiUnlinkStandbyPfn.c)
 *     MiPurgeSlabEntry @ 0x1404C1DFC (MiPurgeSlabEntry.c)
 *     MiLockMirrorWritePages @ 0x140522AD4 (MiLockMirrorWritePages.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 *     MiRelinkTransitionSlabPages @ 0x14052E860 (MiRelinkTransitionSlabPages.c)
 *     MiWalkResetCommitPte @ 0x1406E5400 (MiWalkResetCommitPte.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiClearPfnReuseFields @ 0x14031A250 (MiClearPfnReuseFields.c)
 */

int __fastcall MiDiscardTransitionPfnEx(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  MiRestoreTransitionPte(a1, 0, a3);
  *(_QWORD *)(a1 + 24) &= 0xFFFFFF0000000000uLL;
  MiClearPfnReuseFields(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x220000000000LL) / 48);
}
