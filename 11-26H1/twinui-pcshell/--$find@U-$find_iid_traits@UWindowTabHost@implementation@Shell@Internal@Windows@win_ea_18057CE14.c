/*
 * XREFs of ??$find@U?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@Windows@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18057CE14
 * Callers:
 *     ??$find@U?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@Windows@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18057CCA8 (--$find@U-$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@impl@win.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<VirtualDesktopNotificationBase<IVirtualDesktopNotification>>
    && v1[1] == 0xDEAAC341452B5CAFuLL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<Windows::Internal::Shell::IWindowTabHostInternal> && v1[1] == 0xED9C7F3DDF3E2E99uLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
