/*
 * XREFs of MiEnumerateSlabAllocatorsEx @ 0x1404A0C04
 * Callers:
 *     MiLogPeriodicTelemetry @ 0x1402A8770 (MiLogPeriodicTelemetry.c)
 *     MiDemoteSlabEntriesDpc @ 0x1402BDB50 (MiDemoteSlabEntriesDpc.c)
 *     MiDefragmentAllSlabAllocators @ 0x1404A0AE8 (MiDefragmentAllSlabAllocators.c)
 *     MiDeletePendingSlabIdentities @ 0x1404A0CF8 (MiDeletePendingSlabIdentities.c)
 *     MiLockMemoryLists @ 0x140703960 (MiLockMemoryLists.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140705CE0 (MiChangeSlabIdentitiesDpc.c)
 *     MiDefragmentSlabWorker @ 0x1407063E4 (MiDefragmentSlabWorker.c)
 *     MiDetermineDefragmentSlabIdentity @ 0x140706A00 (MiDetermineDefragmentSlabIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x140706AC4 (MiEstablishDefragSlabEntries.c)
 *     MiFindDefragmentSlabEntries @ 0x140706E34 (MiFindDefragmentSlabEntries.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x1407077BC (MiLockUnlockSlabContextsForDefrag.c)
 *     MiUpdateSlabContextSlabSize @ 0x140707AA4 (MiUpdateSlabContextSlabSize.c)
 *     MiDeletePartitionSlabState @ 0x14087BB64 (MiDeletePartitionSlabState.c)
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 *     MmUpdateSlabRangeType @ 0x140CFE76C (MmUpdateSlabRangeType.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
