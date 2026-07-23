/*
 * XREFs of WheaGetNotifyAllOfflinesPolicy @ 0x1406D9E70
 * Callers:
 *     WheaPageOfflineAndPersist @ 0x14084E5CC (WheaPageOfflineAndPersist.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14084EAA0 (WheapAttemptPhysicalPageOffline.c)
 *     WheapExecuteRowFailureCheck @ 0x1408500C0 (WheapExecuteRowFailureCheck.c)
 * Callees:
 *     <none>
 */

bool WheaGetNotifyAllOfflinesPolicy()
{
  return *(_DWORD *)off_140E09598 <= 1u;
}
