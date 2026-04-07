/*
 * XREFs of _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$2 @ 0x1800ED877
 * Callers:
 *     <none>
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler(*(winrt::Udwm::Transitions::AnimationCompletedHandler **)(a2 + 200));
  }
}
