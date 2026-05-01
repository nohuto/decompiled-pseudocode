/*
 * XREFs of ?FromGameController@RawGameController@Input@Gaming@Windows@winrt@@SA@AEBUIGameController@2345@@Z @ 0x1803442E8
 * Callers:
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034B670 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 * Callees:
 *     ??$call@AEAV_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@@?$factory_cache_entry@URawGameController@Input@Gaming@Windows@winrt@@UIRawGameControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@@Z @ 0x18033F14C (--$call@AEAV_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@@-$factory_cache_entry@URawGameController.c)
 *     ??R_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@QEBA@AEBUIRawGameControllerStatics@Input@Gaming@Windows@winrt@@@Z @ 0x1803420E8 (--R_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@QEBA@AEBUIRawGameControllerStatics@Input@Gaming@Wi.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::Windows::Gaming::Input::IGameController *__fastcall winrt::Windows::Gaming::Input::RawGameController::FromGameController(
        const struct winrt::Windows::Gaming::Input::IGameController *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_18089AFA8;
  _InterlockedIncrement64(&qword_18089AFA8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::RawGameController,winrt::Windows::Gaming::Input::IRawGameControllerStatics> )
  {
    _lambda_825b5c2f3834d6ddb55fa03d184e4233_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::RawGameController,winrt::Windows::Gaming::Input::IRawGameControllerStatics>);
    _InterlockedDecrement64(&qword_18089AFA8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089AFA8);
    winrt::impl::factory_cache_entry<winrt::Windows::Gaming::Input::RawGameController,winrt::Windows::Gaming::Input::IRawGameControllerStatics>::call<_lambda_825b5c2f3834d6ddb55fa03d184e4233_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (__int64)&v4);
  }
  return a1;
}
