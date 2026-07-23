/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x1404C54C4
 * Callers:
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiFileOnlyPfnMarkedBad @ 0x1406FE828 (MiFileOnlyPfnMarkedBad.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPersistVa @ 0x1406FF85C (MiPersistVa.c)
 */

void __fastcall MiPurgeFileOnlyPfn(ULONG_PTR a1, char a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 SubsectionFromPte; // rsi
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 *v9; // rcx

  if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 && *(int *)(a1 + 32) >= 0 && byte_140E2D899 == *(int *)(a1 + 32) < 0 )
  {
    v4 = (__int64)((unsigned __int128)((__int64)(a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v5 = MiMapPageInHyperSpaceWorker((v4 >> 63) + v4, 0LL, 0x80000000);
    MiPersistVa(v5);
    MiUnmapPageInHyperSpaceWorker(v5, 0x11u, 0x80000000);
  }
  SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(a1 + 16));
  v8 = *(_QWORD *)SubsectionFromPte;
  if ( (a2 & 4) == 0 )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
  {
    v9 = *(__int64 **)(v8 + 80);
  }
  else
  {
    *(_DWORD *)(SubsectionFromPte + 32) |= 0x40000u;
    v9 = *(__int64 **)(SubsectionFromPte + 24);
  }
  while ( v9 )
  {
    if ( (v9[1] & 0x3C0) != 0 && *((_DWORD *)v9 + 3) != 2 )
      *((_DWORD *)v9 + 3) = 2;
    v9 = (__int64 *)*v9;
  }
  if ( (a2 & 4) == 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
  if ( (a2 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x20000;
    MiRestoreTransitionPte(a1, 0, v7);
  }
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (a2 & 2) == 0 )
    MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x220000000000LL) / 48);
}
