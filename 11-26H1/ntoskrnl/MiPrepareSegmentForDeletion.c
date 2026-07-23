/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x140480F20
 * Callers:
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1402EDD50 (MiRemoveUnusedSegment.c)
 *     MiIncrementSubsectionViewCount @ 0x1402EDF10 (MiIncrementSubsectionViewCount.c)
 *     MiDrainControlAreaWrites @ 0x140486A68 (MiDrainControlAreaWrites.c)
 */

__int64 *__fastcall MiPrepareSegmentForDeletion(__int64 a1)
{
  __int64 *v1; // rdi
  char v2; // al
  volatile LONG *v3; // rbp
  volatile LONG *v5; // rcx
  __int64 v6; // rdx
  KIRQL v7; // r14
  __int64 **v8; // rbx
  __int64 *v9; // rsi
  __int64 *v10; // rcx
  __int64 *v11; // rdx

  v1 = (__int64 *)(a1 + 128);
  v2 = *(_DWORD *)(a1 + 56) & 0xA0;
  v3 = (volatile LONG *)(a1 + 72);
  v5 = (volatile LONG *)(a1 + 72);
  if ( v2 != (char)0x80 )
    v1 = 0LL;
  LOBYTE(v6) = ExAcquireSpinLockExclusive(v5);
  v7 = v6;
  MiDrainControlAreaWrites(a1, v6);
  MiRemoveUnusedSegment(a1);
  v8 = (__int64 **)(a1 + 80);
  v9 = 0LL;
  v10 = *v8;
  if ( *v8 )
  {
    do
    {
      v11 = (__int64 *)*v10;
      if ( (v10[1] & 1) != 0 )
      {
        *v10 = (__int64)v9;
        v9 = v10;
        *v8 = v11;
      }
      else
      {
        v8 = (__int64 **)v10;
      }
      v10 = v11;
    }
    while ( v11 );
  }
  while ( v1 )
  {
    MiIncrementSubsectionViewCount(v1, 0);
    v1 = (__int64 *)v1[2];
  }
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, v7);
  return v9;
}
