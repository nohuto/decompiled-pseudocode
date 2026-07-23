/*
 * XREFs of MiWriteControlAreaFlags2 @ 0x1404AFA40
 * Callers:
 *     MiImageUnused @ 0x1404B7FC0 (MiImageUnused.c)
 *     MiStrongCodeImage @ 0x140521118 (MiStrongCodeImage.c)
 *     MiAllocateAweInfo @ 0x14087D964 (MiAllocateAweInfo.c)
 *     MiCreatePagingFileFinish @ 0x140988DEC (MiCreatePagingFileFinish.c)
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 *     MiValidateImageHeader @ 0x14099CC04 (MiValidateImageHeader.c)
 *     MiMarkImageActive @ 0x140B01254 (MiMarkImageActive.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
