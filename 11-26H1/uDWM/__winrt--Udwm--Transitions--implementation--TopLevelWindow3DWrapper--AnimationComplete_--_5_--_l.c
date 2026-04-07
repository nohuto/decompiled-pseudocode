/*
 * XREFs of __winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_5_::_lambda_1_::operator()_::_1_::catch$1 @ 0x1800E8160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D1384 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_5_::_lambda_1_::operator()_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x68,
                           (int)"clientcore\\windows\\dwm\\udwm\\transitions.toplevelwindow3dwrapper.cpp",
                           a4);
  return 0LL;
}
