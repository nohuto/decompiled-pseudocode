/*
 * XREFs of ??$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@winrt@@YA?A_PXZ @ 0x1802AAF50
 * Callers:
 *     ?UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x180350C74 (-UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_.c)
 *     ?UINavigationControllerRemoved@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x180350D30 (-UINavigationControllerRemoved@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revok.c)
 * Callees:
 *     ??$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@?$factory_cache_entry@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@Z @ 0x1801E98EC (--$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@-$factory_cache_entry@UUINavigationContr.c)
 *     ??$?RAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@_lambda_84c5eada3affd516c293d063c562fc4a_@@QEBA?A_PAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@Z @ 0x1802CA2D8 (--$-RAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@_lambda_84c5eada3affd516c29.c)
 */

__int64 *__fastcall winrt::get_activation_factory<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _InterlockedIncrement64(&qword_18089B008);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics> )
  {
    _lambda_84c5eada3affd516c293d063c562fc4a_::operator()<winrt::Windows::Gaming::Input::IUINavigationControllerStatics const &>(
      a1,
      a1);
    _InterlockedDecrement64(&qword_18089B008);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B008);
    winrt::impl::factory_cache_entry<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>::call<_lambda_84c5eada3affd516c293d063c562fc4a_ &>(
      (__int64)a1,
      a1,
      a3);
  }
  return a1;
}
