/*
 * XREFs of winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::Release @ 0x1800DA670
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800D91C4 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::_implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___ @ 0x1800D9DB4 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_8_ea_1800D9DB4.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::Release(
        void *a1)
{
  unsigned int v2; // edi
  const struct std::nothrow_t *v3; // rdx

  v2 = winrt::impl::implements_delegate_base::decrement_reference((__int64)a1 + 8);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::_implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___((__int64)a1);
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v3);
  }
  return v2;
}
