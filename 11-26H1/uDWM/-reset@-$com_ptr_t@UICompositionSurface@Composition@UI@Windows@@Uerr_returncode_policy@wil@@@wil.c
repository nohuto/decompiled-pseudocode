/*
 * XREFs of ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18003E298 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180053870 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x180053A00 (-InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180058D2C (-Initialize@CCompositor@@IEAAJXZ.c)
 *     ?Rebuild@CPrimitiveGroupVisual@@IEAAJXZ @ 0x18005A67C (-Rebuild@CPrimitiveGroupVisual@@IEAAJXZ.c)
 *     ?OnGraphicsDeviceLost@CBitmapSource@@UEAAXXZ @ 0x180063FE0 (-OnGraphicsDeviceLost@CBitmapSource@@UEAAXXZ.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x180074004 (-InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ.c)
 *     ?GetRealizationSize@CSurfaceBrush@@QEBAJPEAUD2D_SIZE_F@@@Z @ 0x180083974 (-GetRealizationSize@CSurfaceBrush@@QEBAJPEAUD2D_SIZE_F@@@Z.c)
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180089BD0 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z.c)
 *     ?EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180089D4C (-EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x18009AC84 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUIDCompositionSurface@@@Z.c)
 *     ?EnsureBrush@CVisualBrush@@AEAAJXZ @ 0x18009B3D0 (-EnsureBrush@CVisualBrush@@AEAAJXZ.c)
 *     ?Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009B69C (-Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800A80A4 (-Shutdown@CCompositor@@IEAAXXZ.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAXXZ @ 0x1800A8950 (-ForceAtlasInitialize@CContactManager@@QEAAXXZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AA010 (--1CDesktopManager@@EEAA@XZ.c)
 *     ?Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD100 (-Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?OnGraphicsDeviceLost@CPrimitiveGroupVisual@@UEAAXXZ @ 0x1800BDBA0 (-OnGraphicsDeviceLost@CPrimitiveGroupVisual@@UEAAXXZ.c)
 *     ?UpdateVisual@CTetherVisual@@IEAAJXZ @ 0x1800C8C84 (-UpdateVisual@CTetherVisual@@IEAAJXZ.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800CCA88 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?StartAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3850 (-StartAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
