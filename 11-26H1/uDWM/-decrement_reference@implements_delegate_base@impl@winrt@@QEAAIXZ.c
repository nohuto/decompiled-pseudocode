/*
 * XREFs of ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18008DE98
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1___::Release @ 0x18002EA50 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__winrt--Udw.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::Release @ 0x1800D75C0 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__winrt--U_ea_1800D75C0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::impl::implements_delegate_base::decrement_reference(__int64 this)
{
  return winrt::impl::atomic_ref_count::operator--(this);
}
