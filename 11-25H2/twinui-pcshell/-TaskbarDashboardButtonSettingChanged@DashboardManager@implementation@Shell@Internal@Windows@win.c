/*
 * XREFs of ?TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805B4104
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___::Invoke @ 0x1805B0030 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805B0030.c)
 * Callees:
 *     ?OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4TaskbarSettingChangedEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1805B164C (-OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1805BA0DC (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::TaskbarDashboardButtonSettingChanged(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  bool DashboardButtonEnabled; // al
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v5; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    DashboardButtonEnabled = DashboardTaskbarSettings::GetDashboardButtonEnabled(this);
    winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged(
      (__int64)this,
      &v5,
      !DashboardButtonEnabled);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA62,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v3);
  }
}
