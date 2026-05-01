/*
 * XREFs of ??R_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@QEBA@AEBUIRawGameControllerStatics@Input@Gaming@Windows@winrt@@@Z @ 0x180343F20
 * Callers:
 *     ??$call@AEAV_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@@?$factory_cache_entry@URawGameController@Input@Gaming@Windows@winrt@@UIRawGameControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@@Z @ 0x18033EF24 (--$call@AEAV_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@@-$factory_cache_entry@URawGameController.c)
 *     ?FromGameController@RawGameController@Input@Gaming@Windows@winrt@@SA@AEBUIGameController@2345@@Z @ 0x180346FAC (-FromGameController@RawGameController@Input@Gaming@Windows@winrt@@SA@AEBUIGameController@2345@@Z.c)
 * Callees:
 *     ?FromGameController@?$consume_Windows_Gaming_Input_IRawGameControllerStatics@UIRawGameControllerStatics@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@AEBUIGameController@Input@Gaming@Windows@3@@Z @ 0x180346F28 (-FromGameController@-$consume_Windows_Gaming_Input_IRawGameControllerStatics@UIRawGameController.c)
 */

__int64 __fastcall _lambda_825b5c2f3834d6ddb55fa03d184e4233_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Gaming_Input_IRawGameControllerStatics<winrt::Windows::Gaming::Input::IRawGameControllerStatics>::FromGameController(
    a3,
    a2,
    *a1);
  return a2;
}
