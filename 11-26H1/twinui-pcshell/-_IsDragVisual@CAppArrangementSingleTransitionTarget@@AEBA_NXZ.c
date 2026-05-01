/*
 * XREFs of ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x1804E5A5C
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E4E10 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 *     ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E5A80 (-_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutO.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E5C7C (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAppArrangementSingleTransitionTarget::_IsDragVisual(CAppArrangementSingleTransitionTarget *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 68);
  return v1 == 2 || ((v1 - 4) & 0xFFFFFFFB) == 0;
}
