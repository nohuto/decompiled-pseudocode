/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs_::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs___lambda_c0ce33e06c92a42a96b12c6bd24e1411___ @ 0x18056A81C
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x18026FD5C (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs_::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs___lambda_c0ce33e06c92a42a96b12c6bd24e1411___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x18uLL);
  v5[2] = 1;
  *((_QWORD *)v5 + 2) = a2;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = off_18072DC50;
  *a1 = v5;
  return a1;
}
