/*
 * XREFs of WheaGetNotifyAllOfflinesPolicy @ 0x1406D5D90
 * Callers:
 *     WheaPageOfflineAndPersist @ 0x1408482FC (WheaPageOfflineAndPersist.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1408487D0 (WheapAttemptPhysicalPageOffline.c)
 *     WheapExecuteRowFailureCheck @ 0x140849DB0 (WheapExecuteRowFailureCheck.c)
 * Callees:
 *     <none>
 */

bool WheaGetNotifyAllOfflinesPolicy()
{
  return *(_DWORD *)off_140E09598 <= 1u;
}
