/*
 * XREFs of ?SetTimelineDirty@CDesktopManager@@SAXXZ @ 0x180030830
 * Callers:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180049614 (-Restart@CTimelineBase@@QEAAXN@Z.c)
 * Callees:
 *     <none>
 */

void CDesktopManager::SetTimelineDirty(void)
{
  CDesktopManager::s_fTimelineDirty = 1;
}
