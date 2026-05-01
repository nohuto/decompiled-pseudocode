/*
 * XREFs of _lambda_e058c550b9a0e8fe978c38ba0103cacb_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_winrt::Windows::UI::Internal::Input::InputGestureOperation_const_&_ @ 0x180498CE4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_e058c550b9a0e8fe978c38ba0103cacb___::Invoke @ 0x18049C7C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Internal.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$?0VMultitaskingViewGestureHandler@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@23456@@Z@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVMultitaskingViewGestureHandler@@P84@EAAXAEBUInputGestureOperation@Input@Internal@UI@23@AEBUInputGestureOperationEventArgs@67823@@Z@Z @ 0x180498C64 (--$-0VMultitaskingViewGestureHandler@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Window.c)
 *     ?OperationEnded@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18049CA64 (-OperationEnded@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperati.c)
 *     ?OperationStarted@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18049CAC4 (-OperationStarted@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOpera.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e058c550b9a0e8fe978c38ba0103cacb_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const___winrt::Windows::UI::Internal::Input::InputGestureOperation_const___(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-10h] BYREF
  char v7; // [rsp+40h] [rbp+10h] BYREF
  __int64 v8; // [rsp+48h] [rbp+18h] BYREF

  v8 = a2;
  *(_QWORD *)&v6 = MultitaskingViewGestureHandler::InputGestureOperationStarted;
  DWORD2(v6) = 0;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
    &v8,
    *a1,
    &v6);
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::OperationStarted(
    a3,
    &v7,
    &v8);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  *(_QWORD *)&v6 = MultitaskingViewGestureHandler::InputGestureOperationEnded;
  DWORD2(v6) = 0;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
    &v8,
    *a1,
    &v6);
  result = winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::OperationEnded(
             a3,
             &v7,
             &v8);
  if ( v8 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  return result;
}
