/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::Release @ 0x18022F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::_implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___ @ 0x1803CFA20 (winrt--impl--implements_delegate_winrt--Windows--Foundation--DeferralCompletedHandl_ea_1803CFA20.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::Release(
        char *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference((winrt::impl::implements_delegate_base *)(a1 + 8));
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::_implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___(a1);
    operator delete(a1, (const struct std::nothrow_t *)(v2 + 24));
  }
  return v2;
}
