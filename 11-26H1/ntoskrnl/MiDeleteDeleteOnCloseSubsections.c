/*
 * XREFs of MiDeleteDeleteOnCloseSubsections @ 0x1406EC1A0
 * Callers:
 *     MiProcessDeleteOnClose @ 0x1406EC5B0 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedSubsection @ 0x1402EE29C (MiUnlinkUnusedSubsection.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertListSentinel @ 0x140445440 (MiInsertListSentinel.c)
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 */

void __fastcall MiDeleteDeleteOnCloseSubsections(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // r13
  unsigned __int64 **v4; // r14
  volatile LONG *v5; // rsi
  KIRQL v6; // bl
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 *v9; // r15
  __int64 v10; // r12
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx

  v3 = (unsigned __int64 *)(a1 + 2352);
  v4 = (unsigned __int64 **)(a1 + 2496);
  v5 = (volatile LONG *)(a1 + 2112);
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(v5);
    v7 = *v4;
    if ( *v4 != (unsigned __int64 *)v4 )
    {
      do
      {
        v8 = *v7;
        v9 = v7 - 11;
        v10 = *(v7 - 11);
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v10 + 72)) )
        {
          MiUnlinkUnusedSubsection(v9);
          v11 = *v9;
          v9[10] = 1LL;
          *((_DWORD *)v9 + 8) &= ~1u;
          ++*(_DWORD *)(v11 + 76);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
          v12 = 88LL * *(unsigned int *)(a2 + 1504);
          *(_QWORD *)(v12 + a2 + 96) = v9;
          *(_DWORD *)(v12 + a2 + 104) = 1;
          *(_BYTE *)(v12 + a2 + 108) = 0;
          MiInsertListSentinel(v3, (_QWORD *)(v12 + a2 + 112), v8);
          if ( ++*(_DWORD *)(a2 + 1504) == 16 )
LABEL_7:
            v8 = MiDeleteCachedSubsections(a2, v6);
        }
        else if ( *(_DWORD *)(a2 + 1504) )
        {
          goto LABEL_7;
        }
        v7 = (unsigned __int64 *)v8;
      }
      while ( (unsigned __int64 **)v8 != v4 );
    }
    if ( *(_DWORD *)(a2 + 1504) )
      MiDeleteCachedSubsections(a2, v6);
    if ( *v4 == (unsigned __int64 *)v4 )
      break;
    if ( v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockExclusive(v5, v6);
  }
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v6);
}
