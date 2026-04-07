/*
 * XREFs of ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C
 * Callers:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180006614 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180013990 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029908 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002A330 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x180033AF8 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180063B98 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800747B8 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x1800822D8 (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180087E70 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?Destroy@CContainerVisual@@IEAAXXZ @ 0x18008E020 (-Destroy@CContainerVisual@@IEAAXXZ.c)
 *     ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800B61AC (-OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAXXZ @ 0x1800B973C (-_CleanupClonedVisualTree@CLivePreview@@AEAAXXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800C9A60 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800CD780 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CContainerVisual::RemoveAllChildren(CContainerVisual *this)
{
  VisualCollection::RemoveAll((CContainerVisual *)((char *)this + 136));
}
