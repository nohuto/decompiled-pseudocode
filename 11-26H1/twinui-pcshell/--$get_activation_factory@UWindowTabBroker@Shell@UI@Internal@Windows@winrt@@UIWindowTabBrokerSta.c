/*
 * XREFs of ??$get_activation_factory@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@winrt@@YA?A_PXZ @ 0x1802BC3F0
 * Callers:
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A1C30 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$call@AEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@?$factory_cache_entry@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@Z @ 0x180213020 (--$call@AEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@-$factory_cache_entry@UWindowTabBroker@S.c)
 */

__int64 *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>(
        __int64 *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  _InterlockedIncrement64(&qword_1808DC408);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics> )
  {
    *a1 = winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
    _InterlockedDecrement64(&qword_1808DC408);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC408);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>::call<_lambda_56da5598f90a70830cdcd2deb45a78f6_ &>(
      (__int64)a1,
      a1,
      a3);
  }
  return a1;
}
