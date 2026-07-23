/*
 * XREFs of MiUnlockIoPfnTree @ 0x1406F9AFC
 * Callers:
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031594C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiLookupIoPageNode @ 0x140369BEC (MiLookupIoPageNode.c)
 *     MiMarkHugeRangeTransition @ 0x14048852C (MiMarkHugeRangeTransition.c)
 *     MiCreateIoPfnNode @ 0x14050B570 (MiCreateIoPfnNode.c)
 *     MiCreateIoPageExclusion @ 0x1406F8618 (MiCreateIoPageExclusion.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F8760 (MiDeleteStaleCacheMaps.c)
 *     MiIsProbeActive @ 0x1406F91A4 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x1406F93D0 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x1406F98B8 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiRemoveIoPageExclusion @ 0x1406F9A64 (MiRemoveIoPageExclusion.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiUnlockIoPfnTree(KIRQL a1, char a2)
{
  volatile LONG *v4; // rcx
  __int64 v5; // rbp
  unsigned int v6; // ebx
  volatile LONG *v7; // rcx

  if ( (a2 & 1) != 0 )
  {
    v4 = (volatile LONG *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL);
    if ( (a2 & 4) != 0 || a1 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v4);
    else
      ExReleaseSpinLockShared(v4, a1);
  }
  else
  {
    v5 = qword_140E2D838;
    v6 = 0;
    if ( KeNumberNodes != 1 )
    {
      do
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v5 + 376) + 640LL));
        v5 += 384LL;
        ++v6;
      }
      while ( v6 < (unsigned int)(unsigned __int16)KeNumberNodes - 1 );
    }
    v7 = (volatile LONG *)(*(_QWORD *)(v5 + 376) + 640LL);
    if ( (a2 & 4) != 0 || a1 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    else
      ExReleaseSpinLockExclusive(v7, a1);
  }
}
