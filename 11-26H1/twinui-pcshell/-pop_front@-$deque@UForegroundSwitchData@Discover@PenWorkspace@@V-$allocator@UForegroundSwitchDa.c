/*
 * XREFs of ?pop_front@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAAXXZ @ 0x18016CAC8
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800C9958 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18016C5A0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::deque<PenWorkspace::Discover::ForegroundSwitchData>::pop_front(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
    *(_QWORD *)(a1 + 24) = 0LL;
  else
    ++*(_QWORD *)(a1 + 24);
}
