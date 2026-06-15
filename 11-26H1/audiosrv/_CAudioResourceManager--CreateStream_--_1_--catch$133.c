/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::catch$133 @ 0x180167EFD
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioResourceManager::CreateStream_::_1_::catch_133(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 264) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 1480),
                            (void *)0x6DD,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                            a4);
  return 0LL;
}
