/*
 * XREFs of _DeviceGraphStore::GetSubmixesForApplication_::_1_::catch$2 @ 0x18016A342
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall DeviceGraphStore::GetSubmixesForApplication_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 136),
                           (void *)0x2F3,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           a4);
  return 0LL;
}
