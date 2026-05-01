/*
 * XREFs of ?TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805D7DA8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___::Invoke @ 0x1805D3F30 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805D3F30.c)
 * Callees:
 *     ?OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4TaskbarSettingChangedEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1805D54B4 (-OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58311344@@@details@wil@@QEAA_NXZ @ 0x1805DACD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58311344@@@details@wil@@QEAA_NXZ.c)
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1805DDC68 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::TaskbarDashboardButtonSettingChanged(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  bool DashboardButtonEnabled; // al
  DashboardTaskbarSettings *v3; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    DashboardButtonEnabled = DashboardTaskbarSettings::GetDashboardButtonEnabled(this);
    winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged(
      (void (__fastcall *)(char *))this,
      &v6,
      !DashboardButtonEnabled);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_58311344>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58311344>::GetImpl'::`2'::impl)
      && !DashboardTaskbarSettings::GetDashboardButtonEnabled(v3) )
    {
      SHRegSetUSValueW(L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh", L"BrokerCaller", 1u, &pvData, 0, 2u);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xAAD,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v4);
  }
}
