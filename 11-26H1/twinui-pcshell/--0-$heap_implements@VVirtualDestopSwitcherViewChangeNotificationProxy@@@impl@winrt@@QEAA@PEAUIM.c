/*
 * XREFs of ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800E53BC
 * Callers:
 *     winrt::make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_4947cc5562530a5e119976c0de6f80d3___ @ 0x18049FCB0 (winrt--make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService_.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180016460 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ?_Reset_move@?$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAX$$QEAV12@@Z @ 0x1800E5830 (-_Reset_move@-$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ??0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1802966C4 (--0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h]

  v8 = 0LL;
  std::_Func_class<void,unsigned int,winrt::Windows::Foundation::Point const &>::_Reset_move(v7, a3);
  VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy((int)a1);
  *a1 = &winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::`vftable'{for `winrt::impl::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>'};
  a1[1] = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::root_implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>'};
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    a3,
    v5);
  return a1;
}
