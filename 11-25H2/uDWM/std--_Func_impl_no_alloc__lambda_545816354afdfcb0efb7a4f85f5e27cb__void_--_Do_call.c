/*
 * XREFs of std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Do_call @ 0x1800E0D40
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180094A2C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E0AB0 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800E0E10 (-get@-$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Do_call(__int64 a1)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v1; // [rsp+30h] [rbp+8h] BYREF

  winrt::weak_ref<winrt::Udwm::Transitions::implementation::UserResizeVisual>::get(a1 + 8, &v1);
  if ( v1 )
    winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(v1);
  if ( v1 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&v1);
}
