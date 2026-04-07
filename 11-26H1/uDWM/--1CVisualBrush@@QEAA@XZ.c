/*
 * XREFs of ??1CVisualBrush@@QEAA@XZ @ 0x180082324
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180070890 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180081B38 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x180081BA4 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x1800821A8 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180082224 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x1800822D8 (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ?EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ @ 0x180082790 (-EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800834D4 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A6C70 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800AD568 (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B5F84 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 *     ??1LivePreviewResource@@QEAA@XZ @ 0x1800B920C (--1LivePreviewResource@@QEAA@XZ.c)
 *     ?CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA?AVCVisualBrush@@_N@Z @ 0x1800BF440 (-CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA-AVCVisualBrush@@_N@Z.c)
 *     ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560 (-GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CE8B0 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAVCVisualBrush@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x1800CF7D8 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@_NPEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z @ 0x1800CF984 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     _CTransitionVisualController::GetSurfaceFromThumbnail_::_1_::dtor$0 @ 0x1800E73D0 (_CTransitionVisualController--GetSurfaceFromThumbnail_--_1_--dtor$0.c)
 *     _CTopLevelWindow3D::EnsureVisualBrush_::_1_::dtor$0 @ 0x1800E7CEB (_CTopLevelWindow3D--EnsureVisualBrush_--_1_--dtor$0.c)
 *     _CTransitionVisualController::CreateAnimationComponent_::_1_::dtor$0 @ 0x1800E7EA9 (_CTransitionVisualController--CreateAnimationComponent_--_1_--dtor$0.c)
 *     _CSecondaryWindowRepresentation::CreateVisualBrushForAnimation_::_1_::dtor$0 @ 0x1800E8EAA (_CSecondaryWindowRepresentation--CreateVisualBrushForAnimation_--_1_--dtor$0.c)
 *     _CTransitionVisualController::CreateDesktopAnimationComponent_::_1_::dtor$0 @ 0x1800E91D1 (_CTransitionVisualController--CreateDesktopAnimationComponent_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CVisualBrush::~CVisualBrush(CVisualBrush *this)
{
  wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>((char *)this + 8);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this);
}
