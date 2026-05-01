/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUCRect@Geometry@@@Z @ 0x18031EEF8
 * Callers:
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320B80 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804EE9CC (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804EEC3C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,Geometry::CRect &>(
        __int64 *a1,
        _OWORD *a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT>(
           a1,
           a2);
}
