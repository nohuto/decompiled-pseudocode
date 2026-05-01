/*
 * XREFs of ??3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z @ 0x180679EC4
 * Callers:
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$3 @ 0x1806AD176 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1806AD176.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::ItemCloseInvokedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem__)__::_1_::dtor$3 @ 0x1806AD19D (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemCloseInvokedEventHandler--ItemClos.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem__)__::_1_::dtor$3 @ 0x1806AD1F0 (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemInvokedEventHandler--ItemInvokedEv.c)
 *     _Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler_XamlAltTabViewController_void_(__cdecl_XamlAltTabViewController::_)(Platform::Object___Windows::UI::Xaml::Input::KeyRoutedEventArgs__)__::_1_::dtor$3 @ 0x1806AD255 (_Windows--UI--Xaml--Input--KeyEventHandler--KeyEventHandler_XamlAltTabViewController_void_(__cde.c)
 *     _Windows::Foundation::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel___::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel____GuidedSnapAssistViewController_void_(__cdecl_GuidedSnapAssistViewController::_)(Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel__)__::_1_::dtor$3 @ 0x1806B8C83 (_Windows--Foundation--TypedEventHandler_Platform--Object___WindowsInternal--Composa_ea_1806B8C83.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_GuidedSnapAssistViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$3 @ 0x1806B8E66 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1806B8E66.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$3 @ 0x1806B8EB9 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1806B8EB9.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__)__::_1_::dtor$3 @ 0x1806DF44B (_WindowsInternal--ComposableShell--Experiences--Switcher--VirtualDesktopInvokedEven_ea_1806DF44B.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler_VirtualDesktopSwitcherController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__)__::_1_::dtor$3 @ 0x1806DF9B7 (_WindowsInternal--ComposableShell--Experiences--Switcher--VirtualDesktopInvokedEven_ea_1806DF9B7.c)
 * Callees:
 *     ?Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z @ 0x18020C89C (-Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z.c)
 */

void __fastcall Platform::Details::__abi_CaptureBase::operator delete(
        struct Platform::Details::__abi_CaptureBase *a1,
        struct Platform::Details::__abi_CaptureBase *a2)
{
  Platform::Details::__abi_CaptureBase::Delete(a1, a1, a2);
}
