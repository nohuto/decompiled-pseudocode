/*
 * XREFs of _lambda_190ccd1a8be9aac816201cee4203407b_::operator() @ 0x180600C94
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___::Invoke @ 0x180602940 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180602940.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1::operator() @ 0x180600B80 (_lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall lambda_190ccd1a8be9aac816201cee4203407b_::operator()(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        void (__fastcall *a3)(__int64 a1),
        void (__fastcall *a4)(__int64 a1))
{
  void (__fastcall **v9)(__int64); // [rsp+50h] [rbp+8h]

  v9 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v9[7] = a1;
  v9[8] = a3;
  v9[9] = a4;
  *v9 = lambda_190ccd1a8be9aac816201cee4203407b___ResumeCoro_1::operator();
  *((_DWORD *)v9 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v9 + 48) = 0;
  lambda_190ccd1a8be9aac816201cee4203407b___ResumeCoro_1::operator()((__int64)v9);
  return a2;
}
