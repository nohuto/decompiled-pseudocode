/*
 * XREFs of ??$emplace_back@AEAUForegroundSwitchData@Discover@PenWorkspace@@@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAAAEAUForegroundSwitchData@Discover@PenWorkspace@@AEAU234@@Z @ 0x1803EB34C
 * Callers:
 *     ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x1803ECC3C (-OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEAUForegroundSwitchData@Discover@PenWorkspace@@@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAXAEAUForegroundSwitchData@Discover@PenWorkspace@@@Z @ 0x1803EA994 (--$_Emplace_back_internal@AEAUForegroundSwitchData@Discover@PenWorkspace@@@-$deque@UForegroundSw.c)
 */

__int64 __fastcall std::deque<PenWorkspace::Discover::ForegroundSwitchData>::emplace_back<PenWorkspace::Discover::ForegroundSwitchData &>(
        _QWORD *a1,
        __int64 a2)
{
  std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Emplace_back_internal<PenWorkspace::Discover::ForegroundSwitchData &>(
    a1,
    a2);
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[4] - 1LL + a1[3])));
}
