/*
 * XREFs of ??1?$producer_ref@USearchAppHost@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802C7320
 * Callers:
 *     _winrt::impl::invoke_winrt::Windows::Foundation::AsyncActionCompletedHandler_winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::dtor$0 @ 0x1806CD2A5 (_winrt--impl--invoke_winrt--Windows--Foundation--AsyncActionCompletedHandler_winrt--impl--promis.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::subscribe_to_services_::_1_::dtor$16 @ 0x1806CD868 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806CD868.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring__winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_winrt::hstring__::_1_::dtor$0 @ 0x1806D332F (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell-.c)
 *     __lambda_8b5f1623488306f7e465df1f94f78972_::operator()_::_1_::dtor$2 @ 0x1806D8115 (__lambda_8b5f1623488306f7e465df1f94f78972_--operator()_--_1_--dtor$2.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable__SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting_std::nullptr_t__::_1_::dtor$1 @ 0x1806E89D1 (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--_ea_1806E89D1.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806FFF50 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackConte_ea_1806FFF50.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>::~producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a1)
{
  *(_QWORD *)a1 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a1);
}
