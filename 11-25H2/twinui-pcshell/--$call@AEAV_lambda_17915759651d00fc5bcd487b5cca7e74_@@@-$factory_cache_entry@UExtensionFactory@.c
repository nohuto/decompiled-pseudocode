/*
 * XREFs of ??$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@Z @ 0x1801FEEAC
 * Callers:
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0AEBW4AppExtensionOptions@2345@@Z @ 0x1801FEE28 (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@par.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_17915759651d00fc5bcd487b5cca7e74_@@QEBA@AEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1802C8488 (--R_lambda_17915759651d00fc5bcd487b5cca7e74_@@QEBA@AEBUIExtensionFactoryStatics@AppExtensions@Ap.c)
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x1802C84BC (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExten.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1805A173C (--$get_activation_factory@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_17915759651d00fc5bcd487b5cca7e74_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD *v9; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+50h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+60h] [rbp-10h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  v12 = a1;
  if ( aWindowsudkAppl_2[58] )
    abort();
  v10[0] = 1;
  v10[1] = 58;
  v11 = L"WindowsUdk.ApplicationModel.AppExtensions.ExtensionFactory";
  v9 = v10;
  winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>(&v12, &v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 && (v13 = 0LL, (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13), (v8[0] = v13) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_18089B6E8;
    _InterlockedIncrement64(&qword_18089B6E8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089B6F0);
    }
    _lambda_17915759651d00fc5bcd487b5cca7e74_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>);
    _InterlockedDecrement64(&qword_18089B6E8);
    v6 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
      (unsigned int)&v12,
      a2,
      *a3,
      a3[1],
      a3[2]);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  return a2;
}
