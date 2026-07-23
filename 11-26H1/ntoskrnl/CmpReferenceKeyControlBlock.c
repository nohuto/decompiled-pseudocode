/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140A81AC0
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x1404B6EF4 (CmpTransEnlistUowInKcb.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpGetVirtualStoreRoot @ 0x140860160 (CmpGetVirtualStoreRoot.c)
 *     CmpPrepareDiscardReplacePost @ 0x140865150 (CmpPrepareDiscardReplacePost.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408DA960 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpCleanUpHigherLayerKcbCaches @ 0x140948B48 (CmpCleanUpHigherLayerKcbCaches.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A402C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A40D14 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpCreateLayerLink @ 0x140A819B8 (CmpCreateLayerLink.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x1408CCAC4 (CmpRemoveFromDelayedClose.c)
 */

void __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
    CmpRemoveFromDelayedClose(BugCheckParameter2);
}
