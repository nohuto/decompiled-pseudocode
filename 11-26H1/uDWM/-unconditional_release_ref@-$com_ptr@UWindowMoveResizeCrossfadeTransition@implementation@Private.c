/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180087814
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1_::operator() @ 0x180087744 (_winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransition--PostTra.c)
 *     ??1?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800877F8 (--1-$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@.c)
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
