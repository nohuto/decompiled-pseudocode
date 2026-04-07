/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartFirstAnimation_::_1_::dtor$4 @ 0x1800ED5BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartFirstAnimation_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>((CAnimationEngine **)(a2 + 56));
}
