/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::Release @ 0x1805D2000
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EAE8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::_implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___ @ 0x1805CF234 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncActionCompletedHandler__lambda.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::_implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x160);
  }
  return v2;
}
