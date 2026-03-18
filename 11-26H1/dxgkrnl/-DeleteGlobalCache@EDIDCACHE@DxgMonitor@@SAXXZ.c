/*
 * XREFs of ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x1402706E4
 * Callers:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x140005854 (-MonitorCleanupGlobal@@YAJXZ.c)
 * Callees:
 *     ??_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z @ 0x140098710 (--_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z.c)
 */

void DxgMonitor::EDIDCACHE::DeleteGlobalCache(void)
{
  if ( DxgMonitor::EDIDCACHE::s_pEdidCache )
    DxgMonitor::EDIDCACHE::`scalar deleting destructor'(DxgMonitor::EDIDCACHE::s_pEdidCache, 1);
  DxgMonitor::EDIDCACHE::s_pEdidCache = 0LL;
}
