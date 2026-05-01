/*
 * XREFs of ??0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800BE554
 * Callers:
 *     ??0?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800BE4DC (--0-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingVi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800BE6BC (--4-$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVTaskViewViewChangeNotificationProxy@@@SmartCookie@@QEAAJPEAUIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVTaskViewViewChangeNotificationProxy@@@Z @ 0x1800BE8B8 (--$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotifica.c)
 *     ??0?$producers_base@VVirtualDestopSwitcherViewChangeNotificationProxy@@V?$tuple@UIMultitaskingViewVisibilityNotification@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029F00C (--0-$producers_base@VVirtualDestopSwitcherViewChangeNotificationProxy@@V-$tuple@UIMultitaskingVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TaskViewViewChangeNotificationProxy::TaskViewViewChangeNotificationProxy(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // r15
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  winrt::impl::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>::producers_base<VirtualDestopSwitcherViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v6 + 16) = 1LL;
  *(_QWORD *)v6 = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::producers_base<TaskViewViewChangeNotificationProxy,std::tuple<IMultitaskingViewVisibilityNotification>>'};
  *(_QWORD *)(v6 + 8) = &winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::`vftable'{for `winrt::impl::root_implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>'};
  v7 = (_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 144) = 0LL;
  *(_DWORD *)(v6 + 152) = 0;
  v8 = v6 + 160;
  *(_QWORD *)(v6 + 216) = 0LL;
  if ( *(_QWORD *)(v6 + 24) != a2 )
  {
    if ( *v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v6 + 24));
    *v7 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  std::function<void (enum winrt::WindowsUdk::UI::Shell::ViewVisibility)>::operator=(v8, a3);
  v11 = SmartCookie::Register<IMultitaskingViewVisibilityService,long (IMultitaskingViewVisibilityService::*)(IMultitaskingViewVisibilityNotification *,unsigned long *),long (IMultitaskingViewVisibilityService::*)(unsigned long),TaskViewViewChangeNotificationProxy *>(
          (int)a1 + 32,
          *v7,
          v9,
          v10,
          a1);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v11,
      v14);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    a3,
    v12);
  return a1;
}
