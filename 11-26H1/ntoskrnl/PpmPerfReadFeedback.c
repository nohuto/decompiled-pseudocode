/*
 * XREFs of PpmPerfReadFeedback @ 0x140258FC0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckQueueControlAction @ 0x140258FDC (PpmCheckQueueControlAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmCheckQueueControlAction(PpmPerfControlReadFeedback);
}
