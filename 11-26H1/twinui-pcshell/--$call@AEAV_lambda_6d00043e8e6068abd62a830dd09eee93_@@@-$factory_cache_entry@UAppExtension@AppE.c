/*
 * XREFs of ??$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@Z @ 0x1801BFB64
 * Callers:
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801BFCB8 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_6d00043e8e6068abd62a830dd09eee93_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1801BFD34 (--R_lambda_6d00043e8e6068abd62a830dd09eee93_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@Applic.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18039A3E8 (--$get_activation_factory@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6d00043e8e6068abd62a830dd09eee93_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        __int64 a3)
{
  signed __int64 v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  _DWORD *v9; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 **); // [rsp+80h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+98h] [rbp+48h] BYREF

  v12 = a1;
  if ( aWindowsudkAppl_0[54] )
    abort();
  v10[0] = 1;
  v10[1] = 54;
  v11 = L"WindowsUdk.ApplicationModel.AppExtensions.AppExtension";
  v9 = v10;
  winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>(&v12, &v9);
  v5 = (signed __int64)v12;
  v13 = 0LL;
  if ( !v12 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
  v6 = v13;
  v7 = 1;
  if ( !v13 )
  {
LABEL_6:
    v7 = 0;
    if ( !v6 )
      goto LABEL_8;
  }
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
LABEL_8:
  if ( v7 )
  {
    v13 = &qword_1808DBE08;
    _InterlockedIncrement64(&qword_1808DBE08);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
            v5,
            0LL) )
    {
      v5 = 0LL;
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DBE10);
    }
    _lambda_6d00043e8e6068abd62a830dd09eee93_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>);
    _InterlockedDecrement64(&qword_1808DBE08);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  else
  {
    _lambda_6d00043e8e6068abd62a830dd09eee93_::operator()(a3, a2, &v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  return a2;
}
