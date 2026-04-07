/*
 * XREFs of _CAnimationClock::_SetState_::_1_::dtor$0 @ 0x1800EBC47
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAnimationClock::_SetState_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  AnimationClockLoggingTelemetry::AnimationClockStateChange::~AnimationClockStateChange((volatile signed __int32 **)(a2 + 80));
}
