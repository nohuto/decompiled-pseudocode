/*
 * XREFs of ??1CorrelationVector@@QEAA@XZ @ 0x1802C5B8C
 * Callers:
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$0 @ 0x1806FF4B9 (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$1 @ 0x1806FF873 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_ea_1806FF873.c)
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$3 @ 0x1806FF8BB (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$3.c)
 *     _WindowRegistration::WindowRegistration_::_1_::dtor$1 @ 0x1806FFBE3 (_WindowRegistration--WindowRegistration_--_1_--dtor$1.c)
 *     _WindowRegistration::_WindowRegistration_::_1_::dtor$1 @ 0x1806FFC0B (_WindowRegistration--_WindowRegistration_--_1_--dtor$1.c)
 *     _ApplicationFlyoutView::EnsureWindow_::_1_::dtor$0 @ 0x1806FFC6D (_ApplicationFlyoutView--EnsureWindow_--_1_--dtor$0.c)
 *     _ApplicationFlyoutView::Show$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806FFD1D (_ApplicationFlyoutView--Show$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CorrelationVector::~CorrelationVector(CorrelationVector *this)
{
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(this);
}
