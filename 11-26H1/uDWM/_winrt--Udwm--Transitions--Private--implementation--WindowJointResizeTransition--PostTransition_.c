/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1_::__lambda_1_ @ 0x1800D6C48
 * Callers:
 *     winrt::Udwm::Transitions::UnloadDelegate::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___ @ 0x1800D636C (winrt--Udwm--Transitions--UnloadDelegate--UnloadDelegate__winrt--Udwm--Transitions--Private--imp.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::_implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___ @ 0x1800D6D50 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__winrt--U_ea_1800D6D50.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1_::__lambda_1_(
        __int64 *a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = a1 + 1;
  if ( *v2 )
    result = winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v2);
  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(a1);
  return result;
}
