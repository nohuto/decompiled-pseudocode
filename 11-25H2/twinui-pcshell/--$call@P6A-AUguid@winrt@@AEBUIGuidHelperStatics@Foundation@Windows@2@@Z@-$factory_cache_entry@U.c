/*
 * XREFs of ??$call@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@?$factory_cache_entry@UGuidHelper@Foundation@Windows@winrt@@UIGuidHelperStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUguid@2@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@Z @ 0x18033F39C
 * Callers:
 *     ?CreateNewGuid@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802995E0 (-CreateNewGuid@GuidHelper@Foundation@Windows@winrt@@SA@XZ.c)
 *     ?Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802A8C8C (-Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIGuidHelperStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIGuidHelperStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18033FA94 (--$get_activation_factory@UIGuidHelperStatics@Foundation@Windows@winrt@@@winrt@@YA-AUIGuidHelper.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>::call<winrt::guid (*)(winrt::Windows::Foundation::IGuidHelperStatics const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+28h] [rbp-58h] BYREF
  __int64 v8[3]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v9[32]; // [rsp+48h] [rbp-38h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+68h] [rbp-18h] BYREF

  v8[0] = (__int64)L"Windows.Foundation.GuidHelper";
  v8[1] = 29LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::Windows::Foundation::IGuidHelperStatics>(&v10, v9);
  if ( v10 && (v6 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v6), (v7 = v6) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    v8[2] = (__int64)&qword_180899908;
    _InterlockedIncrement64(&qword_180899908);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180899910);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>);
    _InterlockedDecrement64(&qword_180899908);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
