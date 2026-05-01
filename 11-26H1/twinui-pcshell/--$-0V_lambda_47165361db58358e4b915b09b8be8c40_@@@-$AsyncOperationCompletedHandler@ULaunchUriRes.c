/*
 * XREFs of ??$?0V_lambda_47165361db58358e4b915b09b8be8c40_@@@?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_47165361db58358e4b915b09b8be8c40_@@@Z @ 0x18061D3C8
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_47165361db58358e4b915b09b8be8c40_@@@impl@winrt@@QEAA@$$QEAV_lambda_47165361db58358e4b915b09b8be8c40_@@@Z @ 0x180622524 (--0-$delegate@U-$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundati.c)
 *     ??1_lambda_47165361db58358e4b915b09b8be8c40_@@QEAA@XZ @ 0x180622CDC (--1_lambda_47165361db58358e4b915b09b8be8c40_@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>(
        _QWORD *a1,
        _lambda_47165361db58358e4b915b09b8be8c40_ *a2)
{
  void *v5; // [rsp+28h] [rbp-20h]

  v5 = operator new(0x58uLL);
  *a1 = winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_47165361db58358e4b915b09b8be8c40_>(
          v5,
          a2);
  _lambda_47165361db58358e4b915b09b8be8c40_::~_lambda_47165361db58358e4b915b09b8be8c40_(a2);
  return a1;
}
