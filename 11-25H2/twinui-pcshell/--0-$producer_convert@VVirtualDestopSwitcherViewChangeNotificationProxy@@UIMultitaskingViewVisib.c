/*
 * XREFs of ??0?$producer_convert@VVirtualDestopSwitcherViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@X@impl@winrt@@QEAA@XZ @ 0x18029C578
 * Callers:
 *     ??0?$producers_base@Uimmersive_shell_component@winrt@@V?$tuple@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180151D08 (--0-$producers_base@Uimmersive_shell_component@winrt@@V-$tuple@UIObjectWithSite@@UIServiceProvid.c)
 *     ??0?$producers_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@V?$tuple@UIThemeCoordinator@Themes@UI@Internal@Windows@winrt@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029C520 (--0-$producers_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@V-$tuple@.c)
 *     ??0?$producers_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UDashboardActivator@Shell@Internal@Windows@winrt@@UIClassFactory@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029DAA4 (--0-$producers_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@V-$tuple@UD.c)
 *     ??0?$producers_base@VVirtualDestopSwitcherViewChangeNotificationProxy@@V?$tuple@UIMultitaskingViewVisibilityNotification@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029F00C (--0-$producers_base@VVirtualDestopSwitcherViewChangeNotificationProxy@@V-$tuple@UIMultitaskingVi.c)
 * Callees:
 *     ??0?$producer@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIClassFactory@@X@impl@winrt@@QEAA@XZ @ 0x180297018 (--0-$producer@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIClassFactory@@X.c)
 */

_QWORD *__fastcall winrt::impl::producer_convert<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification,void>::producer_convert<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification,void>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::producer<winrt::Windows::Internal::Shell::implementation::DashboardActivator,IClassFactory,void>::producer<winrt::Windows::Internal::Shell::implementation::DashboardActivator,IClassFactory,void>(a1);
  result = v1;
  *v1 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  return result;
}
