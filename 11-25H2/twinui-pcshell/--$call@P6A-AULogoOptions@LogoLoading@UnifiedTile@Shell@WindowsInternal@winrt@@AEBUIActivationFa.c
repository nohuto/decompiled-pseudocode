/*
 * XREFs of ??$call@P6A?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z@?$factory_cache_entry@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?A_P$$QEAP6A?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1805BDD14
 * Callers:
 *     ??0LogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAA@XZ @ 0x1805BEFE0 (--0LogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1801BB490 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+28h] [rbp-58h] BYREF
  __int64 v8[3]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v9[32]; // [rsp+50h] [rbp-30h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp-10h] BYREF

  v6 = a2;
  v8[0] = (__int64)L"WindowsInternal.Shell.UnifiedTile.LogoLoading.LogoOptions";
  v8[1] = 57LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v10, (__int64)v9);
  if ( v10 && (v7 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), (v6 = v7) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
    v8[2] = (__int64)&qword_18089D1B8;
    _InterlockedIncrement64(&qword_18089D1B8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089D1C0);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_18089D1B8);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
