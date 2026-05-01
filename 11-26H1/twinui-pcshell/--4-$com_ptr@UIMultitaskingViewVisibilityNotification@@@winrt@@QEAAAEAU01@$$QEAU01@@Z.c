/*
 * XREFs of ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54
 * Callers:
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800DB470 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801A3154 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801E8420 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x180253A10 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802D8394 (--$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@st.c)
 *     ??$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802D83FC (--$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAU.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x180590DE8 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180590EB4 (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x18059195C (-HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ.c)
 *     ?PointersUp@TouchGestureProcessor@@QEAAXXZ @ 0x1805924A4 (-PointersUp@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180592DD0 (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?InputGestureOperationEnded@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1805948F0 (-InputGestureOperationEnded@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Inte.c)
 *     _lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const_&_ @ 0x1805953E0 (_lambda_e0b0b8eaa13602b9fabc447bd0975459_--operator()_winrt--Windows--System--Threading--ThreadP.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180595910 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x1805962D0 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x1805B94A8 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBU.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBURect@Foundation@56@@Z @ 0x1805B9680 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win_ea_1805B9680.c)
 *     ?Reset@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18066BFA0 (-Reset@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ.c)
 *     ?Reset@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18066E8C8 (-Reset@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?Reset@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18066E930 (-Reset@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
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
