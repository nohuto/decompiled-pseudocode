/*
 * XREFs of ??$?0VTouchEdgeGestureProcessor@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@23456@@Z@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVTouchEdgeGestureProcessor@@P84@EAAXAEBUInputGestureOperation@Input@Internal@UI@23@AEBUInputGestureOperationEventArgs@67823@@Z@Z @ 0x180593BAC
 * Callers:
 *     _lambda_c7bdcc8427e48cc0baee46c116b31384_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_ @ 0x180593BF8 (_lambda_c7bdcc8427e48cc0baee46c116b31384_--operator()_winrt--Windows--UI--Internal--Input--Input.c)
 * Callees:
 *     ??0_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@QEAA@AEBQEAVInputAppPreloader@KeyboardHosting@@AEBQ812@EAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z@Z @ 0x1802AF034 (--0_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@QEAA@AEBQEAVInputAppPreloader@KeyboardHosting@@AEB.c)
 *     ??$?0V_lambda_22fb3325c074c97e482af242b43b379c_@@@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_22fb3325c074c97e482af242b43b379c_@@@Z @ 0x180593B54 (--$-0V_lambda_22fb3325c074c97e482af242b43b379c_@@@-$TypedEventHandler@UInputGestureOperation@Inp.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  v5 = *(_OWORD *)_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_::_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_(v6, &v7, &v8);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
    a1,
    &v5);
  return a1;
}
