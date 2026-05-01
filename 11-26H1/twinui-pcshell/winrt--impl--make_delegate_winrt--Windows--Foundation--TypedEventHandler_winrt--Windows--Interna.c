/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_3e3d6084102ea12775201c324e2ccf34___ @ 0x1806572CC
 * Callers:
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C5A8 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_3e3d6084102ea12775201c324e2ccf34___(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // r9
  __int64 v5; // r8
  _QWORD *result; // rax

  v4 = operator new(0x28uLL);
  v4[2] = 1;
  v5 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 2) = v5;
  *((_QWORD *)v4 + 3) = a2[1];
  *((_QWORD *)v4 + 4) = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = off_18075DA40;
  result = a1;
  *a1 = v4;
  return result;
}
