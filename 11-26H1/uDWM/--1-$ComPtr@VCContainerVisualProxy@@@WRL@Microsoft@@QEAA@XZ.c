/*
 * XREFs of ??1?$ComPtr@VCContainerVisualProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180034FB8
 * Callers:
 *     _CWindowList::GetOverlayRootVisualForDesktop_::_1_::dtor$0 @ 0x1800E70C4 (_CWindowList--GetOverlayRootVisualForDesktop_--_1_--dtor$0.c)
 *     _CWindowTarget::Create_::_1_::dtor$0 @ 0x1800E7122 (_CWindowTarget--Create_--_1_--dtor$0.c)
 *     _CVisual::CloneVisualTree_::_1_::dtor$0 @ 0x1800E7134 (_CVisual--CloneVisualTree_--_1_--dtor$0.c)
 *     _CWindowList::ZOrder_::_1_::dtor$1 @ 0x1800E7182 (_CWindowList--ZOrder_--_1_--dtor$1.c)
 *     _CWindowTarget::CloneVisualTree_::_1_::dtor$0 @ 0x1800E7364 (_CWindowTarget--CloneVisualTree_--_1_--dtor$0.c)
 *     _CDCompThumbnailData::EnsureThumbnailVisual_::_1_::dtor$2 @ 0x1800E73BE (_CDCompThumbnailData--EnsureThumbnailVisual_--_1_--dtor$2.c)
 *     _CLivePreview::_FadeOutToGlass_::_1_::dtor$2 @ 0x1800E73E2 (_CLivePreview--_FadeOutToGlass_--_1_--dtor$2.c)
 *     _CWindowTarget::CreateFromSharedHandle_::_1_::dtor$0 @ 0x1800E76D0 (_CWindowTarget--CreateFromSharedHandle_--_1_--dtor$0.c)
 *     _CWindowList::SetBlurredWallpaperSurface_::_1_::dtor$1 @ 0x1800E7E27 (_CWindowList--SetBlurredWallpaperSurface_--_1_--dtor$1.c)
 *     _CWindowTarget::CloneVisualTree_::_1_::dtor$1 @ 0x1800E8064 (_CWindowTarget--CloneVisualTree_--_1_--dtor$1.c)
 *     _CapturedWindowRepresentation::Create_::_1_::dtor$0 @ 0x1800E8CE8 (_CapturedWindowRepresentation--Create_--_1_--dtor$0.c)
 *     _CapturedWindowRepresentation::Create_::_1_::dtor$2 @ 0x1800E8CFA (_CapturedWindowRepresentation--Create_--_1_--dtor$2.c)
 *     _CapturedWindowRepresentation::Create_::_1_::dtor$3 @ 0x1800E8D0C (_CapturedWindowRepresentation--Create_--_1_--dtor$3.c)
 *     _CCaptureManager::_SetCaptureControllerOffsetTransform_::_1_::dtor$0 @ 0x1800E8D1E (_CCaptureManager--_SetCaptureControllerOffsetTransform_--_1_--dtor$0.c)
 *     _CCaptureManager::SetupWindowCapture_::_1_::dtor$1 @ 0x1800E8DE4 (_CCaptureManager--SetupWindowCapture_--_1_--dtor$1.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$1 @ 0x1800E9A10 (_CWindowList--_CWindowList_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<CContainerVisualProxy>::~ComPtr<CContainerVisualProxy>(CBaseObject **a1)
{
  return Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(a1);
}
