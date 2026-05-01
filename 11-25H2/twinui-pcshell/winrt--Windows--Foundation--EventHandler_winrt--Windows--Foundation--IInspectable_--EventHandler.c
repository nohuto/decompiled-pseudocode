/*
 * XREFs of winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_3fbd826b401420cff0a83bf4ce7975f8___ @ 0x180359CC4
 * Callers:
 *     ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x18035AFD4 (-SingletonInitialize@NexusPolicyManager@@QEAAXXZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_3fbd826b401420cff0a83bf4ce7975f8___(
        _QWORD *a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v4; // rcx
  _DWORD *v6; // [rsp+28h] [rbp-20h]

  v6 = operator new(0x20uLL);
  v6[2] = 1;
  *((_QWORD *)v6 + 2) = 0LL;
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 2) = *a2;
  *((_QWORD *)v6 + 3) = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = off_18070AAF8;
  *a1 = v6;
  v4 = (std::_Ref_count_base *)a2[1];
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
  return a1;
}
