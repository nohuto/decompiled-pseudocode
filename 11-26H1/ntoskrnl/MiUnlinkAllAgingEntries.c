/*
 * XREFs of MiUnlinkAllAgingEntries @ 0x1402EFA7C
 * Callers:
 *     MiUnlinkWorkingSet @ 0x1404CE3CC (MiUnlinkWorkingSet.c)
 * Callees:
 *     MiRemoveEntryNotifySentinel @ 0x1402EE30C (MiRemoveEntryNotifySentinel.c)
 *     MiUnlinkHardLimitWorkingSet @ 0x1402EFB08 (MiUnlinkHardLimitWorkingSet.c)
 */

__int64 __fastcall MiUnlinkAllAgingEntries(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx

  v1 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v1 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    MiRemoveEntryNotifySentinel(
      (_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174)) + 18640LL),
      (unsigned __int64 *)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return MiUnlinkHardLimitWorkingSet(a1);
}
