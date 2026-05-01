/*
 * XREFs of ??$find@U?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@Windows@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18057CCA8
 * Callers:
 *     ??$find@U?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@4@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18057CD00 (--$find@U-$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@win_ea_18057CD00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IApplicationViewChangeListener> && v1[1] == 0x5C48281337B642A9LL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IImmersiveSettingsCacheNotification> && v1[1] == 0x867F291C4929849AuLL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  return winrt::impl::interface_list<VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>();
}
