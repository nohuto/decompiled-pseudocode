/*
 * XREFs of ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180041484
 * Callers:
 *     ?WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ @ 0x180030A74 (-WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ @ 0x1800404AC (-WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ @ 0x180040724 (-WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ.c)
 *     ?TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ @ 0x180041378 (-TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ.c)
 *     ??$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAEAW4WindowAnimationType@CTopLevelWindow3D@@@Z @ 0x180041414 (--$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAE.c)
 *     ?WindowMoveResizeCrossfadeAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x180041840 (-WindowMoveResizeCrossfadeAnimationTeardownComplete@UDwmTrace@@SAXXZ.c)
 *     ?WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ @ 0x18007D5B0 (-WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x180089A48 (-ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?WindowSnapSignalReceived@UDwmTrace@@SAXXZ @ 0x180089A98 (-WindowSnapSignalReceived@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x1800D35A8 (-ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ @ 0x1800D35F8 (-ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800D3648 (-ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x1800D3698 (-ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ @ 0x1800D36E8 (-ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800D3738 (-ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ @ 0x1800D3788 (-ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ @ 0x1800D37D8 (-ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x180068030 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008E594 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<UDwmTrace>::get(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  __int64 *v5; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+4Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v5 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&`UDwmTrace::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v5) && v6 )
  {
    v3 = &`UDwmTrace::Instance'::`2'::wrapper;
    v5 = &qword_180115A70;
    qword_180115A70 = (__int64)&WindowFrameLogging::`vftable';
    qword_180115A78 = 0LL;
    byte_180115A80 = 0;
    dword_180115A84 = 0;
    qword_180115A88 = (__int64)&`UDwmTrace::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(`UDwmTrace::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v3);
  }
  return v5;
}
