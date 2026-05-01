/*
 * XREFs of ?OperationStarted@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18048BE8C
 * Callers:
 *     _lambda_e058c550b9a0e8fe978c38ba0103cacb_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_winrt::Windows::UI::Internal::Input::InputGestureOperation_const_&_ @ 0x180487FC4 (_lambda_e058c550b9a0e8fe978c38ba0103cacb_--operator()_winrt--Windows--UI--Internal--Input--Input.c)
 *     _lambda_c7bdcc8427e48cc0baee46c116b31384_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_ @ 0x18057039C (_lambda_c7bdcc8427e48cc0baee46c116b31384_--operator()_winrt--Windows--UI--Internal--Input--Input.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::OperationStarted(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v4; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v11 = 0;
  v7 = *a3;
  v8 = *v4;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *))(v8 + 192))(v4, v7, a2);
  winrt::check_hresult(&v13, v9, (__int64)&v11);
  return a2;
}
