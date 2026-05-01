/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___::Invoke @ 0x180594A60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x180593C94 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const___(
    a1 + 16,
    &v4,
    a3);
  return 0LL;
}
