/*
 * XREFs of ??$call@P6A?AUCoreWindow@Core@UI@Windows@winrt@@AEBUICoreWindowStatic@2345@@Z@?$factory_cache_entry@UCoreWindow@Core@UI@Windows@winrt@@UICoreWindowStatic@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUCoreWindow@Core@UI@Windows@2@AEBUICoreWindowStatic@4562@@Z@Z @ 0x18022B444
 * Callers:
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@winrt@@SA@XZ @ 0x180026804 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UICoreWindowStatic@Core@UI@Windows@winrt@@@winrt@@YA?AUICoreWindowStatic@Core@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18044FE74 (--$get_activation_factory@UICoreWindowStatic@Core@UI@Windows@winrt@@@winrt@@YA-AUICoreWindowStat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Core::CoreWindow,winrt::Windows::UI::Core::ICoreWindowStatic>::call<winrt::Windows::UI::Core::CoreWindow (*)(winrt::Windows::UI::Core::ICoreWindowStatic const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v5; // rax
  char v6; // di
  __int64 v8[2]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD *v9; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v10[4]; // [rsp+38h] [rbp-28h] BYREF
  const wchar_t *v11; // [rsp+48h] [rbp-18h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+50h] [rbp-10h] BYREF

  v10[0] = 1;
  v10[1] = 26;
  v11 = L"Windows.UI.Core.CoreWindow";
  v9 = v10;
  winrt::get_activation_factory<winrt::Windows::UI::Core::ICoreWindowStatic>(&v12, &v9);
  v8[0] = 0LL;
  if ( !v12 )
  {
    v5 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v8);
  v5 = v8[0];
  if ( !v8[0] )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v8);
  if ( v6 )
  {
    v8[0] = (__int64)&qword_1808DB9F8;
    _InterlockedIncrement64(&qword_1808DB9F8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Core::CoreWindow,winrt::Windows::UI::Core::ICoreWindowStatic>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DBA00);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Core::CoreWindow,winrt::Windows::UI::Core::ICoreWindowStatic>);
    _InterlockedDecrement64(&qword_1808DB9F8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v12);
    if ( v12 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  return a2;
}
