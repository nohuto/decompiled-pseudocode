/*
 * XREFs of ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1805BA0DC
 * Callers:
 *     ?TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805B4104 (-TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@win.c)
 *     ?GetDashboardButtonStatus@?$produce@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardTaskbarButtonSettingsManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1805B9D00 (-GetDashboardButtonStatus@-$produce@UDashboardTaskbarButtonSettingsManager@implementation@Shell@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ @ 0x1801BAF2C (--0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ.c)
 *     ??$unbox_value_type@_NAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1805BA038 (--$unbox_value_type@_NAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUIInspectab.c)
 *     ?GetValue@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805BA208 (-GetValue@-$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarBadgingSetting@Taskbar@.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall DashboardTaskbarSettings::GetDashboardButtonEnabled(DashboardTaskbarSettings *this)
{
  __int64 (__fastcall ****Value)(_QWORD, void *, __int64 *); // rax
  char v2; // bl
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  char v6; // [rsp+58h] [rbp+10h] BYREF

  winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting::DesktopTaskbarDaSetting((winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting *)&v6);
  winrt::param::hstring::hstring((winrt::param::hstring *)v4, L"Value");
  Value = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting>::GetValue(
                                                                  &v6,
                                                                  &v5,
                                                                  v4);
  v2 = winrt::impl::unbox_value_type<bool,winrt::Windows::Foundation::IInspectable const &>(Value);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return v2;
}
