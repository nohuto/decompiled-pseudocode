/*
 * XREFs of ??1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18008277C
 * Callers:
 *     _CAnimationClock::_SetState_::_1_::dtor$0 @ 0x1800EBC47 (_CAnimationClock--_SetState_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004C314 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::~AnimationClockStateChange(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
