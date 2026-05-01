/*
 * XREFs of _CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation_::_1_::catch$69 @ 0x1806C8C95
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation_::_1_::catch_69(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 120) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x33B,
                            (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                            a4);
  return 0LL;
}
