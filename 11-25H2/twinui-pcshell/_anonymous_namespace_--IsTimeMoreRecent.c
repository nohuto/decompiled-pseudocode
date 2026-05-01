/*
 * XREFs of _anonymous_namespace_::IsTimeMoreRecent @ 0x1802228C0
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800A49F8 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsTimeMoreRecent(const FILETIME *a1, const FILETIME *a2)
{
  return CompareFileTime(a1, a2) > 0;
}
