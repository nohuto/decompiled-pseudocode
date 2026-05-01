/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___::Release @ 0x18069D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___ @ 0x18069CB74 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_18069CB74.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x40);
  }
  return v2;
}
