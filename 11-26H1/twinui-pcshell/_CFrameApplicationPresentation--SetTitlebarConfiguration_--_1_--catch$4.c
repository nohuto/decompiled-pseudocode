/*
 * XREFs of _CFrameApplicationPresentation::SetTitlebarConfiguration_::_1_::catch$4 @ 0x1806D885B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetTitlebarConfiguration_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x5E3,
                           (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                           a4);
  return 0LL;
}
