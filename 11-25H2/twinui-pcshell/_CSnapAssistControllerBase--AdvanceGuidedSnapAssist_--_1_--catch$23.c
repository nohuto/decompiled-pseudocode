/*
 * XREFs of _CSnapAssistControllerBase::AdvanceGuidedSnapAssist_::_1_::catch$23 @ 0x1806AB234
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSnapAssistControllerBase::AdvanceGuidedSnapAssist_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 68) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 360),
                           (void *)0x2C4,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                           a4);
  return 0LL;
}
