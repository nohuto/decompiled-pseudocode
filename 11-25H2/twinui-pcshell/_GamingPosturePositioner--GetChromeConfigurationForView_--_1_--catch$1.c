/*
 * XREFs of _GamingPosturePositioner::GetChromeConfigurationForView_::_1_::catch$1 @ 0x1806CA874
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingPosturePositioner::GetChromeConfigurationForView_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x1F3,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                           a4);
  return 0LL;
}
