/*
 * XREFs of ??1?$ComPtr@VCDrawBitmapInstruction@@@WRL@Microsoft@@QEAA@XZ @ 0x180088864
 * Callers:
 *     _CWindowList::ZOrder_::_1_::dtor$1 @ 0x1800EB208 (_CWindowList--ZOrder_--_1_--dtor$1.c)
 *     _CTopLevelWindow::UpdateNCAreaBackground_::_1_::dtor$0 @ 0x1800EB312 (_CTopLevelWindow--UpdateNCAreaBackground_--_1_--dtor$0.c)
 *     _CTopLevelWindow::UpdateNCAreaBackground_::_1_::dtor$1 @ 0x1800EB324 (_CTopLevelWindow--UpdateNCAreaBackground_--_1_--dtor$1.c)
 *     _CWindowBorder::CloneVisualTree_::_1_::dtor$0 @ 0x1800EB35A (_CWindowBorder--CloneVisualTree_--_1_--dtor$0.c)
 *     _CDCompThumbnailData::EnsureThumbnailVisual_::_1_::dtor$1 @ 0x1800EB36C (_CDCompThumbnailData--EnsureThumbnailVisual_--_1_--dtor$1.c)
 *     _CWindowList::GetOverlayRootVisualForDesktop_::_1_::dtor$0 @ 0x1800EB37E (_CWindowList--GetOverlayRootVisualForDesktop_--_1_--dtor$0.c)
 *     _CProjectionBorderManager::_GetCapturedItemRootVisual_::_1_::dtor$1 @ 0x1800EB3EA (_CProjectionBorderManager--_GetCapturedItemRootVisual_--_1_--dtor$1.c)
 *     _CWindowTarget::CreateFromSharedHandle_::_1_::dtor$0 @ 0x1800EB3FC (_CWindowTarget--CreateFromSharedHandle_--_1_--dtor$0.c)
 *     _CWindowTarget::CloneVisualTree_::_1_::dtor$1 @ 0x1800EB40E (_CWindowTarget--CloneVisualTree_--_1_--dtor$1.c)
 *     _CWindowTarget::Create_::_1_::dtor$0 @ 0x1800EB444 (_CWindowTarget--Create_--_1_--dtor$0.c)
 *     _CWindowTarget::CloneVisualTree_::_1_::dtor$0 @ 0x1800EB47A (_CWindowTarget--CloneVisualTree_--_1_--dtor$0.c)
 *     _CapturedWindowRepresentation::Create_::_1_::dtor$2 @ 0x1800EB49E (_CapturedWindowRepresentation--Create_--_1_--dtor$2.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$0 @ 0x1800EBA8E (_CWindowBorder--CreateBorderStructure_--_1_--dtor$0.c)
 *     _CDesktopThumbnailCVIVisual::SetVisual_::_1_::dtor$3 @ 0x1800EBB78 (_CDesktopThumbnailCVIVisual--SetVisual_--_1_--dtor$3.c)
 *     _CLivePreview::_FadeOutToGlass_::_1_::dtor$2 @ 0x1800EBBFF (_CLivePreview--_FadeOutToGlass_--_1_--dtor$2.c)
 *     _CDCompThumbnailData::EnsureThumbnailVisual_::_1_::dtor$0 @ 0x1800EBDB6 (_CDCompThumbnailData--EnsureThumbnailVisual_--_1_--dtor$0.c)
 *     _CWindowList::SetBlurredWallpaperSurface_::_1_::dtor$1 @ 0x1800EC1B6 (_CWindowList--SetBlurredWallpaperSurface_--_1_--dtor$1.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$1 @ 0x1800EDA7B (_CWindowList--_CWindowList_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<CDrawBitmapInstruction>::~ComPtr<CDrawBitmapInstruction>(
        CBaseObject **a1)
{
  return Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(a1);
}
