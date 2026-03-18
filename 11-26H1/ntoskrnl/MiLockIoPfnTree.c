/*
 * XREFs of MiLockIoPfnTree @ 0x1406F4668
 * Callers:
 *     MiReferenceIoPages @ 0x1402EFF98 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x1403132CC (MiDereferenceIoPages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031391C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiLookupIoPageNode @ 0x140367E4C (MiLookupIoPageNode.c)
 *     MiMarkHugeRangeTransition @ 0x14048E9EC (MiMarkHugeRangeTransition.c)
 *     MiCreateIoPfnNode @ 0x140511B00 (MiCreateIoPfnNode.c)
 *     MiCreateIoPageExclusion @ 0x1406F39A8 (MiCreateIoPageExclusion.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F3AF0 (MiDeleteStaleCacheMaps.c)
 *     MiFreezeIoPfnNode @ 0x1406F40F0 (MiFreezeIoPfnNode.c)
 *     MiIsProbeActive @ 0x1406F4538 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x1406F4764 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x1406F4C48 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiRemoveIoPageExclusion @ 0x1406F4DF4 (MiRemoveIoPageExclusion.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
    v5 = qword_140E2D6B8;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(qword_140E2D6B8 + 376) + 640LL));
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
