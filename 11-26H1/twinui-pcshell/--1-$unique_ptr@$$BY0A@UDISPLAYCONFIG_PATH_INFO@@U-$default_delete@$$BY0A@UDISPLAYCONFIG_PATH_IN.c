/*
 * XREFs of ??1?$unique_ptr@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@U?$default_delete@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@XZ @ 0x1801D0414
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180110500 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1801105E4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ??_G_COUNTER_BUFFER@@QEAAPEAXI@Z @ 0x18035D380 (--_G_COUNTER_BUFFER@@QEAAPEAXI@Z.c)
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BE734 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 *     _CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor$0 @ 0x1806D483F (_CQueryKnownGameList--GetGameEntryFromPID_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$4 @ 0x1806D4863 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$4.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$5 @ 0x1806D4875 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$5.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$6 @ 0x1806D4887 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$6.c)
 *     _SnapAccessibilityHelpers::MonitorIDFinder::BuildMonitorIndex_::_1_::dtor$1 @ 0x1806FA2A7 (_SnapAccessibilityHelpers--MonitorIDFinder--BuildMonitorIndex_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, a2);
}
