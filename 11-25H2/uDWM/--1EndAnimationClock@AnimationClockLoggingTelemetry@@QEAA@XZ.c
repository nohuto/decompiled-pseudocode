/*
 * XREFs of ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18008DE64
 * Callers:
 *     _CAnimationClock::End_::_1_::dtor$1 @ 0x1800EBD26 (_CAnimationClock--End_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004C314 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::EndAnimationClock::~EndAnimationClock(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&AnimationClockLoggingTelemetry::EndAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
