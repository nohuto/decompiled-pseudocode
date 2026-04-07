/*
 * XREFs of ??1?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x180095738
 * Callers:
 *     _winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::Invoke_::_1_::dtor$0 @ 0x1800EC769 (_winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_7747b62f378c0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095754 (-unconditional_release_ref@-$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::~com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::unconditional_release_ref(a1);
  return result;
}
