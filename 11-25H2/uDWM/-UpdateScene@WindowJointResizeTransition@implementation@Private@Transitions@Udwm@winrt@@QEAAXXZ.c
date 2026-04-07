/*
 * XREFs of ?UpdateScene@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800DAA40
 * Callers:
 *     ?UpdateScene@?$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x1800DAA30 (-UpdateScene@-$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095D90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::UpdateScene(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0xC8,
    (int)"clientcore\\windows\\dwm\\udwm\\transitions.windowjointresizetransition.cpp",
    a4);
}
