/*
 * XREFs of ?UpdateAngle@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D7820
 * Callers:
 *     ?UpdateAngle@?$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHHH@Z @ 0x1800D7810 (-UpdateAngle@-$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::UpdateAngle(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x6D,
    (int)"clientcore\\windows\\dwm\\udwm\\transitions.windowjointresizetransition.cpp",
    a4);
}
