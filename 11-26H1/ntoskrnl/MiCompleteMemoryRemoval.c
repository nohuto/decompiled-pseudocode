/*
 * XREFs of MiCompleteMemoryRemoval @ 0x14086C0DC
 * Callers:
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiPerformMemoryChange @ 0x1406EE614 (MiPerformMemoryChange.c)
 *     MiClearMirrorBitmaps @ 0x1406F42D4 (MiClearMirrorBitmaps.c)
 *     MiReduceCommitLimits @ 0x14070A82C (MiReduceCommitLimits.c)
 */

void __fastcall MiCompleteMemoryRemoval(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // r8

  v2 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(a1 + 40) & 0x40000) == 0 )
  {
    MiReduceCommitLimits((__int64)&MiSystemPartition, v2, *(_QWORD *)(a1 + 32));
    if ( (*(_DWORD *)(a1 + 40) & 0x200000) != 0 )
      v3 = 16;
    else
      v3 = 0;
    MiReturnCommit((__int64)&MiSystemPartition, v2, v3);
  }
  MiClearMirrorBitmaps(0, *(_QWORD *)(a1 + 16), v2);
  MiPerformMemoryChange(a1);
}
