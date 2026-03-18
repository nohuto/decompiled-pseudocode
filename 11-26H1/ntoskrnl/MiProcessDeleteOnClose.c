/*
 * XREFs of MiProcessDeleteOnClose @ 0x1406E7900
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1404A3320 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14030BD54 (MiUnlinkUnusedControlArea.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertListSentinel @ 0x14044D320 (MiInsertListSentinel.c)
 *     MiMarkControlAreaDeleted @ 0x14048CEE8 (MiMarkControlAreaDeleted.c)
 *     MiDeleteCachedSubsections @ 0x1404A6F5C (MiDeleteCachedSubsections.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x1406E74F0 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiMoveUnusedSubsectionsToDeleteOnClose @ 0x1406E77D8 (MiMoveUnusedSubsectionsToDeleteOnClose.c)
 */

void __fastcall MiProcessDeleteOnClose(__int64 a1, __int64 a2)
{
  unsigned __int64 **v3; // r15
  volatile LONG *v5; // r13
  KIRQL v6; // al
  unsigned __int64 *v7; // rdi
  int v8; // r14d
  KIRQL v9; // bp
  unsigned __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx

  v3 = (unsigned __int64 **)(a1 + 2480);
  MiDeleteDeleteOnCloseSubsections(a1, a2);
  v5 = (volatile LONG *)(a1 + 2112);
  while ( 2 )
  {
    v6 = ExAcquireSpinLockExclusive(v5);
    v7 = *v3;
    v8 = 0;
    v9 = v6;
    if ( *v3 == (unsigned __int64 *)v3 )
      goto LABEL_14;
    do
    {
      v10 = *v7;
      v11 = (__int64)(v7 - 1);
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v11 + 72)) )
        goto LABEL_12;
      if ( (*(_DWORD *)(v11 + 56) & 0x20) == 0 && *(_QWORD *)(v11 + 32) )
      {
        if ( (unsigned int)MiMoveUnusedSubsectionsToDeleteOnClose(a1, v11) )
          v8 = 1;
LABEL_8:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
        goto LABEL_12;
      }
      if ( *(_DWORD *)(v11 + 76) )
        goto LABEL_8;
      MiUnlinkUnusedControlArea(v11);
      LOBYTE(v12) = v9;
      MiMarkControlAreaDeleted(v11, v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
      v13 = 88LL * *(unsigned int *)(a2 + 1504);
      *(_QWORD *)(v13 + a2 + 96) = v11;
      *(_DWORD *)(v13 + a2 + 104) = 1;
      *(_BYTE *)(v13 + a2 + 108) = 1;
      MiInsertListSentinel((unsigned __int64 *)(a1 + 2352), (_QWORD *)(v13 + a2 + 112), v10);
      if ( ++*(_DWORD *)(a2 + 1504) == 16 )
        v10 = MiDeleteCachedSubsections(a2, v9);
LABEL_12:
      v7 = (unsigned __int64 *)v10;
    }
    while ( v10 != a1 + 2480 );
    v5 = (volatile LONG *)(a1 + 2112);
    v3 = (unsigned __int64 **)(a1 + 2480);
LABEL_14:
    if ( *(_DWORD *)(a2 + 1504) )
      MiDeleteCachedSubsections(a2, v9);
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockExclusive(v5, v9);
    if ( v8 )
    {
      MiDeleteDeleteOnCloseSubsections(a1, a2);
      continue;
    }
    break;
  }
}
