/*
 * XREFs of MiUnlockIoPfnTree @ 0x1406F4E8C
 * Callers:
 *     MiReferenceIoPages @ 0x1402EFF98 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x1403132CC (MiDereferenceIoPages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031391C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiLookupIoPageNode @ 0x140367E4C (MiLookupIoPageNode.c)
 *     MiMarkHugeRangeTransition @ 0x14048E9EC (MiMarkHugeRangeTransition.c)
 *     MiCreateIoPfnNode @ 0x140511B00 (MiCreateIoPfnNode.c)
 *     MiCreateIoPageExclusion @ 0x1406F39A8 (MiCreateIoPageExclusion.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F3AF0 (MiDeleteStaleCacheMaps.c)
 *     MiIsProbeActive @ 0x1406F4538 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x1406F4764 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x1406F4C48 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiRemoveIoPageExclusion @ 0x1406F4DF4 (MiRemoveIoPageExclusion.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
    v5 = qword_140E2D6B8;
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
