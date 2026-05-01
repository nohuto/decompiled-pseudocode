/*
 * XREFs of ??$call@AEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@Z @ 0x180359EB8
 * Callers:
 *     ?Open@AppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x18035AE6C (-Open@AppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@5@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??R_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@QEBA@AEBUIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@Windows@winrt@@@Z @ 0x18035A494 (--R_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@QEBA@AEBUIAppExtensionCatalogStatics@AppExtensions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::call<_lambda_554c977fbb23067c34d9c2bcea5eb7d5_ &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-39h] BYREF
  int v7; // [rsp+28h] [rbp-31h] BYREF
  __int64 v8; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+38h] [rbp-21h] BYREF
  int v10; // [rsp+44h] [rbp-15h] BYREF
  __int64 v11[3]; // [rsp+48h] [rbp-11h] BYREF
  int v12; // [rsp+60h] [rbp+7h] BYREF
  __int128 v13; // [rsp+68h] [rbp+Fh]
  __int64 v14[4]; // [rsp+78h] [rbp+1Fh] BYREF
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+3Fh] BYREF

  v8 = a2;
  v11[0] = (__int64)L"Windows.ApplicationModel.AppExtensions.AppExtensionCatalog";
  v11[1] = 58LL;
  winrt::param::hstring::hstring((__int64)v14, v11);
  v15 = 0LL;
  v12 = 0;
  v13 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v7,
    v14,
    (__int64)&winrt::impl::guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>,
    (__int64)&v15);
  winrt::check_hresult(&v10, v7, (__int64)&v12);
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
  if ( v15 && (v9 = 0LL, (**v15)(v15, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v8 = v9) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    v11[2] = (__int64)&qword_18089B0B8;
    _InterlockedIncrement64(&qword_18089B0B8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>,
            (signed __int64)v15,
            0LL) )
    {
      v6 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089B0C0);
    }
    _lambda_554c977fbb23067c34d9c2bcea5eb7d5_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>);
    _InterlockedDecrement64(&qword_18089B0B8);
  }
  else
  {
    _lambda_554c977fbb23067c34d9c2bcea5eb7d5_::operator()(a3, a2, &v6);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return a2;
}
