/*
 * XREFs of _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::catch$6 @ 0x1806DFA56
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlBaseViewController::_IXamlMultitaskingViewController_::CloseSwitchItem_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x4D,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
    a4);
  return 0LL;
}
