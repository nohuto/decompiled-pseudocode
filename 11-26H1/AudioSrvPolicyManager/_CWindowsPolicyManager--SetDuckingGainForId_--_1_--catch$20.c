/*
 * XREFs of _CWindowsPolicyManager::SetDuckingGainForId_::_1_::catch$20 @ 0x18004CBEC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180039D38 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId_::_1_::catch_20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 200) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 184),
                            (void *)0x20D,
                            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                            a4);
  return 0LL;
}
