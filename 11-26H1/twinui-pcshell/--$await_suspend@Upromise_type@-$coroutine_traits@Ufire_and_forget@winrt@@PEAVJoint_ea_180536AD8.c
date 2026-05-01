/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVJointResize@@AEBUSecondaryViewInfo@3@W4DWMTRANSITION_TARGET@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVJointResize@@AEBUSecondaryViewInfo@3@W4DWMTRANSITION_TARGET@@@experimental@std@@@experimental@std@@@Z @ 0x180536AD8
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x18053A1A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,JointResize *,JointResize::SecondaryViewInfo const &,enum DWMTRANSITION_TARGET>::promise_type>()
{
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::register_completed_callback();
}
