/*
 * XREFs of ??1?$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000C154
 * Callers:
 *     _CProjectedShadowScene::Initialize_::_1_::dtor$2 @ 0x1800E6ED4 (_CProjectedShadowScene--Initialize_--_1_--dtor$2.c)
 *     _CDWriteText::CreateTextFormat_::_1_::dtor$1 @ 0x1800E6EE6 (_CDWriteText--CreateTextFormat_--_1_--dtor$1.c)
 *     _CProjectedShadowScene::Initialize_::_1_::dtor$4 @ 0x1800E6EF8 (_CProjectedShadowScene--Initialize_--_1_--dtor$4.c)
 *     _CDWriteText::CreateTextFormat_::_1_::dtor$3 @ 0x1800E6F0A (_CDWriteText--CreateTextFormat_--_1_--dtor$3.c)
 *     _CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle_::_1_::dtor$2 @ 0x1800E6F40 (_CProjectedShadowScene--CProjectedShadowSceneInstance--AddCasterFromSharedHandle_--_1_--dtor$2.c)
 *     _CGlobalLightSet::Initialize_::_1_::dtor$1 @ 0x1800E76F4 (_CGlobalLightSet--Initialize_--_1_--dtor$1.c)
 *     _CGlobalLightSet::AddNewSharedDistantLightWithType_::_1_::dtor$1 @ 0x1800E7718 (_CGlobalLightSet--AddNewSharedDistantLightWithType_--_1_--dtor$1.c)
 *     _CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle_::_1_::dtor$3 @ 0x1800E772A (_CProjectedShadowScene--CProjectedShadowSceneInstance--AddCasterFromSharedHandle_--_1_--dtor$3.c)
 *     _CSystemBackdropVisual::CreateColorBrush_::_1_::dtor$0 @ 0x1800E773C (_CSystemBackdropVisual--CreateColorBrush_--_1_--dtor$0.c)
 *     _CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster_::_1_::dtor$0 @ 0x1800E7AEE (_CProjectedShadowScene--CProjectedShadowSceneInstance--RemoveCaster_--_1_--dtor$0.c)
 *     _CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle_::_1_::dtor$1 @ 0x1800E7B12 (_CProjectedShadowScene--CProjectedShadowSceneInstance--AddCasterFromSharedHandle_--_1_--dtor$1.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$1 @ 0x1800E7B8C (_CAnimationEngine--AddToStoryboard_--_1_--dtor$1.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$2 @ 0x1800E7B9E (_CAnimationEngine--AddToStoryboard_--_1_--dtor$2.c)
 *     _CAccentAcrylicBlurBehind::CNoiseSurfaceCache::EnsureNoiseSurfaceBrush_::_1_::dtor$6 @ 0x1800E8B1E (_CAccentAcrylicBlurBehind--CNoiseSurfaceCache--EnsureNoiseSurfaceBrush_--_1_--dtor$6.c)
 *     _CAccentAcrylicBlurBehind::CNoiseSurfaceCache::EnsureNoiseSurfaceBrush_::_1_::dtor$0 @ 0x1800E8B42 (_CAccentAcrylicBlurBehind--CNoiseSurfaceCache--EnsureNoiseSurfaceBrush_--_1_--dtor$0.c)
 *     _CAccentAcrylicBlurBehind::CNoiseSurfaceCache::EnsureNoiseSurfaceBrush_::_1_::dtor$1 @ 0x1800E8B54 (_CAccentAcrylicBlurBehind--CNoiseSurfaceCache--EnsureNoiseSurfaceBrush_--_1_--dtor$1.c)
 *     _CAccentAcrylicBlurBehind::CNoiseSurfaceCache::EnsureNoiseSurfaceBrush_::_1_::dtor$2 @ 0x1800E8B66 (_CAccentAcrylicBlurBehind--CNoiseSurfaceCache--EnsureNoiseSurfaceBrush_--_1_--dtor$2.c)
 *     _CAccentAcrylicBlurBehind::CNoiseSurfaceCache::EnsureNoiseSurfaceBrush_::_1_::dtor$3 @ 0x1800E8B78 (_CAccentAcrylicBlurBehind--CNoiseSurfaceCache--EnsureNoiseSurfaceBrush_--_1_--dtor$3.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$8 @ 0x1800E8F87 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
