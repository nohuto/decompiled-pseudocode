/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x1405F6E90
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405F6EAC (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140F14B8C);
  return KiEpfDrainCompletionQueue();
}
