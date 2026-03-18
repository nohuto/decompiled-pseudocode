/*
 * XREFs of MiStrongCodeImage @ 0x14050554C
 * Callers:
 *     MiValidateSectionCreate @ 0x1409CB8F4 (MiValidateSectionCreate.c)
 *     MiValidateImageHeader @ 0x1409CBC24 (MiValidateImageHeader.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWriteControlAreaFlags2 @ 0x1404B65F0 (MiWriteControlAreaFlags2.c)
 */

void __fastcall MiStrongCodeImage(__int64 a1, unsigned int a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // si

  v2 = (volatile LONG *)(a1 + 72);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( ((*(_DWORD *)(a1 + 92) >> 18) & 3u) < a2 )
    MiWriteControlAreaFlags2(a1, (a2 & 3) << 18, (a2 & 3) << 18, 1);
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v5);
}
