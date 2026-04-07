/*
 * XREFs of ?SkipAnimationDelays@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D9020
 * Callers:
 *     ?SkipAnimationDelays@?$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x1800D9010 (-SkipAnimationDelays@-$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Trans.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095D90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::SkipAnimationDelays(
        winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x14,
    (int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
    a4);
}
