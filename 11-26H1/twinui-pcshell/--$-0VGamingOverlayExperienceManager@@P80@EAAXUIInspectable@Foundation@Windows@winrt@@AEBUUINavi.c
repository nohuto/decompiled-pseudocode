/*
 * XREFs of ??$?0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@34@@Z@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@PEAVGamingOverlayExperienceManager@@P84@EAAXUIInspectable@123@AEBUUINavigationController@Input@Gaming@23@@Z@Z @ 0x180222024
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180353E2C (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ??$?0V_lambda_9bad360c2d5cdf62d5e8b629670e02ce_@@@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_9bad360c2d5cdf62d5e8b629670e02ce_@@@Z @ 0x18033ACA4 (--$-0V_lambda_9bad360c2d5cdf62d5e8b629670e02ce_@@@-$EventHandler@UUINavigationController@Input@G.c)
 */

__int64 __fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // xmm0_8
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  v4 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_(&v9, &v10, a3);
  v5 = *(_QWORD *)(v4 + 16);
  v7 = *(_OWORD *)v4;
  v8 = v5;
  winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
    a1,
    &v7);
  return a1;
}
