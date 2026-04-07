/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor$0 @ 0x1800EBE6C
 * Callers:
 *     <none>
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)(a2 + 184));
  }
}
