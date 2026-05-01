/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_b9fb6b4cac821505fcfb549513b2a1e2___ @ 0x1805C9E34
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_b9fb6b4cac821505fcfb549513b2a1e2___ @ 0x1805C98EC (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_1805C98EC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_b9fb6b4cac821505fcfb549513b2a1e2___(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // r8
  _QWORD *result; // rax

  v4 = operator new(0x30uLL);
  v4[2] = 1;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 2) = *a2;
  *((_QWORD *)v4 + 3) = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 4) = a2[2];
  *((_QWORD *)v4 + 5) = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = off_18072FFB0;
  result = a1;
  *a1 = v4;
  return result;
}
