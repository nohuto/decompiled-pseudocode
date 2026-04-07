/*
 * XREFs of ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18006FCB0
 * Callers:
 *     _CAnimationClock::End_::_1_::dtor$1 @ 0x1800E7814 (_CAnimationClock--End_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800251CC (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::EndAnimationClock::~EndAnimationClock(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&AnimationClockLoggingTelemetry::EndAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
