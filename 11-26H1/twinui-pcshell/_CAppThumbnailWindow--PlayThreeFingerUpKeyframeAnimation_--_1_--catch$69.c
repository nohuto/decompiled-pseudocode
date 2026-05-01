/*
 * XREFs of _CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation_::_1_::catch$69 @ 0x1806F0BE7
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation_::_1_::catch_69(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x388,
                            (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                            a4);
  return 0LL;
}
