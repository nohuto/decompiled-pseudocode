/*
 * XREFs of MiUnlinkUnusedSubsection @ 0x1402EE29C
 * Callers:
 *     MiRemoveUnusedSubsection @ 0x1402EE21C (MiRemoveUnusedSubsection.c)
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x1406EC1A0 (MiDeleteDeleteOnCloseSubsections.c)
 * Callees:
 *     MiRemoveEntryNotifySentinel @ 0x1402EE30C (MiRemoveEntryNotifySentinel.c)
 *     MiReduceUnusedSubsectionCount @ 0x1402EE48C (MiReduceUnusedSubsectionCount.c)
 */

__int64 __fastcall MiUnlinkUnusedSubsection(_DWORD *a1)
{
  _QWORD *v2; // rdi
  int v3; // ebx

  v2 = a1 + 22;
  v3 = a1[8];
  MiRemoveEntryNotifySentinel(
    *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF)) + 2352LL,
    a1 + 22);
  a1[8] = v3 & 0xFFF7FFFF;
  v2[1] = v2;
  *v2 = v2;
  return MiReduceUnusedSubsectionCount(a1);
}
