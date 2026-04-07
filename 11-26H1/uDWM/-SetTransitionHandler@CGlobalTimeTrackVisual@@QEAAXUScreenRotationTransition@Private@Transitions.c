/*
 * XREFs of ?SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationTransition@Private@Transitions@Udwm@winrt@@@Z @ 0x1800DE0D8
 * Callers:
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800D2C08 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA?AU?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@0@AEBUITransitionState@Transitions@Udwm@0@@Z @ 0x1800D6BC4 (--$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA-AU-$weak_ref@UITransitionState.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalTimeTrackVisual::SetTransitionHandler(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  v4 = winrt::make_weak<winrt::Udwm::Transitions::ITransitionState>(&v8, a2);
  v5 = (__int64 *)(a1 + 208);
  if ( v5 != v4 )
  {
    if ( *v5 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v5);
    v6 = *v4;
    *v4 = 0LL;
    *v5 = v6;
  }
  if ( v8 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v8);
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a2);
}
