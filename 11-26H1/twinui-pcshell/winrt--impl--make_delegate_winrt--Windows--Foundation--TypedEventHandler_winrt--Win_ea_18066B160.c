/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_d12d1524a0e5f53c0c1207645a73e7d0___ @ 0x18066B160
 * Callers:
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B3C0 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_d12d1524a0e5f53c0c1207645a73e7d0___(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // r8
  __int64 v5; // rax
  _QWORD *result; // rax

  v4 = operator new(0x28uLL);
  v4[2] = 1;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 2) = *a2;
  *((_QWORD *)v4 + 3) = a2[1];
  v5 = a2[2];
  a2[2] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  *((_QWORD *)v4 + 4) = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = off_18075E758;
  result = a1;
  *a1 = v4;
  return result;
}
