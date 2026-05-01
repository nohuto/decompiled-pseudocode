/*
 * XREFs of ??1?$queue@UForegroundSwitchData@Discover@PenWorkspace@@V?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@@std@@QEAA@XZ @ 0x180286244
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$3 @ 0x1806D55B7 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::queue<PenWorkspace::Discover::ForegroundSwitchData>::~queue<PenWorkspace::Discover::ForegroundSwitchData,std::deque<PenWorkspace::Discover::ForegroundSwitchData>>(
        __int64 a1)
{
  return std::deque<PenWorkspace::Discover::ForegroundSwitchData>::~deque<PenWorkspace::Discover::ForegroundSwitchData>(a1);
}
