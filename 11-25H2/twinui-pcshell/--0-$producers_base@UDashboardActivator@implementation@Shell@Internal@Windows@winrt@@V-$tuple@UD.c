/*
 * XREFs of ??0?$producers_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UDashboardActivator@Shell@Internal@Windows@winrt@@UIClassFactory@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029DAA4
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180193A80 (--0-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@W.c)
 * Callees:
 *     ??0?$producer_convert@VVirtualDestopSwitcherViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@X@impl@winrt@@QEAA@XZ @ 0x18029C578 (--0-$producer_convert@VVirtualDestopSwitcherViewChangeNotificationProxy@@UIMultitaskingViewVisib.c)
 *     ??0?$producer_convert@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@X@impl@winrt@@QEAA@XZ @ 0x18029DAD8 (--0-$producer_convert@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@X@.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,void>::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,void>(
    a1 + 8,
    a2,
    a1);
  winrt::impl::producer_convert<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification,void>::producer_convert<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification,void>(v2);
  result = v3;
  *v3 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  return result;
}
