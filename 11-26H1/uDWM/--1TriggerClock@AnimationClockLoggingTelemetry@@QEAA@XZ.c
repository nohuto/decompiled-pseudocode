/*
 * XREFs of ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18008D4FC
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180040EC8 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     _CAnimationClock::_TriggerAnimation_::_1_::dtor$0 @ 0x1800E796B (_CAnimationClock--_TriggerAnimation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800251CC (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::TriggerClock::~TriggerClock(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&AnimationClockLoggingTelemetry::TriggerClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
