/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::OnAnimationComplete_::_1_::catch$0 @ 0x1800E81AE
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D1384 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::OnAnimationComplete_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x8B,
                           (int)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
                           a4);
  return 0LL;
}
