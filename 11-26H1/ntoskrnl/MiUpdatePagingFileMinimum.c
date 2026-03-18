/*
 * XREFs of MiUpdatePagingFileMinimum @ 0x1406F9078
 * Callers:
 *     MiExtendPagingFiles @ 0x140B2F8D4 (MiExtendPagingFiles.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiUpdatePagingFileMinimum(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  KIRQL v5; // al

  v2 = (volatile LONG *)(a1 + 200);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  *(_DWORD *)(a1 + 8) += a2;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v5);
}
