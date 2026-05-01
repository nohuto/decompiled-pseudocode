/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::Invoke @ 0x1805D1890
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e61605ece55422ba9fa5b55a2642b1df_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805CD4A4 (_lambda_e61605ece55422ba9fa5b55a2642b1df_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  lambda_e61605ece55422ba9fa5b55a2642b1df_::operator()_winrt::Windows::Foundation::IAsyncAction_(
    (__int64 *)(a1 + 16),
    (__int64)&v4,
    a3);
  return 0LL;
}
