/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::Release @ 0x18048C150
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EAE8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___ @ 0x180489048 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_180489048.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
