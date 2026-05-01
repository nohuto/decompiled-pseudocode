/*
 * XREFs of ??$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@Z @ 0x180499FA0
 * Callers:
 *     ?make@?$reference_traits@_N@impl@winrt@@SA@_N@Z @ 0x18049A328 (-make@-$reference_traits@_N@impl@winrt@@SA@_N@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_activation_factory@UIPropertyValueStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIPropertyValueStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1801BE738 (--$get_activation_factory@UIPropertyValueStatics@Foundation@Windows@winrt@@@winrt@@YA-AUIPropert.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??R_lambda_30c050dc9be2b5b829416e08712c22ad_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x18049A220 (--R_lambda_30c050dc9be2b5b829416e08712c22ad_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_30c050dc9be2b5b829416e08712c22ad_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Windows.Foundation.PropertyValue";
  v7[1] = 32LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::Foundation::IPropertyValueStatics>(&v9, (__int64)v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_180899928;
    _InterlockedIncrement64(&qword_180899928);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180899930);
    }
    _lambda_30c050dc9be2b5b829416e08712c22ad_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>);
    _InterlockedDecrement64(&qword_180899928);
  }
  else
  {
    _lambda_30c050dc9be2b5b829416e08712c22ad_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
