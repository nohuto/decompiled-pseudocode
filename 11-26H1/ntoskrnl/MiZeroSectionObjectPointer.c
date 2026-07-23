/*
 * XREFs of MiZeroSectionObjectPointer @ 0x1404D45AC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiZeroSectionObjectPointer(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rbx
  KIRQL v5; // al
  __int64 v6; // r14
  KIRQL v7; // bp
  volatile LONG *v8; // rcx

  v4 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  if ( (a3 & 0x1000000) == 0 )
    v4 = *(_QWORD **)(a1 + 40);
  KeAbPostRelease((unsigned __int64)v4);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v6 = *(_QWORD *)(a2 + 80);
  v7 = v5;
  *(_QWORD *)(a2 + 80) = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2C940);
  *v4 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  v8 = (volatile LONG *)(a2 + 72);
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  else
    ExReleaseSpinLockExclusive(v8, v7);
  return v6;
}
