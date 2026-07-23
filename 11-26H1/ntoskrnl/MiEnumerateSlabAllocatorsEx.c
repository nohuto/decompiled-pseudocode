/*
 * XREFs of MiEnumerateSlabAllocatorsEx @ 0x14049A754
 * Callers:
 *     MiLogPeriodicTelemetry @ 0x1402A7B80 (MiLogPeriodicTelemetry.c)
 *     MiDemoteSlabEntriesDpc @ 0x140308810 (MiDemoteSlabEntriesDpc.c)
 *     MiDefragmentAllSlabAllocators @ 0x14049A638 (MiDefragmentAllSlabAllocators.c)
 *     MiDeletePendingSlabIdentities @ 0x14049A848 (MiDeletePendingSlabIdentities.c)
 *     MiLockMemoryLists @ 0x140708630 (MiLockMemoryLists.c)
 *     MiChangeSlabIdentitiesDpc @ 0x14070A9B0 (MiChangeSlabIdentitiesDpc.c)
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 *     MiDetermineDefragmentSlabIdentity @ 0x14070B6D0 (MiDetermineDefragmentSlabIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x14070B794 (MiEstablishDefragSlabEntries.c)
 *     MiFindDefragmentSlabEntries @ 0x14070BB04 (MiFindDefragmentSlabEntries.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x14070C48C (MiLockUnlockSlabContextsForDefrag.c)
 *     MiUpdateSlabContextSlabSize @ 0x14070C774 (MiUpdateSlabContextSlabSize.c)
 *     MiDeletePartitionSlabState @ 0x140881F64 (MiDeletePartitionSlabState.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 *     MmUpdateSlabRangeType @ 0x140D04B0C (MmUpdateSlabRangeType.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiEnumerateSlabAllocatorsEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // r15d
  unsigned __int64 v8; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp

  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  if ( a5 != 9 )
    v6 = a5;
  if ( a4 == -1 )
  {
    v8 = v5 + 56320LL * (unsigned __int16)KeNumberNodes;
  }
  else
  {
    v5 += 56320LL * a4;
    v8 = v5 + 56320;
  }
LABEL_5:
  if ( v5 >= v8 )
    return 0LL;
  v10 = 2088LL;
  v11 = v5 + 232LL * v6 + 14752;
  if ( a5 != 9 )
    v10 = 232LL;
  v12 = v11 + v10;
  while ( 1 )
  {
    if ( v11 >= v12 )
    {
      v5 += 56320LL;
      goto LABEL_5;
    }
    if ( (unsigned int)guard_dispatch_icall_no_overrides(a1, v11) )
      return 1LL;
    v11 += 232LL;
  }
}
