/*
 * XREFs of ??$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@winrt@@YA?A_PXZ @ 0x1802A3464
 * Callers:
 *     ?UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x180355A94 (-UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_.c)
 *     ?UINavigationControllerRemoved@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x180355B50 (-UINavigationControllerRemoved@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revok.c)
 * Callees:
 *     ??$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@?$factory_cache_entry@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@Z @ 0x1801DF4A8 (--$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@-$factory_cache_entry@UUINavigationContr.c)
 *     ??$?RAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@_lambda_84c5eada3affd516c293d063c562fc4a_@@QEBA?A_PAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@Z @ 0x1802C1B54 (--$-RAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@_lambda_84c5eada3affd516c29.c)
 */

__int64 *__fastcall winrt::get_activation_factory<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>(
        __int64 *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  _InterlockedIncrement64(&qword_1808DB758);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics> )
  {
    _lambda_84c5eada3affd516c293d063c562fc4a_::operator()<winrt::Windows::Gaming::Input::IUINavigationControllerStatics const &>(
      a1,
      a1);
    _InterlockedDecrement64(&qword_1808DB758);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB758);
    winrt::impl::factory_cache_entry<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>::call<_lambda_84c5eada3affd516c293d063c562fc4a_ &>(
      (__int64)a1,
      a1,
      a3);
  }
  return a1;
}
