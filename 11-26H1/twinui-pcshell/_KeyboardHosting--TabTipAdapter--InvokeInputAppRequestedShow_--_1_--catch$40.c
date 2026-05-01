/*
 * XREFs of _KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow_::_1_::catch$40 @ 0x1806CD518
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow_::_1_::catch_40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 280),
                           (void *)0xA4,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                           a4);
  return 0LL;
}
