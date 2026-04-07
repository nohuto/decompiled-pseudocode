/*
 * XREFs of ?Provider@AnimationClockLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004CEE0
 * Callers:
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x18004C244 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004CA68 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18004CE74 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18004DEC0 (-StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x18004E8F8 (-StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x18004E9BC (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18004EDA0 (-StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18004F180 (-StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18004F9A0 (-StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800509A0 (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180051528 (-StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$03@@IEAA@XZ @ 0x18007CE74 (--1-$_TlgActivityBase@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180084DF0 (-StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800A57E0 (-NotifyFailure@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800A5A10 (-StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800A5AC0 (-StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18004CF00 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall AnimationClockLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<AnimationClockLogging>::get(
                                             a1,
                                             _lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)
                                         + 8);
}
