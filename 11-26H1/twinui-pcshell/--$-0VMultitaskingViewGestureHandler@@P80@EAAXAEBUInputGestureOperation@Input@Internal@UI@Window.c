/*
 * XREFs of ??$?0VMultitaskingViewGestureHandler@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@23456@@Z@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVMultitaskingViewGestureHandler@@P84@EAAXAEBUInputGestureOperation@Input@Internal@UI@23@AEBUInputGestureOperationEventArgs@67823@@Z@Z @ 0x180498C64
 * Callers:
 *     _lambda_e058c550b9a0e8fe978c38ba0103cacb_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_winrt::Windows::UI::Internal::Input::InputGestureOperation_const_&_ @ 0x180498CE4 (_lambda_e058c550b9a0e8fe978c38ba0103cacb_--operator()_winrt--Windows--UI--Internal--Input--Input.c)
 * Callees:
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ??$?0V_lambda_6a11cf226de3cb941aa8cb40827a7f20_@@@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_6a11cf226de3cb941aa8cb40827a7f20_@@@Z @ 0x180498B20 (--$-0V_lambda_6a11cf226de3cb941aa8cb40827a7f20_@@@-$TypedEventHandler@UInputGestureOperation@Inp.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
        _QWORD *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // xmm0_8
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  _BYTE v9[40]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  v4 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v9, &v10, a3);
  v5 = *(_QWORD *)(v4 + 16);
  v7 = *(_OWORD *)v4;
  v8 = v5;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
    a1,
    &v7);
  return a1;
}
