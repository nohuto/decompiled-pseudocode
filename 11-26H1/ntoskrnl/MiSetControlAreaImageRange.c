/*
 * XREFs of MiSetControlAreaImageRange @ 0x1404BD76C
 * Callers:
 *     MiSelectImageBase @ 0x1409CACA8 (MiSelectImageBase.c)
 *     MiBuildImageControlArea @ 0x140A551FC (MiBuildImageControlArea.c)
 *     MiFreeRelocations @ 0x140AAA400 (MiFreeRelocations.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiSetControlAreaImageRange(__int64 a1, __int64 a2, int a3)
{
  volatile LONG *v3; // rbx
  KIRQL v7; // al
  bool v8; // zf
  int v9; // edx

  v3 = (volatile LONG *)(a1 + 72);
  if ( a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD *)a2 == -1LL;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)a2;
  v9 = *(_DWORD *)(a1 + 92);
  if ( !v8 )
    v9 ^= (unsigned __int16)(*(_WORD *)(a2 + 8) ^ v9);
  *(_DWORD *)(a1 + 92) = v9;
  if ( !a3 )
  {
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v7);
  }
}
