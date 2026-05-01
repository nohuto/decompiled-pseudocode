/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceManager@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceManager@@@experimental@std@@@experimental@std@@@Z @ 0x18035CA3C
 * Callers:
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x180246E60 (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1802474E0 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18025A540 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18037FF90 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1803E1000 (winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--UpdateMo_ea_1803E1000.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CStartExperienceManager *>::promise_type>(
        __int64 a1,
        __int64 a2)
{
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::register_completed_callback(
           a1,
           a2);
}
