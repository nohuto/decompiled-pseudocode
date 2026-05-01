/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x180241E7C
 * Callers:
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x1806ADD4D (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x1806BA94D (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x1806BA99B (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$0 @ 0x1806C1B7C (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x1806C9BCC (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1806C9C0E (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     __lambda_ff89e8324bd576a9030e3d114281d889_::operator()_::_1_::dtor$0 @ 0x1806C9CB5 (__lambda_ff89e8324bd576a9030e3d114281d889_--operator()_--_1_--dtor$0.c)
 *     _TabletModePositioner::CreateAndInitApplicationViewOperation_::_1_::dtor$0 @ 0x1806C9DC5 (_TabletModePositioner--CreateAndInitApplicationViewOperation_--_1_--dtor$0.c)
 *     _VoiceAssistantPositioner::SetViewStateForDesiredAppState_::_1_::dtor$2 @ 0x1806CAEE9 (_VoiceAssistantPositioner--SetViewStateForDesiredAppState_--_1_--dtor$2.c)
 *     _CDesktopPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x1806CAF67 (_CDesktopPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _CDesktopPositioner::PresentationChangedForView_::_1_::dtor$3 @ 0x1806CAF79 (_CDesktopPositioner--PresentationChangedForView_--_1_--dtor$3.c)
 *     _SnapServiceProvider::HandleDesktopModeSnapping_::_1_::dtor$0 @ 0x1806D0189 (_SnapServiceProvider--HandleDesktopModeSnapping_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
