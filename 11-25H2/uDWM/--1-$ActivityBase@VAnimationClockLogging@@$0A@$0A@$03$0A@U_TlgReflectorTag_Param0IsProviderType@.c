/*
 * XREFs of ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E100
 * Callers:
 *     ??1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18008277C (--1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18008ACFC (--1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18008DE64 (--1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180099B00 (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A5468 (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18004C1F0 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18004C9D8 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 280));
  return wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
