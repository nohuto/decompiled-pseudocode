/*
 * XREFs of KiEpfHandleNotification @ 0x1405F98F0
 * Callers:
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405F986C (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1405F9914 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
