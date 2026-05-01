/*
 * XREFs of ??$find@U?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UWindowTabHost@Shell@Internal@Windows@winrt@@UIWindowTabHost@2345@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@234@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180558CB8
 * Callers:
 *     ?find_interface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801325A0 (-find_interface@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == *(_QWORD *)&winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>.Data1
    && v1[1] == *(_QWORD *)winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>.Data4 )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IWindowTabHost> && v1[1] == 0x6F2537AA743AABA3LL )
  {
    v2 = *a1;
    v3 = *a1 + 40;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(a1);
}
