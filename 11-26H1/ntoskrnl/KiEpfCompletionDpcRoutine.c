/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x1405F9850
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405F986C (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140F14F2C);
  return KiEpfDrainCompletionQueue();
}
