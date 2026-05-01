/*
 * XREFs of ??$call@P6A?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801BB154
 * Callers:
 *     ??0TileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1801BB0DC (--0TileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1801BB490 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
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
  if ( aWindowsudkUiSt_3[53] )
    abort();
  v8[0] = 1;
  v8[1] = 53;
  v9 = L"WindowsUdk.UI.StartScreen.TileCollectionCreateOptions";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v10, &v7);
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v6[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089BB88;
    _InterlockedIncrement64(&qword_18089BB88);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions,winrt::Windows::Foundation::IActivationFactory>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089BB90);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_18089BB88);
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
