/*
 * XREFs of ??$call@AEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@?$factory_cache_entry@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@Z @ 0x180223104
 * Callers:
 *     ??$get_activation_factory@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@winrt@@YA?A_PXZ @ 0x1802C5804 (--$get_activation_factory@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerSta.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?RAEBUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_56da5598f90a70830cdcd2deb45a78f6_@@QEBA?A_PAEBUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@Z @ 0x1802BE354 (--$-RAEBUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_56da5598f90a70830cdcd.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180558F00 (--$get_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA-A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>::call<_lambda_56da5598f90a70830cdcd2deb45a78f6_ &>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  void (__fastcall **v5)(_QWORD *, __int64 *, __int64 *); // rax
  _QWORD *v6; // rcx
  _DWORD *v8; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a3;
  v11 = a1;
  v9[0] = 1;
  v10 = L"Windows.Internal.UI.Shell.WindowTabBroker";
  v9[1] = 41;
  v8 = v9;
  winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>(&v12, &v8);
  v4 = v12;
  if ( v12
    && (v5 = (void (__fastcall **)(_QWORD *, __int64 *, __int64 *))*v12,
        v11 = 0LL,
        (*v5)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11),
        (v13 = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    _InterlockedIncrement64(&qword_18089BD68);
    v6 = v12;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089BD70);
    }
    _lambda_56da5598f90a70830cdcd2deb45a78f6_::operator()<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics const &>(
      v6,
      a2);
    _InterlockedDecrement64(&qword_18089BD68);
    if ( v12 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  else
  {
    *a2 = (__int64)v4;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  return a2;
}
