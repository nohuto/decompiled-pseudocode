/*
 * XREFs of ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180086164
 * Callers:
 *     winrt::impl::make_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1___ @ 0x1800860A8 (winrt--impl--make_delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__winrt--Udwm--Tra.c)
 *     winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___ @ 0x1800D6B30 (winrt--impl--make_delegate_winrt--Udwm--Transitions--UnloadDelegate__winrt--Udwm--Transitions--P.c)
 * Callees:
 *     ??0atomic_ref_count@impl@winrt@@QEAA@I@Z @ 0x18008617C (--0atomic_ref_count@impl@winrt@@QEAA@I@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_base::implements_delegate_base(
        winrt::impl::implements_delegate_base *this,
        unsigned int a2)
{
  __int64 v2; // rcx

  winrt::impl::atomic_ref_count::atomic_ref_count(this, a2);
  return v2;
}
