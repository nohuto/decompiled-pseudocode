/*
 * XREFs of ??$call@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@?$factory_cache_entry@UGuidHelper@Foundation@Windows@winrt@@UIGuidHelperStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUguid@2@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@Z @ 0x18033F2D0
 * Callers:
 *     ?CreateNewGuid@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802902FC (-CreateNewGuid@GuidHelper@Foundation@Windows@winrt@@SA@XZ.c)
 *     ?Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802A1704 (-Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIGuidHelperStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIGuidHelperStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18033FB48 (--$get_activation_factory@UIGuidHelperStatics@Foundation@Windows@winrt@@@winrt@@YA-AUIGuidHelper.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>::call<winrt::guid (*)(winrt::Windows::Foundation::IGuidHelperStatics const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v5; // rax
  char v6; // di
  __int64 v8[2]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-30h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+50h] [rbp-10h] BYREF

  v8[0] = (__int64)L"Windows.Foundation.GuidHelper";
  v8[1] = 29LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::Windows::Foundation::IGuidHelperStatics>(&v10, v9);
  v8[0] = 0LL;
  if ( !v10 )
  {
    v5 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v8);
  v5 = v8[0];
  if ( !v8[0] )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v8);
  if ( v6 )
  {
    v8[0] = (__int64)&qword_1808D9F68;
    _InterlockedIncrement64(&qword_1808D9F68);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808D9F70);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>);
    _InterlockedDecrement64(&qword_1808D9F68);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
