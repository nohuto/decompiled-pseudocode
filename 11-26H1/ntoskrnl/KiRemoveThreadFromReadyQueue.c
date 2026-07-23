/*
 * XREFs of KiRemoveThreadFromReadyQueue @ 0x140232008
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140338054 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiNormalPriorityReadyScan @ 0x1403C90A4 (KiNormalPriorityReadyScan.c)
 *     KiRemoveCurrentThreadLocalReadyQueueEnumerator @ 0x1404B6E4C (KiRemoveCurrentThreadLocalReadyQueueEnumerator.c)
 * Callees:
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x1403075C0 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 */

__int64 __fastcall KiRemoveThreadFromReadyQueue(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // r10
  _QWORD *v6; // rax

  v4 = a2 - 27;
  if ( (v4[15] & 0x400000) != 0 )
    _InterlockedAnd((volatile signed __int32 *)v4[121], 0xFFFBFFFF);
  v5 = (_QWORD *)*a2;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  if ( v6 == v5 )
    *(_DWORD *)(a1 + 33752) &= ~(1 << a3);
  return KiUpdateLocalReadyQueueStatisticsOnRemoval(a1, v4);
}
