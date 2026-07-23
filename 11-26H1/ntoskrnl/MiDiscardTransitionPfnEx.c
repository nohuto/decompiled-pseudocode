/*
 * XREFs of MiDiscardTransitionPfnEx @ 0x14036BD80
 * Callers:
 *     MiCachedPageFinish @ 0x14029FC60 (MiCachedPageFinish.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiRepurposeStandbySlabPage @ 0x1402AB348 (MiRepurposeStandbySlabPage.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x14036B420 (MiGetRepurposedSlabStandbyPage.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiUnlinkStandbyPfn @ 0x140456458 (MiUnlinkStandbyPfn.c)
 *     MiPurgeSlabEntry @ 0x1404BB64C (MiPurgeSlabEntry.c)
 *     MiLockMirrorWritePages @ 0x140525140 (MiLockMirrorWritePages.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
 *     MiRelinkTransitionSlabPages @ 0x140530D80 (MiRelinkTransitionSlabPages.c)
 *     MiWalkResetCommitPte @ 0x1406EA0B0 (MiWalkResetCommitPte.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 */

int __fastcall MiDiscardTransitionPfnEx(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  MiRestoreTransitionPte(a1, 0, a3);
  *(_QWORD *)(a1 + 24) &= 0xFFFFFF0000000000uLL;
  MiClearPfnReuseFields(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x220000000000LL) / 48);
}
