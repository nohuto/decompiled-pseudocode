/*
 * XREFs of ??$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@?$factory_cache_entry@UActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIActiveTabChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@Z @ 0x18057C7D4
 * Callers:
 *     ??0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z @ 0x180299A60 (--0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??R_lambda_0f5d06b182220372552e751da5d9ab64_@@QEBA@AEBUIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@Z @ 0x180299AD8 (--R_lambda_0f5d06b182220372552e751da5d9ab64_@@QEBA@AEBUIActiveTabChangedEventArgsFactory@Shell@U.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18057CE70 (--$get_activation_factory@UIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>::call<_lambda_0f5d06b182220372552e751da5d9ab64_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int128 **a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = (__int64)L"Windows.Internal.UI.Shell.ActiveTabChangedEventArgs";
  v9[1] = 51LL;
  winrt::param::hstring::hstring((__int64)v10, v9);
  winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>(&v11, v10);
  v5 = v11;
  v12 = 0LL;
  if ( !v11 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64 **))*v11)(
    v11,
    &winrt::impl::guid_v<winrt::impl::IAgileObject>,
    &v12);
  v6 = v12;
  if ( !v12 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  if ( v7 )
  {
    v12 = &qword_1808DC448;
    _InterlockedIncrement64(&qword_1808DC448);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>,
            (signed __int64)v5,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DC450);
    }
    _lambda_0f5d06b182220372552e751da5d9ab64_::operator()(
      a3,
      a2,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>);
    _InterlockedDecrement64(&qword_1808DC448);
  }
  else
  {
    _lambda_0f5d06b182220372552e751da5d9ab64_::operator()(a3, a2, &v11);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
