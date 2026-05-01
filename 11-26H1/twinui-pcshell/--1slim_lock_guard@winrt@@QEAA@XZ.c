/*
 * XREFs of ??1slim_lock_guard@winrt@@QEAA@XZ @ 0x1801D9758
 * Callers:
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_unsigned_int___::remove_::_1_::dtor$1 @ 0x1806CD22F (_winrt--event_winrt--Windows--Foundation--EventHandler_unsigned_int___--remove_--_1_--dtor$1.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception_::_1_::dtor$0 @ 0x1806CE265 (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyn.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___::remove_::_1_::dtor$1 @ 0x1806D32B5 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--WindowId_ea_1806D32B5.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler_::remove_::_1_::dtor$1 @ 0x1806D32EB (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceShownHandler_--r.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::GetResults_::_1_::dtor$0 @ 0x1806DAAB9 (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foun_ea_1806DAAB9.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStream____int64_winrt::hstring_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStream__void_::GetResults_::_1_::dtor$0 @ 0x1806DACE1 (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foun_ea_1806DACE1.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::ErrorCode_::_1_::dtor$0 @ 0x1806E1E58 (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foun_ea_1806E1E58.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_unsigned_int___::add_agile_::_1_::dtor$2 @ 0x1806E31C2 (_winrt--event_winrt--Windows--Foundation--EventHandler_unsigned_int___--add_agile_--_1_--dtor$2.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler_::add_agile_::_1_::dtor$2 @ 0x1806FA20E (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoun_ea_1806FA20E.c)
 *     _winrt::event_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler_::remove_::_1_::dtor$1 @ 0x1806FA220 (_winrt--event_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoun_ea_1806FA220.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress__winrt::Windows::Internal::Shell::implementation::MeetAndChatManager___::promise_type_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress__winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::GetResults_::_1_::dtor$0 @ 0x1806FF479 (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foun_ea_1806FF479.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::slim_lock_guard::~slim_lock_guard(PSRWLOCK *this)
{
  ReleaseSRWLockExclusive_0(*this);
}
