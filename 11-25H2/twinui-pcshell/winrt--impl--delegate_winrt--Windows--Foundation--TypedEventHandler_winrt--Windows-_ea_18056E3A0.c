/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_a6b4bd61808e145dfc62d4568902935b___::Invoke @ 0x18056E3A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a6b4bd61808e145dfc62d4568902935b_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AD30 (_lambda_a6b4bd61808e145dfc62d4568902935b_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_a6b4bd61808e145dfc62d4568902935b___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  lambda_a6b4bd61808e145dfc62d4568902935b_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_(
    (TouchGestureProcessor **)(a1 + 16),
    a2,
    &v4);
  return 0LL;
}
