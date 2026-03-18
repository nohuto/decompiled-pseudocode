/*
 * XREFs of MiCheckAndUpdatePagingFileMinimum @ 0x1406F8C58
 * Callers:
 *     MiUpdateExistingPageFile @ 0x14086C380 (MiUpdateExistingPageFile.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

_BOOL8 __fastcall MiCheckAndUpdatePagingFileMinimum(unsigned int *a1, unsigned int a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // al
  unsigned int v6; // ecx
  BOOL v7; // ebx

  v2 = (volatile LONG *)(a1 + 50);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 50);
  v6 = *a1;
  if ( a2 <= *a1 )
    a1[2] = a2;
  v7 = a2 <= v6;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v5);
  return v7;
}
