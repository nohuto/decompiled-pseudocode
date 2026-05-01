/*
 * XREFs of ??$call@P6A?AUUserDataPaths@Storage@Windows@winrt@@AEBUIUserDataPathsStatics@234@@Z@?$factory_cache_entry@UUserDataPaths@Storage@Windows@winrt@@UIUserDataPathsStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUserDataPaths@Storage@Windows@2@AEBUIUserDataPathsStatics@452@@Z@Z @ 0x1802A7F50
 * Callers:
 *     ?GetDefault@UserDataPaths@Storage@Windows@winrt@@SA@XZ @ 0x1802BF284 (-GetDefault@UserDataPaths@Storage@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_activation_factory@UIUserDataPathsStatics@Storage@Windows@winrt@@@winrt@@YA?AUIUserDataPathsStatics@Storage@Windows@0@AEBUhstring@param@0@@Z @ 0x1802A8088 (--$get_activation_factory@UIUserDataPathsStatics@Storage@Windows@winrt@@@winrt@@YA-AUIUserDataPa.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Storage::UserDataPaths,winrt::Windows::Storage::IUserDataPathsStatics>::call<winrt::Windows::Storage::UserDataPaths (*)(winrt::Windows::Storage::IUserDataPathsStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-10h]
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  if ( aWindowsStorage_5[29] )
    abort();
  v8[0] = 1;
  v8[1] = 29;
  v9 = L"Windows.Storage.UserDataPaths";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Storage::IUserDataPathsStatics>(&v10, &v7);
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v6[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089AAF8;
    _InterlockedIncrement64(&qword_18089AAF8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::UserDataPaths,winrt::Windows::Storage::IUserDataPathsStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089AB00);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::UserDataPaths,winrt::Windows::Storage::IUserDataPathsStatics>);
    _InterlockedDecrement64(&qword_18089AAF8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  }
  return a2;
}
