/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::Invoke @ 0x1801CC920
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x1801CC994 (_lambda_1e80c37ddcde987ca8d07444e2bbbfce_--operator().c)
 */

__int64 winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::Invoke()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v1);
  }
  return result;
}
