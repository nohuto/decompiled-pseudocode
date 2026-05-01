/*
 * XREFs of ?UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Windows@winrt@@Uevent_token@5@@Z @ 0x180212370
 * Callers:
 *     ?unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805B96B0 (-unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?SettingChanged@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x1802123DC (-SettingChanged@-$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DashboardTaskbarSettings::UnsubscribeFromDaSettingChanged(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = *a1;
  if ( v2 )
  {
    v4 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::SystemSettings::Desktop::Taskbar::IDesktopTaskbarDaSetting>, &v4);
    result = v4;
    if ( v4 )
    {
      winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::SettingChanged(
        &v4,
        &v5);
      return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
    }
  }
  else
  {
    v4 = 0LL;
  }
  return result;
}
