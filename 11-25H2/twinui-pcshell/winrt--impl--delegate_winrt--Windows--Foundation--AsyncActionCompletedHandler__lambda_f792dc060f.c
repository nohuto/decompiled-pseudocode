/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::Invoke @ 0x1805D18C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805CD5BC (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_(
    (__int64 *)(a1 + 16),
    (__int64)&v4,
    a3);
  return 0LL;
}
