/*
 * XREFs of ??1?$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800893A4
 * Callers:
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$6 @ 0x1800EB48C (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$6.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$5 @ 0x1800EB5EB (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$5.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$9 @ 0x1800EB882 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$9.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$11 @ 0x1800EB8A6 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$11.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$10 @ 0x1800EB900 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$10.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$1 @ 0x1800EB912 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$1.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$5 @ 0x1800EB924 (_CSpriteVisual--Initialize_--_1_--dtor$5.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$4 @ 0x1800EB936 (_CSpriteVisual--Initialize_--_1_--dtor$4.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$2 @ 0x1800EB948 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$2.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$1 @ 0x1800EB9EC (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$1.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$5 @ 0x1800EB9FE (_CWindowBorder--CreateBorderStructure_--_1_--dtor$5.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$4 @ 0x1800EBA22 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$4.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$0 @ 0x1800EBA34 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$0.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$7 @ 0x1800EBA58 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$7.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$8 @ 0x1800EBA6A (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$8.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$12 @ 0x1800EBA7C (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$12.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$4 @ 0x1800EBAB2 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$4.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$1 @ 0x1800EBAE8 (_CSpriteVisual--Initialize_--_1_--dtor$1.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$2 @ 0x1800EBAFA (_CSpriteVisual--Initialize_--_1_--dtor$2.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$3 @ 0x1800EBB0C (_CSpriteVisual--Initialize_--_1_--dtor$3.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$1 @ 0x1800EBB66 (_CAnimationEngine--AddToStoryboard_--_1_--dtor$1.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$2 @ 0x1800EC585 (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$2.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$3 @ 0x1800EC59B (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$3.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$4 @ 0x1800EC5B1 (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$4.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$5 @ 0x1800EC5C7 (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$5.c)
 *     _wil::get_range_nothrow_Windows::Devices::Display::Core::DisplayTarget____::_1_::dtor$1 @ 0x1800ECFD9 (_wil--get_range_nothrow_Windows--Devices--Display--Core--DisplayTarget____--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
