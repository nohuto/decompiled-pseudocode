/*
 * XREFs of ??1?$com_ptr@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x18008DB94
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DelayNextAnimation_::_1_::dtor$0 @ 0x1800E94A8 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--DelayNextAnimation.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18008DE50 (-unconditional_release_ref@-$com_ptr@UScreenRotationTransition@implementation@Private@Transition.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::~com_ptr<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::unconditional_release_ref();
  return result;
}
