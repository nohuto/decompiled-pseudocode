/*
 * XREFs of ??0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1802966C4
 * Callers:
 *     ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800E53BC (--0-$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIM.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180016460 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800E5650 (--4-$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDestopSwitcherViewChangeNotificationProxy@@@SmartCookie@@QEAAJPEAUIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDestopSwitcherViewChangeNotificationProxy@@@Z @ 0x1800E5978 (--$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisib_ea_1800E5978.c)
 *     ??0?$producers_base@VVirtualDestopSwitcherViewChangeNotificationProxy@@V?$tuple@UIMultitaskingViewVisibilityNotification@@@std@@@impl@winrt@@QEAA@XZ @ 0x1802967D0 (--0-$producers_base@VVirtualDestopSwitcherViewChangeNotificationProxy@@V-$tuple@UIMultitaskingVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  winrt::impl::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v6 + 16, 1LL);
  *(_QWORD *)a1 = &winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::`vftable'{for `winrt::impl::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>'};
  *(_QWORD *)(a1 + 8) = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::root_implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>'};
  v7 = (__int64 *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 216) = 0LL;
  if ( *(_QWORD *)(a1 + 24) != a2 )
  {
    if ( *v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 24));
    *v7 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  std::function<void (enum winrt::WindowsUdk::UI::Shell::ViewVisibility)>::operator=(a1 + 160, a3);
  v10 = SmartCookie::Register<IMultitaskingViewVisibilityService,long (IMultitaskingViewVisibilityService::*)(IMultitaskingViewVisibilityNotification *,unsigned long *),long (IMultitaskingViewVisibilityService::*)(unsigned long),VirtualDestopSwitcherViewChangeNotificationProxy *>(
          a1 + 32,
          *v7,
          v8,
          v9,
          a1);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x81,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v10,
      v13);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    a3,
    v11);
  return a1;
}
