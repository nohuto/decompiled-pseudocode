/*
 * XREFs of MiMakeUnusedSegmentDeleteOnClose @ 0x1406E7694
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x1406F0580 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14030BD54 (MiUnlinkUnusedControlArea.c)
 *     MiRemoveListSentinel @ 0x14030C498 (MiRemoveListSentinel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertListSentinel @ 0x14044D320 (MiInsertListSentinel.c)
 *     MiInsertUnusedSegment @ 0x1404807E0 (MiInsertUnusedSegment.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiMakeUnusedSegmentDeleteOnClose(__int64 a1)
{
  unsigned __int64 *v1; // r13
  unsigned __int64 **v3; // rbx
  volatile LONG *v4; // rdi
  KIRQL v5; // al
  unsigned __int64 *v6; // rcx
  KIRQL v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 inserted; // rsi
  volatile LONG *v11; // rcx
  _QWORD v12[6]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (unsigned __int64 *)(a1 + 2352);
  memset(v12, 0, sizeof(v12));
  v3 = (unsigned __int64 **)(a1 + 2464);
  v4 = (volatile LONG *)(a1 + 2112);
  do
  {
    v5 = ExAcquireSpinLockExclusive(v4);
    v6 = *v3;
    v7 = v5;
    if ( *v3 != (unsigned __int64 *)v3 )
    {
      do
      {
        v8 = *v6;
        v9 = (__int64)(v6 - 1);
        if ( (*(v6 - 1) & 0x8000000000000000uLL) != 0LL
          && (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v9 + 72)) )
        {
          MiInsertListSentinel(v1, v12, v8);
          MiUnlinkUnusedControlArea(v9);
          ExReleaseSpinLockExclusiveFromDpcLevel(v4);
          *(_DWORD *)(v9 + 56) |= 0x40000u;
          inserted = MiInsertUnusedSegment(v9);
          v11 = (volatile LONG *)(v9 + 72);
          if ( v7 == 17 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v11);
          else
            ExReleaseSpinLockExclusive(v11, v7);
          if ( inserted )
            MiReturnCrossPartitionSectionCharges(a1, 1, inserted);
          ExAcquireSpinLockExclusive(v4);
          v8 = MiRemoveListSentinel(v1, v12);
        }
        v6 = (unsigned __int64 *)v8;
      }
      while ( (unsigned __int64 **)v8 != v3 );
    }
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockExclusive(v4, v7);
  }
  while ( *v3 != (unsigned __int64 *)v3 );
}
