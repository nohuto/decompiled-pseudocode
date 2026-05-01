/*
 * XREFs of _lambda_abf37a923c4e39d61bd96b31f9d5bb1d_::__lambda_abf37a923c4e39d61bd96b31f9d5bb1d_ @ 0x1802B7E94
 * Callers:
 *     _winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs_::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_6f20433e237056822ca4350483f9bb11____::_1_::dtor$0 @ 0x1806D1780 (_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--Xaml--Media--RenderedEventArgs_--E.c)
 *     _XamlBaseViewController::RegisterActivationChanged_::_1_::dtor$4 @ 0x1806D18C5 (_XamlBaseViewController--RegisterActivationChanged_--_1_--dtor$4.c)
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$21 @ 0x1806D8D41 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$21.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_874ff214a0b646fdadc64ee948f17e8a____::_1_::dtor$0 @ 0x1806DEA65 (_WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHa_ea_1806DEA65.c)
 *     _XamlGamingTaskViewHost::RegisterForEvents_::_1_::dtor$27 @ 0x180706924 (_XamlGamingTaskViewHost--RegisterForEvents_--_1_--dtor$27.c)
 *     _XamlGamingTaskViewHost::RegisterForEvents_::_1_::dtor$36 @ 0x180706936 (_XamlGamingTaskViewHost--RegisterForEvents_--_1_--dtor$36.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18009D9D0 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_abf37a923c4e39d61bd96b31f9d5bb1d_::__lambda_abf37a923c4e39d61bd96b31f9d5bb1d_(
        Platform::WeakReference *a1)
{
  Platform::WeakReference::InternalRelease(a1);
}
