/*
 * XREFs of ??0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180099ECC
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18006286C (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008EED4 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 * Callees:
 *     ??$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800616CC (--$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@.c)
 */

winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *__fastcall winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition::WindowMoveResizeCrossfadeTransition(
        winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *this)
{
  winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,>((__int64 *)this);
  return this;
}
