/*
 * XREFs of ?Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ @ 0x18004B810
 * Callers:
 *     ??$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAEAW4WindowAnimationType@CTopLevelWindow3D@@@Z @ 0x18004B6D4 (--$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAE.c)
 *     ?TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ @ 0x18004CFBC (-TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ @ 0x18006228C (-WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ @ 0x180062398 (-WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x18007EE54 (-WindowMoveResizeCrossfadeAnimationTeardownComplete@UDwmTrace@@SAXXZ.c)
 *     ?WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ @ 0x18008E858 (-WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ @ 0x18008E8A8 (-WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x180096D5C (-ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?WindowSnapSignalReceived@UDwmTrace@@SAXXZ @ 0x180096DAC (-WindowSnapSignalReceived@UDwmTrace@@SAXXZ.c)
 *     ?UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A337C (-UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ @ 0x1800A33D0 (-UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x1800A3424 (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x1800A3478 (-UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ @ 0x1800A34CC (-UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A3520 (-UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x1800D63E8 (-ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ @ 0x1800D6438 (-ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800D6488 (-ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x1800D64D8 (-ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ @ 0x1800D6528 (-ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800D6578 (-ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ @ 0x1800D65C8 (-ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ @ 0x1800D6618 (-ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18004B830 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall UDwmTrace::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<UDwmTrace>::get(
                                             a1,
                                             _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                                         + 8);
}
