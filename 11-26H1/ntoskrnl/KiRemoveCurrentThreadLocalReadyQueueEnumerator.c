/*
 * XREFs of KiRemoveCurrentThreadLocalReadyQueueEnumerator @ 0x1404B6E4C
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x140232008 (KiRemoveThreadFromReadyQueue.c)
 */

__int64 __fastcall KiRemoveCurrentThreadLocalReadyQueueEnumerator(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  return KiRemoveThreadFromReadyQueue(*(_QWORD *)a1, (_QWORD *)(a2 + 216), *(_BYTE *)(a1 + 12));
}
