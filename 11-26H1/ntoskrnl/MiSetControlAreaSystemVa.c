/*
 * XREFs of MiSetControlAreaSystemVa @ 0x140506420
 * Callers:
 *     MiSelectImageBase @ 0x1409CACA8 (MiSelectImageBase.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiSetControlAreaSystemVa(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  KIRQL v5; // al
  unsigned int v6; // r8d

  v2 = (volatile LONG *)(a1 + 72);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 56) |= 0x8000u;
  v6 = *(_DWORD *)(a1 + 92) | 0x10000;
  if ( a2 != 1 )
    v6 = *(_DWORD *)(a1 + 92) & 0xFFFEFFFF;
  *(_DWORD *)(a1 + 92) = v6;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v5);
}
