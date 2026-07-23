/*
 * XREFs of MiCompleteMemoryAddition @ 0x14086BF6C
 * Callers:
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiComputeNodeMemory @ 0x1406ECB90 (MiComputeNodeMemory.c)
 *     MiEnableNewPfns @ 0x1406ED114 (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x1406EE614 (MiPerformMemoryChange.c)
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 *     MiNotifyMemoryChange @ 0x14086D084 (MiNotifyMemoryChange.c)
 *     MiFinishChildPartitionHotAdd @ 0x1408821A0 (MiFinishChildPartitionHotAdd.c)
 */

__int64 __fastcall MiCompleteMemoryAddition(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  char v5; // r9
  __int64 v6; // rax
  int v7; // ecx
  ULONG *v8; // rcx

  MiPerformMemoryChange(a1);
  if ( (*(_DWORD *)(a1 + 40) & 8) != 0 )
    MiComputeNodeMemory(*(ULONG **)(a1 + 48), 1);
  _InterlockedIncrement64(&qword_140E2D948);
  v2 = *(_QWORD **)(a1 + 104);
  if ( v2 )
  {
    do
      v2 = (_QWORD *)*v2;
    while ( v2 );
    MiFinishChildPartitionHotAdd(*(_QWORD *)(a1 + 48));
  }
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(a1 + 40) & 0x40) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v3 &= 0xFFFFFFFFFFFFFE00uLL;
    v4 = ((*(_QWORD *)(a1 + 16) + v4 + 511) & 0xFFFFFFFFFFFFFE00uLL) - v3;
    v5 = 0;
  }
  MiUpdateLargePageBitMap(*(_QWORD *)(a1 + 48), v3, v4, v5);
  if ( (*(_DWORD *)(a1 + 40) & 8) != 0 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), 1);
  if ( (*(_DWORD *)(a1 + 40) & 0x8000) != 0 )
    v6 = MiHotRemoveHugeRange(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), 0);
  else
    v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 40);
  if ( (v7 & 0x40) != 0 )
  {
    if ( (v7 & 0x40000) == 0 )
      MiIncreaseCommitLimits(
        (__int64)&MiSystemPartition,
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 32),
        1,
        0LL);
    v8 = *(ULONG **)(a1 + 48);
    if ( v8 != &MiSystemPartition && (*(_DWORD *)(a1 + 40) & 0x8040) != 0 )
      MiIncreaseCommitLimits((__int64)v8, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32), 1, 0LL);
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 48) + 23488LL), *(_QWORD *)(a1 + 32));
  }
  else
  {
    MiEnableNewPfns(a1, v6);
  }
  return MiNotifyMemoryChange(a1);
}
