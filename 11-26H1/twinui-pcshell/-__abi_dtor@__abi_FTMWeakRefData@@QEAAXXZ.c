/*
 * XREFs of ?__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18069F7B0
 * Callers:
 *     _XamlBaseViewController::XamlBaseViewController_::_1_::dtor$0 @ 0x1806CFDD9 (_XamlBaseViewController--XamlBaseViewController_--_1_--dtor$0.c)
 *     _Platform::Details::CustomBox_Windows::Foundation::Size_::CustomBox_Windows::Foundation::Size__::_1_::dtor$0 @ 0x1806D1180 (_Platform--Details--CustomBox_Windows--Foundation--Size_--CustomBox_Windows--Foundation--Size__-.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_GuidedSnapAssistViewController_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$0 @ 0x1806D18D7 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler--LightDismiss.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler_VirtualDesktopSwitcherController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop__)__::_1_::dtor$0 @ 0x1806D192A (_WindowsInternal--ComposableShell--Experiences--Switcher--VirtualDesktopInvokedEventHandler--Vir.c)
 *     _Windows::Foundation::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel___::TypedEventHandler_Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel____GuidedSnapAssistViewController_void_(__cdecl_GuidedSnapAssistViewController::_)(Platform::Object___WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel__)__::_1_::dtor$0 @ 0x1806D198F (_Windows--Foundation--TypedEventHandler_Platform--Object___WindowsInternal--ComposableShell--Exp.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)__::_1_::dtor$0 @ 0x1806DFF04 (_WindowsInternal--ComposableShell--Experiences--Switcher--LightDismissEventHandler-_ea_1806DFF04.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$0 @ 0x1807079CE (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1807079CE.c)
 *     _Platform::WriteOnlyArray_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1_::WriteOnlyArray_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1__::_1_::dtor$0 @ 0x180707A2C (_Platform--WriteOnlyArray_WindowsInternal--ComposableShell--Experiences--Switcher--ISwitchItemCo.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __abi_FTMWeakRefData::__abi_dtor(__abi_FTMWeakRefData *this)
{
  _QWORD *v2; // rcx

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 1) != -1LL )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( __abi_module )
    (*(void (__fastcall **)(struct __abi_Module *))(*(_QWORD *)__abi_module + 8LL))(__abi_module);
  v2 = *(_QWORD **)this;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 0xFFFFFFFF) == 1 )
    *((_DWORD *)v2 + 3) = -1073741824;
  __abi_FTMWeakRefData::ReleaseControlBlock((Platform::Details::ControlBlock **)this);
}
