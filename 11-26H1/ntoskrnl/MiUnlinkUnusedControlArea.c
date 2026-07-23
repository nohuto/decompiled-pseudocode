/*
 * XREFs of MiUnlinkUnusedControlArea @ 0x1402EDDD4
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x1402EDB60 (MiCheckForControlAreaDeletion.c)
 *     MiRemoveUnusedSegment @ 0x1402EDD50 (MiRemoveUnusedSegment.c)
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406EC344 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1406EC5B0 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiComputePagedPoolSegmentBytes @ 0x1402EDE88 (MiComputePagedPoolSegmentBytes.c)
 *     MiRemoveEntryNotifySentinel @ 0x1402EE30C (MiRemoveEntryNotifySentinel.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 */

__int64 __fastcall MiUnlinkUnusedControlArea(__int64 a1)
{
  _QWORD *v1; // rsi
  int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 56);
  v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
  v5 = MiComputePagedPoolSegmentBytes();
  if ( (v2 & 0x40000) != 0 && (*(_DWORD *)(v4 + 2116))-- == 1 )
  {
    KeCancelTimer((PKTIMER)(v4 + 2360));
    *(_BYTE *)(v4 + 2424) = 0;
  }
  MiRemoveEntryNotifySentinel(v4 + 2352, v1);
  *(_DWORD *)(a1 + 56) = v2 & 0xBFFFFFFF;
  v1[1] = v1;
  *v1 = v1;
  result = *(_QWORD *)(v4 + 2440) - v5;
  *(_QWORD *)(v4 + 2440) = result;
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E2C950.Header.WaitListHead.Flink, -v5);
  return result;
}
