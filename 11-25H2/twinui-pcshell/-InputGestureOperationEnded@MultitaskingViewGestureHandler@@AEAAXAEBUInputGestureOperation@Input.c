/*
 * XREFs of ?InputGestureOperationEnded@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18048B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AppWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CDA74 (-AppWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapCom.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationTimer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18048C524 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationTimer@@@details@wil@@QEAA.c)
 *     ?StartThumbnailTeardownTimer@MultitaskingViewGestureHandler@@AEAAXXZ @ 0x18048C770 (-StartThumbnailTeardownTimer@MultitaskingViewGestureHandler@@AEAAXXZ.c)
 */

void __fastcall MultitaskingViewGestureHandler::InputGestureOperationEnded(
        MultitaskingViewGestureHandler *this,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperation *a2,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs *a3)
{
  __int64 v4; // rdx

  if ( (unsigned __int64)(winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)a2)
                        - 4) <= 2 )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationTimer>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationTimer>::GetImpl'::`2'::impl,
      v4);
    MultitaskingViewGestureHandler::StartThumbnailTeardownTimer(this);
  }
}
