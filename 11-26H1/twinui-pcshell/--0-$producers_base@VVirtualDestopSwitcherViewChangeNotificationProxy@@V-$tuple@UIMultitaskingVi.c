/*
 * XREFs of ??0?$producers_base@VVirtualDestopSwitcherViewChangeNotificationProxy@@V?$tuple@UIMultitaskingViewVisibilityNotification@@@std@@@impl@winrt@@QEAA@XZ @ 0x1802967D0
 * Callers:
 *     ??0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800E5544 (--0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V-$function.c)
 *     ??0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1802966C4 (--0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService.c)
 * Callees:
 *     ??0?$producer_convert@VVirtualDestopSwitcherViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@X@impl@winrt@@QEAA@XZ @ 0x180294294 (--0-$producer_convert@VVirtualDestopSwitcherViewChangeNotificationProxy@@UIMultitaskingViewVisib.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::producer_convert<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification,void>::producer_convert<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification,void>(a1);
  result = v1;
  *v1 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  return result;
}
