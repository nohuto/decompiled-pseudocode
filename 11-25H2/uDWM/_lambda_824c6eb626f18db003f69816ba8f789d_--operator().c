/*
 * XREFs of _lambda_824c6eb626f18db003f69816ba8f789d_::operator() @ 0x1800D9F10
 * Callers:
 *     winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::Invoke @ 0x1800DA1A0 (winrt--impl--delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_824c6eb626f18db003f69816b.c)
 * Callees:
 *     ?Cancel@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A600 (-Cancel@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180094A2C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?get@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800DB220 (-get@-$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 *     ?get@?$weak_ref@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800DB26C (-get@-$weak_ref@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@win.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_824c6eb626f18db003f69816ba8f789d_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  winrt::weak_ref<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::get(a1, &v5);
  v2 = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 176))-- != 1 )
      goto LABEL_9;
    winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::get(a1 + 8, &v4);
    if ( v4 )
      winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::Cancel(&v4);
  }
  else
  {
    winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::get(a1 + 8, &v4);
    if ( v4 )
      winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::Cancel(&v4);
  }
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v4);
LABEL_9:
  if ( v2 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v5);
}
