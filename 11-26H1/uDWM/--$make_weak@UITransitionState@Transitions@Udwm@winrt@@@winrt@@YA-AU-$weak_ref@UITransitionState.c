/*
 * XREFs of ??$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA?AU?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@0@AEBUITransitionState@Transitions@Udwm@0@@Z @ 0x1800D6BC4
 * Callers:
 *     ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D71AC (-PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationTransition@Private@Transitions@Udwm@winrt@@@Z @ 0x1800DE0D8 (-SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationTransition@Private@Transitions.c)
 * Callees:
 *     ??$from_com_ref@AEBUITransitionState@Transitions@Udwm@winrt@@@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@AEAAXAEBUITransitionState@Transitions@Udwm@1@@Z @ 0x1800D6950 (--$from_com_ref@AEBUITransitionState@Transitions@Udwm@winrt@@@-$weak_ref@UITransitionState@Trans.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make_weak<winrt::Udwm::Transitions::ITransitionState>(__int64 *a1, _QWORD *a2)
{
  *a1 = 0LL;
  winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::from_com_ref<winrt::Udwm::Transitions::ITransitionState const &>(
    a1,
    a2);
  return a1;
}
