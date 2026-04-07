/*
 * XREFs of _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive_::_1_::dtor$3 @ 0x1800EC669
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
