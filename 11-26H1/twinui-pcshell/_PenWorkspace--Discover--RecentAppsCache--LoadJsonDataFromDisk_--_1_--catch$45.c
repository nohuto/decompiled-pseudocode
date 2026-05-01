/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk_::_1_::catch$45 @ 0x1806CDEEF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk_::_1_::catch_45(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 296),
                           (void *)0x26C,
                           (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                           a4);
  return 0LL;
}
