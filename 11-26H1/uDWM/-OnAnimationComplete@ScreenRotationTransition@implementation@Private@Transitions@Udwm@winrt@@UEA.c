/*
 * XREFs of ?OnAnimationComplete@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x18007BA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180041D0C (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3228 (-HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?log@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXPEBG@Z @ 0x1800D4C3C (-log@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitio.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::OnAnimationComplete(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v5; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v5 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)((char *)this - 32);
    if ( *((_DWORD *)this + 2) )
    {
      if ( a2 == *((_DWORD *)v5 + 18) )
      {
        tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
          (char *)this + 72,
          L"First animation complete");
        *((_DWORD *)this + 10) = -1;
        if ( *((_DWORD *)this + 2) == 4 )
        {
          tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
            (char *)this + 72,
            L"Half rotation animation complete");
          winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::HandleAnimationEnd(v5);
        }
      }
      else if ( a2 == *((_DWORD *)this + 11) )
      {
        tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
          (char *)this + 72,
          L"Second animation complete");
        *((_DWORD *)this + 11) = -1;
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::HandleAnimationEnd(v5);
      }
    }
    else
    {
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Cancel((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)((char *)this - 32));
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8B,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
                           a4);
  }
  return 0LL;
}
