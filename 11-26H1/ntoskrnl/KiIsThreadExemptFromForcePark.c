/*
 * XREFs of KiIsThreadExemptFromForcePark @ 0x14023137C
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140231210 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 *     KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x140309DBC (KiUpdateLocalReadyQueueStatisticsOnInsertion.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsThreadExemptFromForcePark(__int64 a1)
{
  char v1; // dl
  char v2; // r8
  bool v3; // al

  v1 = 0;
  if ( !dword_140FBF1E4 || (v2 = 1, (*(_DWORD *)(a1 + 116) & 8) == 0) )
    v2 = 0;
  v3 = dword_140FBF1E8 && (*(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1);
  if ( v2 || v3 )
    return 1;
  return v1;
}
