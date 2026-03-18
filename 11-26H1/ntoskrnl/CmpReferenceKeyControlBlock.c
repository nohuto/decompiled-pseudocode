/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140A79B80
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x1404BD714 (CmpTransEnlistUowInKcb.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpGetVirtualStoreRoot @ 0x140859E6C (CmpGetVirtualStoreRoot.c)
 *     CmpPrepareDiscardReplacePost @ 0x14085EE60 (CmpPrepareDiscardReplacePost.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C2ED0 (CmpFindSubKeyByNumberEx.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408D43A0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpCleanUpHigherLayerKcbCaches @ 0x140986E48 (CmpCleanUpHigherLayerKcbCaches.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A2E434 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A2EE88 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpCreateLayerLink @ 0x140A79A78 (CmpCreateLayerLink.c)
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x1408C64F4 (CmpRemoveFromDelayedClose.c)
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
