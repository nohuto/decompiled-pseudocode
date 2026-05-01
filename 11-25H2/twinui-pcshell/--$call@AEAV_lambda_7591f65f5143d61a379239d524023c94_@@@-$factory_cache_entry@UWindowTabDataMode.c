/*
 * XREFs of ??$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_7591f65f5143d61a379239d524023c94_@@@Z @ 0x1801FF6F8
 * Callers:
 *     ?TryGetForWindowAsync@WindowTabDataModel@Shell@UI@Internal@Windows@winrt@@SA@IAEBUUser@System@56@@Z @ 0x18055A8B4 (-TryGetForWindowAsync@WindowTabDataModel@Shell@UI@Internal@Windows@winrt@@SA@IAEBUUser@System@56.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@Z @ 0x1801FF820 (--R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA@AEBUIWindowTabDataModelStatics@Shell@UI@Inter.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180558F64 (--$get_activation_factory@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@Y.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::call<_lambda_7591f65f5143d61a379239d524023c94_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-10h]
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+88h] [rbp+28h] BYREF

  v10 = a1;
  v8[0] = 1;
  v8[1] = 44;
  v9 = L"Windows.Internal.UI.Shell.WindowTabDataModel";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>(&v10, &v7);
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v6[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089BD88;
    _InterlockedIncrement64(&qword_18089BD88);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089BD90);
    }
    _lambda_7591f65f5143d61a379239d524023c94_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>);
    _InterlockedDecrement64(&qword_18089BD88);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  }
  else
  {
    _lambda_7591f65f5143d61a379239d524023c94_::operator()(a3, a2, &v10);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  return a2;
}
