/*
 * XREFs of ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1804E2840
 * Callers:
 *     ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x1804E3C28 (-_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ.c)
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E51C0 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E5C7C (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 *     s_GetAlignedRectsForApp @ 0x1804E630C (s_GetAlignedRectsForApp.c)
 *     ?v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E63F0 (-v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall MatchRectAspectRatio(struct tagRECT *a1, const struct tagRECT *a2)
{
  int v2; // r8d
  LONG left; // ebx

  v2 = a2->bottom - a2->top;
  if ( v2 )
  {
    left = a1->left;
    a1->right = left + MulDiv(a1->bottom - a1->top, a2->right - a2->left, v2);
  }
}
