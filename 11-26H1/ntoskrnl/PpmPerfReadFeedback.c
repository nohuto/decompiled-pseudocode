/*
 * XREFs of PpmPerfReadFeedback @ 0x1402577E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckQueueControlAction @ 0x1402577FC (PpmCheckQueueControlAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmCheckQueueControlAction(stru_140F11D08.SystemAffinityTokenListHead.Next);
}
