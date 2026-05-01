/*
 * XREFs of ?ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z @ 0x1805C55C4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BB040 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$2 @ 0x1805C50A0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        char a4)
{
  void *v7; // rax
  std::_Ref_count_base *v8; // rcx
  char v10[8]; // [rsp+30h] [rbp-228h] BYREF
  _DWORD v11[122]; // [rsp+38h] [rbp-220h] BYREF
  _QWORD *v12; // [rsp+220h] [rbp-38h]

  v12 = a3;
  v10[0] = a4;
  v7 = operator new(0x1E0uLL);
  v11[0] = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__InitCoro_2(
    v11,
    (__int64)v7 + 112,
    a2,
    a3,
    v10,
    a1);
  v8 = (std::_Ref_count_base *)a3[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
