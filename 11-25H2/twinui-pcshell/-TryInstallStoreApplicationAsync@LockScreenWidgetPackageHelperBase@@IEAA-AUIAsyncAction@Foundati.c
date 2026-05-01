/*
 * XREFs of ?TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@5@0UPackageVersion@ApplicationModel@45@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z @ 0x1805B5950
 * Callers:
 *     ?TryInstallAsync@LockScreenWidgetPackageHelperBase@@QEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@0@Z @ 0x1805B4FBC (-TryInstallAsync@LockScreenWidgetPackageHelperBase@@QEAA-AUIAsyncAction@Foundation@Windows@winrt.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_InitCoro$2 @ 0x1805B5098 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rsi
  __int64 v12; // rbp
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v17; // [rsp+50h] [rbp-428h] BYREF
  __int64 *v18; // [rsp+58h] [rbp-420h]
  __int64 *v19; // [rsp+60h] [rbp-418h]
  __int64 v20; // [rsp+428h] [rbp-50h]
  __int64 v21; // [rsp+430h] [rbp-48h]

  v18 = a3;
  v19 = a4;
  v11 = a6;
  v20 = a6;
  v12 = a7;
  v21 = a7;
  v13 = operator new(0x3C0uLL);
  v17 = 0;
  LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__InitCoro_2(
    &v17,
    (__int64)v13 + 112,
    a2,
    a3,
    a4,
    &a5,
    v11,
    v12,
    a1);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a4);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    v11,
    v14);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    v12,
    v15);
  return a2;
}
