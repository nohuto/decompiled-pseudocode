/*
 * XREFs of ?InputGestureOperationEnded@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1805948F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?AppWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801C4638 (-AppWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapCom.c)
 *     ?InputGestureOperationEnded@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180594958 (-InputGestureOperationEnded@TouchEdgeGestureTelemetry@@SAXXZ.c)
 */

void __fastcall TouchEdgeGestureProcessor::InputGestureOperationEnded(
        TouchEdgeGestureProcessor *this,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperation *a2,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs *a3)
{
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned __int64)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)a2) <= 3 )
  {
    *((_DWORD *)this + 22) = 0;
    *((_QWORD *)this + 12) = 0LL;
    v4 = 0LL;
    winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)this + 1, &v4);
    if ( v4 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v4);
    TouchEdgeGestureTelemetry::InputGestureOperationEnded();
  }
}
