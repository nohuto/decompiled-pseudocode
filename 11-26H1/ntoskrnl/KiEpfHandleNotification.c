/*
 * XREFs of KiEpfHandleNotification @ 0x1405F6F30
 * Callers:
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405F6EAC (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1405F6F54 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
