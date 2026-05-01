/*
 * XREFs of ??$call@AEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@Z @ 0x1803607A4
 * Callers:
 *     ?Open@AppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1803617DC (-Open@AppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@5@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F1208 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??R_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@QEBA@AEBUIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@Windows@winrt@@@Z @ 0x180360DD0 (--R_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@QEBA@AEBUIAppExtensionCatalogStatics@AppExtensions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::call<_lambda_554c977fbb23067c34d9c2bcea5eb7d5_ &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v5; // rax
  char v6; // di
  void (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-60h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h]
  __int64 v11[4]; // [rsp+48h] [rbp-38h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 **); // [rsp+68h] [rbp-18h] BYREF

  v9 = (__int64 *)L"Windows.ApplicationModel.AppExtensions.AppExtensionCatalog";
  *(_QWORD *)&v10 = 58LL;
  winrt::param::hstring::hstring((__int64)v11, (__int64 *)&v9);
  v12 = 0LL;
  LODWORD(v9) = 0;
  v10 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v8,
    v11,
    (__int64)&winrt::impl::guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>,
    (__int64)&v12);
  winrt::check_hresult((int *)&v8, (int)v8, (__int64)&v9);
  v8 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  v9 = 0LL;
  if ( !v12 )
  {
    v5 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9);
  v5 = v9;
  if ( !v9 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  if ( v6 )
  {
    v9 = &qword_1808DB808;
    _InterlockedIncrement64(&qword_1808DB808);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB810);
    }
    _lambda_554c977fbb23067c34d9c2bcea5eb7d5_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>);
    _InterlockedDecrement64(&qword_1808DB808);
  }
  else
  {
    _lambda_554c977fbb23067c34d9c2bcea5eb7d5_::operator()(a3, a2, &v8);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return a2;
}
