/*
 * XREFs of ?AppWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CDA74
 * Callers:
 *     _lambda_a8635596ed7ae5e31c94755e25628c9f_::operator() @ 0x1801CD7D8 (_lambda_a8635596ed7ae5e31c94755e25628c9f_--operator().c)
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801F1EA0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?OnActivationChanged@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUActivationChangedEventArgs@XamlExplorerHost@4567@@Z @ 0x18021E7A0 (-OnActivationChanged@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 *     _lambda_38d97ac131026f2cd3c3fc9c49359ac8_::operator()_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_const_&_ @ 0x180236ECC (_lambda_38d97ac131026f2cd3c3fc9c49359ac8_--operator()_winrt--Windows--Internal--Shell--XamlExplo.c)
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x180273A28 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?InputGestureOperationEnded@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18048B7F0 (-InputGestureOperationEnded@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input.c)
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18048B830 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x180497498 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804982C0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     ?InputGestureOperationEnded@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x180571080 (-InputGestureOperationEnded@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Inte.c)
 *     ?InputGestureOperationStarted_@TouchEdgeGestureTelemetry@@QEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@@Z @ 0x180571110 (-InputGestureOperationStarted_@TouchEdgeGestureTelemetry@@QEAAXAEBUInputGestureOperation@Input@I.c)
 *     _lambda_eaace0cd5d6158c1763c6ff941475635_::operator()_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_const_&_ @ 0x180678F2C (_lambda_eaace0cd5d6158c1763c6ff941475635_--operator()_winrt--Windows--Internal--Shell--XamlExplo.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v7 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 56LL))(v1, &v7);
  winrt::check_hresult(&v6, v2, &v4);
  return v7;
}
