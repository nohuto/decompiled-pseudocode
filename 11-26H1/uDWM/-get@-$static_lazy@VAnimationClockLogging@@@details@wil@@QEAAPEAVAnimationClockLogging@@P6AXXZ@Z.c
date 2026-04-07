/*
 * XREFs of ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180025070
 * Callers:
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x180024ED0 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002515C (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180025274 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$03@@IEAA@XZ @ 0x1800268F4 (--1-$_TlgActivityBase@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180026C10 (-StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x18003EEC0 (-StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x18003FB2C (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800410B4 (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180041208 (-StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18006CF00 (-StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180071080 (-StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180074CA0 (-StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180075740 (-StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800983B0 (-NotifyFailure@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800985E0 (-StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800986A0 (-StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x180068030 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008E594 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AnimationClockLogging>::get(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  __int64 *v5; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+4Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v5 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&`AnimationClockLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v5) && v6 )
  {
    v3 = &`AnimationClockLogging::Instance'::`2'::wrapper;
    v5 = &qword_180118B68;
    qword_180118B68 = (__int64)&WindowFrameLogging::`vftable';
    qword_180118B70 = 0LL;
    byte_180118B78 = 0;
    dword_180118B7C = 0;
    qword_180118B80 = (__int64)&`AnimationClockLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(`AnimationClockLogging::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v3);
  }
  return v5;
}
