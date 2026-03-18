/*
 * XREFs of MiWriteControlAreaFlags2 @ 0x1404B65F0
 * Callers:
 *     MiImageUnused @ 0x1404BE770 (MiImageUnused.c)
 *     MiStrongCodeImage @ 0x14050554C (MiStrongCodeImage.c)
 *     MiAllocateAweInfo @ 0x140877584 (MiAllocateAweInfo.c)
 *     MiCreatePagingFileFinish @ 0x1409B7E0C (MiCreatePagingFileFinish.c)
 *     MiSelectImageBase @ 0x1409CACA8 (MiSelectImageBase.c)
 *     MiValidateImageHeader @ 0x1409CBC24 (MiValidateImageHeader.c)
 *     MiMarkImageActive @ 0x140AFF5C4 (MiMarkImageActive.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiWriteControlAreaFlags2(__int64 a1, int a2, int a3, int a4)
{
  volatile LONG *v4; // rsi
  KIRQL v9; // al

  v4 = (volatile LONG *)(a1 + 72);
  if ( a4 )
    v9 = 17;
  else
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 92) = a2 | *(_DWORD *)(a1 + 92) & ~a3;
  if ( !a4 )
  {
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockExclusive(v4, v9);
  }
}
