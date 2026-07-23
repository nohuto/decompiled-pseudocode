/*
 * XREFs of MiLockIoPfnTree @ 0x1406F92D4
 * Callers:
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031594C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiLookupIoPageNode @ 0x140369BEC (MiLookupIoPageNode.c)
 *     MiMarkHugeRangeTransition @ 0x14048852C (MiMarkHugeRangeTransition.c)
 *     MiCreateIoPfnNode @ 0x14050B570 (MiCreateIoPfnNode.c)
 *     MiCreateIoPageExclusion @ 0x1406F8618 (MiCreateIoPageExclusion.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F8760 (MiDeleteStaleCacheMaps.c)
 *     MiFreezeIoPfnNode @ 0x1406F8D5C (MiFreezeIoPfnNode.c)
 *     MiIsProbeActive @ 0x1406F91A4 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x1406F93D0 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x1406F98B8 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiRemoveIoPageExclusion @ 0x1406F9A64 (MiRemoveIoPageExclusion.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiLockIoPfnTree(char a1)
{
  char v2; // di
  unsigned __int8 CurrentIrql; // bl
  char v4; // al
  __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // r14

  if ( (a1 & 4) != 0 )
  {
    v2 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    v4 = CurrentIrql;
    if ( CurrentIrql == 2 )
      v4 = 17;
    v2 = v4;
  }
  if ( (a1 & 1) != 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL));
  }
  else
  {
    v5 = qword_140E2D838;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(qword_140E2D838 + 376) + 640LL));
    v6 = 1;
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      v7 = v5 + 760;
      do
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v7 + 640LL));
        v7 += 384LL;
        ++v6;
      }
      while ( v6 < (unsigned __int16)KeNumberNodes );
    }
  }
  return v2;
}
