/*
 * XREFs of _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive_::_1_::dtor$1 @ 0x1800E6D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)(a2 + 32));
}
