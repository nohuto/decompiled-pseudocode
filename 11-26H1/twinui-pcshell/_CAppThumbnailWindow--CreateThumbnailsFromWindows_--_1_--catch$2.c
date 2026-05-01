/*
 * XREFs of _CAppThumbnailWindow::CreateThumbnailsFromWindows_::_1_::catch$2 @ 0x1806F0AC4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAppThumbnailWindow::CreateThumbnailsFromWindows_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 216),
                           (void *)0x323,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                           a4);
  return 0LL;
}
