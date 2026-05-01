/*
 * XREFs of ??1?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAA@XZ @ 0x180286250
 * Callers:
 *     ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x1800C9058 (--1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ.c)
 *     ??1?$queue@UForegroundSwitchData@Discover@PenWorkspace@@V?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@@std@@QEAA@XZ @ 0x180286244 (--1-$queue@UForegroundSwitchData@Discover@PenWorkspace@@V-$deque@UForegroundSwitchData@Discover@.c)
 * Callees:
 *     ?_Tidy@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAXXZ @ 0x180286280 (-_Tidy@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchData@D.c)
 */

void __fastcall std::deque<PenWorkspace::Discover::ForegroundSwitchData>::~deque<PenWorkspace::Discover::ForegroundSwitchData>(
        void **a1)
{
  void *v2; // rcx

  std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16>(v2, (struct std::nothrow_t *)0x10);
}
