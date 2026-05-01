/*
 * XREFs of _KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest_::_1_::catch$1 @ 0x1806AED09
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 664),
                           (void *)0xB8,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                           a4);
  return 0LL;
}
