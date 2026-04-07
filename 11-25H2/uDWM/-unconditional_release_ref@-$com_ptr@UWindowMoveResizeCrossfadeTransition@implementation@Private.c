/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095754
 * Callers:
 *     winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::Invoke @ 0x1800956E0 (winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_7747b62f378c07.c)
 *     ??1?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x180095738 (--1-$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::Release(v2);
}
