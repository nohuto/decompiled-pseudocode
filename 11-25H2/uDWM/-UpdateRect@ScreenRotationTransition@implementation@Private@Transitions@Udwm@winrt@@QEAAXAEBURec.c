/*
 * XREFs of ?UpdateRect@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z @ 0x1800D7270
 * Callers:
 *     ?UpdateRect@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800D7260 (-UpdateRect@-$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@U.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095D90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateRect(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        const struct winrt::Windows::Foundation::Rect *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x1D,
    (int)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
    a4);
}
