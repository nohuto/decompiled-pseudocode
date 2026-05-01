/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___::Release @ 0x1805023C0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___ @ 0x1804F761C (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_1804F761C.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x28);
  }
  return v2;
}
