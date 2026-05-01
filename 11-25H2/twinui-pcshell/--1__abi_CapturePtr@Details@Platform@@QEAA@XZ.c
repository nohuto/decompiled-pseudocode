/*
 * XREFs of ??1__abi_CapturePtr@Details@Platform@@QEAA@XZ @ 0x180207578
 * Callers:
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_GuidedSnapAssistViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$1 @ 0x1806AD160 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1806AD160.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler_VirtualDesktopSwitcherController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__)__::_1_::dtor$1 @ 0x1806AD1DA (_WindowsInternal--ComposableShell--Experiences--Switcher--VirtualDesktopInvokedEven_ea_1806AD1DA.c)
 *     _Windows::Foundation::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel___::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel____GuidedSnapAssistViewController_void_(__cdecl_GuidedSnapAssistViewController::_)(Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel__)__::_1_::dtor$1 @ 0x1806AD23F (_Windows--Foundation--TypedEventHandler_Platform--Object___WindowsInternal--Composa_ea_1806AD23F.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$1 @ 0x1806B8EA3 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1806B8EA3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Platform::Details::__abi_CapturePtr::~__abi_CapturePtr(Platform::Details::__abi_CapturePtr *this)
{
  Platform::Details::__abi_CapturePtr *v2; // rdi

  v2 = (Platform::Details::__abi_CapturePtr *)*((_QWORD *)this + 32);
  (**(void (__fastcall ***)(void *, _QWORD))v2)(v2, 0LL);
  if ( v2 != this )
    Platform::Details::Heap::Free(v2);
}
