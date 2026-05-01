/*
 * XREFs of ??1?$producer_ref@USearchAppHost@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802D00B0
 * Callers:
 *     _winrt::impl::invoke_winrt::Windows::Foundation::AsyncActionCompletedHandler_winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::dtor$0 @ 0x1806A7A84 (_winrt--impl--invoke_winrt--Windows--Foundation--AsyncActionCompletedHandler_winrt--impl--promis.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring__winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_winrt::hstring__::_1_::dtor$0 @ 0x1806AB3D9 (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell-.c)
 *     __lambda_8b5f1623488306f7e465df1f94f78972_::operator()_::_1_::dtor$2 @ 0x1806AF3F4 (__lambda_8b5f1623488306f7e465df1f94f78972_--operator()_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::subscribe_to_services_::_1_::dtor$16 @ 0x1806AFC9B (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806AFC9B.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable__SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting_std::nullptr_t__::_1_::dtor$1 @ 0x1806C09C3 (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--_ea_1806C09C3.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806D7A4A (_winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackConte_ea_1806D7A4A.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>::~producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a1)
{
  *(_QWORD *)a1 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a1);
}
