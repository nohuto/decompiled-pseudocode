/*
 * XREFs of ??0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18008D878
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180030158 (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18007C210 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 * Callees:
 *     ??$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800309BC (--$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@.c)
 */

winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *__fastcall winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition::WindowMoveResizeCrossfadeTransition(
        winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *this)
{
  winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,>((__int64 *)this);
  return this;
}
