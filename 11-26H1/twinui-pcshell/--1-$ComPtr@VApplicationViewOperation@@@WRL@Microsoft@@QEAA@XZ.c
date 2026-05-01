/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x180232F90
 * Callers:
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x1806D221D (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x1806E1904 (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x1806E1952 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$0 @ 0x1806E9B1C (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x1806F1ADB (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1806F1B1D (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     __lambda_ff89e8324bd576a9030e3d114281d889_::operator()_::_1_::dtor$0 @ 0x1806F1B9B (__lambda_ff89e8324bd576a9030e3d114281d889_--operator()_--_1_--dtor$0.c)
 *     _TabletModePositioner::CreateAndInitApplicationViewOperation_::_1_::dtor$0 @ 0x1806F1CAB (_TabletModePositioner--CreateAndInitApplicationViewOperation_--_1_--dtor$0.c)
 *     _VoiceAssistantPositioner::SetViewStateForDesiredAppState_::_1_::dtor$2 @ 0x1806F3440 (_VoiceAssistantPositioner--SetViewStateForDesiredAppState_--_1_--dtor$2.c)
 *     _CDesktopPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x1806F34BE (_CDesktopPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _CDesktopPositioner::PresentationChangedForView_::_1_::dtor$3 @ 0x1806F34D0 (_CDesktopPositioner--PresentationChangedForView_--_1_--dtor$3.c)
 *     _SnapServiceProvider::HandleDesktopModeSnapping_::_1_::dtor$0 @ 0x1806F8A1D (_SnapServiceProvider--HandleDesktopModeSnapping_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
