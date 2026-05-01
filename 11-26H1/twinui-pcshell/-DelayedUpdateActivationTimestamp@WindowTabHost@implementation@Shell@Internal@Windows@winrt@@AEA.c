/*
 * XREFs of ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x1801D57DC
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800479F0 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x180265020 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  _QWORD *v7; // [rsp+20h] [rbp-28h]

  v7 = operator new(0xF0uLL);
  v7[27] = a1;
  v7[28] = a3;
  *v7 = winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 208) = 0;
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_1(v7);
  return a2;
}
