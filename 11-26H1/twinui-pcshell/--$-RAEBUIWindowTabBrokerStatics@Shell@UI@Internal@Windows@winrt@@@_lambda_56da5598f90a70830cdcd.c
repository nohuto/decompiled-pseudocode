/*
 * XREFs of ??$?RAEBUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_56da5598f90a70830cdcd2deb45a78f6_@@QEBA?A_PAEBUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@Z @ 0x1802B5670
 * Callers:
 *     ??$call@AEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@?$factory_cache_entry@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@Z @ 0x180213020 (--$call@AEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@-$factory_cache_entry@UWindowTabBroker@S.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall _lambda_56da5598f90a70830cdcd2deb45a78f6_::operator()<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics const &>(
        __int64 a1,
        __int64 *a2)
{
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
