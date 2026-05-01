/*
 * XREFs of ??$call@AEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@?$factory_cache_entry@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@Z @ 0x180213020
 * Callers:
 *     ??$get_activation_factory@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@winrt@@YA?A_PXZ @ 0x1802BC3F0 (--$get_activation_factory@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerSta.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?RAEBUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_56da5598f90a70830cdcd2deb45a78f6_@@QEBA?A_PAEBUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@Z @ 0x1802B5670 (--$-RAEBUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_56da5598f90a70830cdcd.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18057D000 (--$get_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA-A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>::call<_lambda_56da5598f90a70830cdcd2deb45a78f6_ &>(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  __int64 v4; // rcx
  signed __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // si
  _DWORD *v9; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+30h] BYREF

  v13 = a3;
  v12 = a1;
  v10[0] = 1;
  v11 = L"Windows.Internal.UI.Shell.WindowTabBroker";
  v10[1] = 41;
  v9 = v10;
  winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>(&v13, &v9);
  v5 = (signed __int64)v13;
  v12 = 0LL;
  if ( !v13 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  (**v13)(v13, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12);
  v6 = v12;
  if ( !v12 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
  if ( v7 )
  {
    _InterlockedIncrement64(&qword_1808DC408);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>,
            v5,
            0LL) )
    {
      v5 = 0LL;
      v13 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DC410);
    }
    _lambda_56da5598f90a70830cdcd2deb45a78f6_::operator()<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics const &>(
      v4,
      a2);
    _InterlockedDecrement64(&qword_1808DC408);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
  }
  else
  {
    *a2 = v5;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  }
  return a2;
}
