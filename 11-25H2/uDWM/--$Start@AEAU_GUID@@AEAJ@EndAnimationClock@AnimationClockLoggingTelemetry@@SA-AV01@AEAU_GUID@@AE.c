/*
 * XREFs of ??$Start@AEAU_GUID@@AEAJ@EndAnimationClock@AnimationClockLoggingTelemetry@@SA?AV01@AEAU_GUID@@AEAJ@Z @ 0x1800512E0
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180051170 (-End@CAnimationClock@@QEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004C0C4 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180051528 (-StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 */

// Hidden C++ exception states: #wind=1
AnimationClockLoggingTelemetry::EndAnimationClock *__fastcall AnimationClockLoggingTelemetry::EndAnimationClock::Start<_GUID &,long &>(
        AnimationClockLoggingTelemetry::EndAnimationClock *this,
        struct _GUID *a2,
        int *a3)
{
  struct _GUID v7; // [rsp+20h] [rbp-18h] BYREF

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)"EndAnimationClock");
  *(_QWORD *)this = &AnimationClockLoggingTelemetry::EndAnimationClock::`vftable';
  v7 = *a2;
  AnimationClockLoggingTelemetry::EndAnimationClock::StartActivity(this, &v7, *a3);
  return this;
}
