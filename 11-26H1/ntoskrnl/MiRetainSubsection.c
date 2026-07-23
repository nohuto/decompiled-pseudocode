/*
 * XREFs of MiRetainSubsection @ 0x140704598
 * Callers:
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiFaultRedirectToProto @ 0x14050B390 (MiFaultRedirectToProto.c)
 *     MiResetVirtualMemory @ 0x140AAF5F0 (MiResetVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1402EDF10 (MiIncrementSubsectionViewCount.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiRetainSubsection(__int64 *BugCheckParameter2, char a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  unsigned __int8 CurrentIrql; // di
  volatile LONG *v7; // rcx

  v2 = *BugCheckParameter2;
  v3 = 0;
  if ( (a2 & 1) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  if ( (a2 & 2) == 0 || *(_QWORD *)(v2 + 40) != 1LL )
  {
    ++*(_QWORD *)(v2 + 40);
    if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 && *(_QWORD *)(v2 + 64) && (*(_DWORD *)(v2 + 56) & 0x400) == 0 )
      MiIncrementSubsectionViewCount(BugCheckParameter2, 2);
    v3 = 1;
  }
  v7 = (volatile LONG *)(v2 + 72);
  if ( CurrentIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  else
    ExReleaseSpinLockExclusive(v7, CurrentIrql);
  return v3;
}
