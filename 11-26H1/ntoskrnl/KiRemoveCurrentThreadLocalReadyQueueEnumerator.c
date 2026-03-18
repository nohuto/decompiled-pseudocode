/*
 * XREFs of KiRemoveCurrentThreadLocalReadyQueueEnumerator @ 0x1404BD66C
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x1402306B0 (KiRemoveThreadFromReadyQueue.c)
 */

__int64 __fastcall KiRemoveCurrentThreadLocalReadyQueueEnumerator(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  return KiRemoveThreadFromReadyQueue(*(_QWORD *)a1, (_QWORD *)(a2 + 216), *(_BYTE *)(a1 + 12));
}
