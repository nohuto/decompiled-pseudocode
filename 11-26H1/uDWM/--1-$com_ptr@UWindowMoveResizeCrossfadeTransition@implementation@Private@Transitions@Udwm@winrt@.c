/*
 * XREFs of ??1?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800877F8
 * Callers:
 *     __winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1_::operator()_::_1_::dtor$0 @ 0x1800E835A (__winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransition--PostTr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180087814 (-unconditional_release_ref@-$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::~com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::unconditional_release_ref(a1);
  return result;
}
