/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent @ 0x1805C4A8C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805C5200 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2 @ 0x1805C44DC (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 a4)
{
  void *v8; // rax
  std::_Ref_count_base *v9; // rcx
  _DWORD v11[114]; // [rsp+30h] [rbp-208h] BYREF
  _QWORD *v12; // [rsp+1F8h] [rbp-40h]

  v12 = a3;
  v8 = operator new(0x1C0uLL);
  v11[0] = 0;
  anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__InitCoro_2(v11, (__int64)v8 + 112, a2, a3, a4, a1);
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a2;
}
