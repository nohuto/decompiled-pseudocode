/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::Release @ 0x1800E6040
 * Callers:
 *     <none>
 * Callees:
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___ @ 0x1800E608C (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_1800E608C.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::Release(
        char *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference((winrt::impl::implements_delegate_base *)(a1 + 8));
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___(a1);
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  }
  return v2;
}
