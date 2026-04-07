/*
 * XREFs of ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FD34
 * Callers:
 *     ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18006FCB0 (--1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18006FCDC (--1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18006FD08 (--1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18008D4FC (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18009811C (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180024438 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180024E74 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 */

__int64 __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 280));
  return wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
