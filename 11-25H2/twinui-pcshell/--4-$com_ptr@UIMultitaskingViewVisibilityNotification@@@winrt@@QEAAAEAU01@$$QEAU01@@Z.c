/*
 * XREFs of ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FB0A0
 * Callers:
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801A81B0 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801AA3A8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801F1EA0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x18025A850 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802DF680 (--$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@st.c)
 *     ??$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802DF6E0 (--$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAU.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x18056CFC8 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18056D094 (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x18056DF68 (-HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ.c)
 *     ?PointersUp@TouchGestureProcessor@@QEAAXXZ @ 0x18056EAA0 (-PointersUp@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18056F4EC (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?InputGestureOperationEnded@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x180571080 (-InputGestureOperationEnded@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Inte.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180572000 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x180572B50 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke @ 0x180572D50 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_e0b0b8eaa13.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x1805952F4 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBU.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBURect@Foundation@56@@Z @ 0x1805954B4 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win_ea_1805954B4.c)
 *     ?Reset@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1806461F0 (-Reset@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ.c)
 *     ?Reset@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1806489E8 (-Reset@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?Reset@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180648A50 (-Reset@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 *__fastcall winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
