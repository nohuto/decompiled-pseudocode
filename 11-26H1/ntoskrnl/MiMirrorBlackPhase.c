/*
 * XREFs of MiMirrorBlackPhase @ 0x140C00E38
 * Callers:
 *     MmDuplicateMemory @ 0x140C0CEE0 (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x1404A90F4 (MiIterateOverPartitions.c)
 *     MiMirrorDiscardPageContents @ 0x1405255E8 (MiMirrorDiscardPageContents.c)
 *     MiBlackRemoveChildPartitionHugeRanges @ 0x1406EF560 (MiBlackRemoveChildPartitionHugeRanges.c)
 *     MiMirrorPerformBlackWrites @ 0x1406EFDE8 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x1406EFEF0 (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x140C01D10 (MiRemoveEnclavePagesFromMirror.c)
 *     MiMirrorReduceBlackWrites @ 0x140C03640 (MiMirrorReduceBlackWrites.c)
 */

__int64 __fastcall MiMirrorBlackPhase(__int64 a1)
{
  int v3; // eax
  int v4; // eax

  if ( (*(_DWORD *)(a1 + 8) & 0x800) != 0 )
    return 0LL;
  if ( stru_140E36558.InitialStack )
    MiRemoveEnclavePagesFromMirror();
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 0x40D) != 0 )
  {
    if ( (v3 & 0x100) != 0 )
    {
      MiIterateOverPartitions((__int64)MiMirrorBlackRemoveChildPartitionPages, a1);
      MiBlackRemoveChildPartitionHugeRanges(a1);
    }
    v4 = *(_DWORD *)(a1 + 8);
    if ( (v4 & 0xC0) != 0 )
    {
      MiMirrorReduceBlackToActiveAndPrivatePages(a1);
    }
    else if ( (v4 & 0x100) != 0 )
    {
      MiMirrorReduceBlackWrites(&MiSystemPartition, a1);
    }
    else
    {
      MiIterateOverPartitions((__int64)MiMirrorReduceBlackWrites, a1);
    }
    MiMirrorDiscardPageContents();
  }
  return MiMirrorPerformBlackWrites((_QWORD *)a1);
}
