/*
 * XREFs of WheaGetNotifyAllOfflinesPolicy @ 0x140650E30
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1407B814C (WheapAttemptPhysicalPageOffline.c)
 *     WheapExecuteRowFailureCheck @ 0x1407B9718 (WheapExecuteRowFailureCheck.c)
 * Callees:
 *     <none>
 */

bool WheaGetNotifyAllOfflinesPolicy()
{
  return *(_DWORD *)off_140E09658 <= 1u;
}
