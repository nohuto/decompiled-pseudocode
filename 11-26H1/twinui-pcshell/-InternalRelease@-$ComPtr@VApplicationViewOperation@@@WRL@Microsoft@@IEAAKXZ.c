/*
 * XREFs of ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AF5E4
 * Callers:
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1800AF60C (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x180232F90 (--1-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1positioningOperationInfo@@QEAA@XZ @ 0x18031F62C (--1positioningOperationInfo@@QEAA@XZ.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320B80 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803214D0 (-SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180406958 (-_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1804089E4 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostI.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804EE9CC (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804EEC3C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ??$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewOperation@@@Z @ 0x1804EF1D0 (--$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicat.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1804EF374 (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 *     ??R_lambda_ff89e8324bd576a9030e3d114281d889_@@QEBA@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1804EFBEC (--R_lambda_ff89e8324bd576a9030e3d114281d889_@@QEBA@AEBV-$com_ptr_t@UIApplicationView@@Uerr_excep.c)
 *     ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1804F01CC (-CreateApplicationViewOperation@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewOperation@@.c)
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805072EC (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 *     ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180508310 (-HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18050A130 (-SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATI.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x18050FC00 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x180510EF0 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_180510EF0.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180510FD0 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180511500 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180511990 (-SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DES.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180517674 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x1805A9E68 (-HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SN.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800AF930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
