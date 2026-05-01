/*
 * XREFs of _GamingPosturePositioner::OnShowWindowPolicy_::_1_::catch$78 @ 0x1806F3052
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingPosturePositioner::OnShowWindowPolicy_::_1_::catch_78(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 120) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 776),
                            (void *)0x953,
                            (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                            a4);
  return 0LL;
}
