/*
 * XREFs of ??$call@P6A?AUFocusSessionThemeManager@Shell@Internal@Windows@winrt@@AEBUIFocusSessionThemeManagerStatics@2345@@Z@?$factory_cache_entry@UFocusSessionThemeManager@Shell@Internal@Windows@winrt@@UIFocusSessionThemeManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUFocusSessionThemeManager@Shell@Internal@Windows@2@AEBUIFocusSessionThemeManagerStatics@4562@@Z@Z @ 0x18020FBA4
 * Callers:
 *     ?GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ @ 0x18029C810 (-GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIFocusSessionThemeManagerStatics@Shell@Internal@Windows@winrt@@@winrt@@YA?AUIFocusSessionThemeManagerStatics@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1802D8610 (--$get_activation_factory@UIFocusSessionThemeManagerStatics@Shell@Internal@Windows@winrt@@@winrt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>::call<winrt::Windows::Internal::Shell::FocusSessionThemeManager (*)(winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  _DWORD *v6; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v7[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 **); // [rsp+70h] [rbp+20h] BYREF
  __int64 *v10; // [rsp+88h] [rbp+38h] BYREF

  v9 = a1;
  if ( aWindowsInterna_54[47] )
    abort();
  v7[0] = 1;
  v7[1] = 47;
  v8 = L"Windows.Internal.Shell.FocusSessionThemeManager";
  v6 = v7;
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>(&v9, &v6);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), v10) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
    v10 = &qword_1808D9F18;
    _InterlockedIncrement64(&qword_1808D9F18);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808D9F20);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>);
    _InterlockedDecrement64(&qword_1808D9F18);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v9);
  }
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  return a2;
}
