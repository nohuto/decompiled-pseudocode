/*
 * XREFs of ??$?0U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@3@@Z @ 0x1805BA5C8
 * Callers:
 *     ?register_completed_callback@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@AEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805C92F0 (-register_completed_callback@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Wind.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??1?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x1805BF29C (--1-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _DWORD *v7; // [rsp+28h] [rbp-20h]

  v7 = operator new(0x30uLL);
  v7[2] = 1;
  v4 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v7 + 2) = v4;
  LODWORD(v4) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = -1;
  v7[6] = v4;
  v5 = a2[2];
  a2[2] = 0LL;
  *((_QWORD *)v7 + 4) = v5;
  *((_QWORD *)v7 + 5) = a2[3];
  a2[3] = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>>>::`vftable';
  *a1 = v7;
  winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>>::~disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>>(a2);
  return a1;
}
