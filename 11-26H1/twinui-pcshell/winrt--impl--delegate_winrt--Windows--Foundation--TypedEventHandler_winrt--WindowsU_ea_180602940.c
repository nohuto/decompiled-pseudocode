/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___::Invoke @ 0x180602940
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_190ccd1a8be9aac816201cee4203407b_::operator() @ 0x180600C94 (_lambda_190ccd1a8be9aac816201cee4203407b_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void (__fastcall *v3)(__int64); // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = (void (__fastcall *)(__int64))(a1 + 16);
  try
  {
    lambda_190ccd1a8be9aac816201cee4203407b_::operator()(
      v3,
      &v5,
      (void (__fastcall *)(__int64))&v6,
      (void (__fastcall *)(__int64))&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
