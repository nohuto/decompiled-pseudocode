/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_3e03a3c31af621875be24bd5f43287a8___ @ 0x1805C9D04
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_3e03a3c31af621875be24bd5f43287a8___ @ 0x1805C9788 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificati.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_3e03a3c31af621875be24bd5f43287a8___(
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
  *(_QWORD *)v4 = off_18072FF90;
  result = a1;
  *a1 = v4;
  return result;
}
