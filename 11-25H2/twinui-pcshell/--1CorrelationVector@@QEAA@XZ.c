/*
 * XREFs of ??1CorrelationVector@@QEAA@XZ @ 0x1802D184C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$0 @ 0x1806D7159 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--HideMACFlyout_--_1_--dtor$.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$1 @ 0x1806D74D3 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_--_1_--dtor$.c)
 *     _Utils::ProtocolLauncher::LaunchUriWithCv_::_1_::dtor$0 @ 0x1806D751B (_Utils--ProtocolLauncher--LaunchUriWithCv_--_1_--dtor$0.c)
 *     _WindowRegistration::WindowRegistration_::_1_::dtor$1 @ 0x1806D7747 (_WindowRegistration--WindowRegistration_--_1_--dtor$1.c)
 *     _WindowRegistration::_WindowRegistration_::_1_::dtor$1 @ 0x1806D776F (_WindowRegistration--_WindowRegistration_--_1_--dtor$1.c)
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$3 @ 0x1806D77D1 (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$3.c)
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$0 @ 0x1806D7820 (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$0.c)
 *     _ApplicationFlyoutView::Show$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806D7893 (_ApplicationFlyoutView--Show$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CorrelationVector::~CorrelationVector(void **this)
{
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(this);
}
