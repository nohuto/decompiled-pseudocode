/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_21db7767322f1ff1c886f131a6440c5a___::Invoke @ 0x18056E370
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_21db7767322f1ff1c886f131a6440c5a_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AB5C (_lambda_21db7767322f1ff1c886f131a6440c5a_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_21db7767322f1ff1c886f131a6440c5a___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  lambda_21db7767322f1ff1c886f131a6440c5a_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_(
    (TouchGestureProcessor **)(a1 + 16),
    a2,
    &v4);
  return 0LL;
}
