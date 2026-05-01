/*
 * XREFs of ??3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z @ 0x1806A0A1C
 * Callers:
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$3 @ 0x1806D1903 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1806D1903.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem__)__::_1_::dtor$3 @ 0x1806D1956 (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemInvokedEventHandler--ItemInvokedEv.c)
 *     _Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler_XamlAltTabViewController_void_(__cdecl_XamlAltTabViewController::_)(Platform::Object___Windows::UI::Xaml::Input::KeyRoutedEventArgs__)__::_1_::dtor$3 @ 0x1806D19BB (_Windows--UI--Xaml--Input--KeyEventHandler--KeyEventHandler_XamlAltTabViewController_void_(__cde.c)
 *     _Windows::Foundation::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel___::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel____GuidedSnapAssistViewController_void_(__cdecl_GuidedSnapAssistViewController::_)(Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel__)__::_1_::dtor$3 @ 0x1806DFDA2 (_Windows--Foundation--TypedEventHandler_Platform--Object___WindowsInternal--Composa_ea_1806DFDA2.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_GuidedSnapAssistViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$3 @ 0x1806DFEDD (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1806DFEDD.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$3 @ 0x1806DFF30 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1806DFF30.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__)__::_1_::dtor$3 @ 0x18070804A (_WindowsInternal--ComposableShell--Experiences--Switcher--VirtualDesktopInvokedEven_ea_18070804A.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler_VirtualDesktopSwitcherController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__)__::_1_::dtor$3 @ 0x180708598 (_WindowsInternal--ComposableShell--Experiences--Switcher--VirtualDesktopInvokedEven_ea_180708598.c)
 * Callees:
 *     ?Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z @ 0x1801FF840 (-Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z.c)
 */

void __fastcall Platform::Details::__abi_CaptureBase::operator delete(
        struct Platform::Details::__abi_CaptureBase *a1,
        struct Platform::Details::__abi_CaptureBase *a2)
{
  Platform::Details::__abi_CaptureBase::Delete(a1, a1, a2);
}
