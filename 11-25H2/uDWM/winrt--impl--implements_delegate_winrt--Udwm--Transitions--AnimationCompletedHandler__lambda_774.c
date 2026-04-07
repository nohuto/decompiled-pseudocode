/*
 * XREFs of winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::Release @ 0x180089570
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::_implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___ @ 0x180099E44 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--AnimationCompletedHandle_ea_180099E44.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800D91C4 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::Release(
        char *a1)
{
  unsigned int v2; // edi
  const struct std::nothrow_t *v3; // rdx

  v2 = winrt::impl::implements_delegate_base::decrement_reference((winrt::impl::implements_delegate_base *)(a1 + 8));
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::_implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___(a1);
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v3);
  }
  return v2;
}
