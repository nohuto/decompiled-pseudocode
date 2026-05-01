/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke @ 0x180591CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimationData@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A2E6C (-AnimationData@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperatio.c)
 *     ?ContactCount@?$consume_Windows_UI_Input_IManipulationUpdatedEventArgs2@UManipulationUpdatedEventArgs@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180590B28 (-ContactCount@-$consume_Windows_UI_Input_IManipulationUpdatedEventArgs2@UManipulationUpdatedEven.c)
 *     ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x180590C28 (-ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z.c)
 *     ?Cumulative@?$consume_Windows_UI_Input_IManipulationUpdatedEventArgs@UIManipulationUpdatedEventArgs@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180590D40 (-Cumulative@-$consume_Windows_UI_Input_IManipulationUpdatedEventArgs@UIManipulationUpdatedEventA.c)
 *     ?Delta@?$consume_Windows_UI_Input_IManipulationUpdatedEventArgs@UIManipulationUpdatedEventArgs@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180590D94 (-Delta@-$consume_Windows_UI_Input_IManipulationUpdatedEventArgs@UIManipulationUpdatedEventArgs@I.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180592DD0 (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, void *, __int64 *))
{
  TouchGestureProcessor *v3; // rbx
  const struct winrt::Windows::Foundation::Point *v4; // rdi
  unsigned int v5; // eax
  const struct winrt::Windows::Foundation::Point *v6; // rdi
  const struct winrt::Windows::Foundation::Point *v7; // rax
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[36]; // [rsp+34h] [rbp-24h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, void *, __int64 *); // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  try
  {
    v3 = *(TouchGestureProcessor **)(a1 + 16);
    if ( *(_QWORD *)v3 )
    {
      v6 = (const struct winrt::Windows::Foundation::Point *)winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::AnimationData(
                                                               (__int64 *)&v12,
                                                               v9);
      v7 = (const struct winrt::Windows::Foundation::Point *)winrt::impl::consume_Windows_UI_Input_IManipulationUpdatedEventArgs<winrt::Windows::UI::Input::IManipulationUpdatedEventArgs>::Delta(
                                                               (__int64 *)&v12,
                                                               (__int64)v10);
      TouchGestureProcessor::ContinueSwipe(v3, v7, v6);
    }
    else
    {
      v4 = (const struct winrt::Windows::Foundation::Point *)winrt::impl::consume_Windows_UI_Input_IManipulationUpdatedEventArgs<winrt::Windows::UI::Input::IManipulationUpdatedEventArgs>::Cumulative(
                                                               (__int64 *)&v12,
                                                               (__int64)v9);
      v5 = winrt::impl::consume_Windows_UI_Input_IManipulationUpdatedEventArgs2<winrt::Windows::UI::Input::ManipulationUpdatedEventArgs>::ContactCount(&v12);
      TouchGestureProcessor::StartSwipe(v3, v5, v4);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v11);
  }
  return result;
}
