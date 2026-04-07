/*
 * XREFs of ?RegisterTimeline@CDesktopManager@@SAXPEAVCTimelineBase@@@Z @ 0x1800495EC
 * Callers:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004958C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::RegisterTimeline(struct CTimelineBase *a1)
{
  *(struct _SINGLE_LIST_ENTRY *)(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL)) = CDesktopManager::s_listTimeline;
  CDesktopManager::s_listTimeline.Next = (struct _SINGLE_LIST_ENTRY *)(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL));
}
