/*
 * XREFs of ?SetTimelineDirty@CDesktopManager@@SAXXZ @ 0x180023214
 * Callers:
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x1800231D4 (-Restart@CTimelineBase@@QEAAXN@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

void CDesktopManager::SetTimelineDirty(void)
{
  CDesktopManager::s_fTimelineDirty = 1;
}
