/*
 * XREFs of PpmPerfCommitPerformance @ 0x1402594B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckQueueControlAction @ 0x140258FDC (PpmCheckQueueControlAction.c)
 */

__int64 PpmPerfCommitPerformance()
{
  return PpmCheckQueueControlAction(PpmPerfControlCommitPerformance);
}
