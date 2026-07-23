/*
 * XREFs of MiMergeCalibrationResults @ 0x14071578C
 * Callers:
 *     MiZeroPageCalibrate @ 0x140715C7C (MiZeroPageCalibrate.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsCalibrationWorthwhile @ 0x1404C4720 (MiIsCalibrationWorthwhile.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiMergeCalibrationResults(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // ebx
  volatile LONG *v7; // rsi
  KIRQL v12; // r14
  void *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // xmm1_8
  __int64 v16; // rdi
  _QWORD *v17; // r8
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rax

  v6 = *(_DWORD *)a4;
  v7 = (volatile LONG *)(a2 + 64);
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 64));
  if ( a6 || (unsigned int)MiIsCalibrationWorthwhile(a3, v6, *(_DWORD *)(*(_QWORD *)(*a1 + 136LL) + 56LL), 1) )
  {
    v13 = *(void **)(a3 + 48);
    v14 = a3 + 16;
    *(_OWORD *)a3 = *(_OWORD *)a4;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 48);
    v16 = 2LL;
    *(_QWORD *)(a3 + 48) = v15;
    v17 = (_QWORD *)(a2 + 576 + (*(_DWORD *)*a1 != 0 ? 8 : 0));
    do
    {
      v18 = *(_QWORD *)(a3 + 48);
      v19 = *(unsigned int *)(v14 + 20);
      if ( v18 )
        v20 = a1[37] / *(_QWORD *)(16LL * (unsigned int)(v19 - 1) + v18 + 8);
      else
        v20 = 0x200000uLL / MiUnmeasuredTimeToZeroOneLargePage[a5];
      *(_QWORD *)v14 = v20;
      if ( *v17 < (unsigned __int64)(v19 * v20) )
        *v17 = v19 * v20;
      v17 += 2;
      v14 += 8LL;
      --v16;
    }
    while ( v16 );
  }
  else
  {
    v13 = *(void **)(a4 + 48);
  }
  if ( v12 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  else
    ExReleaseSpinLockExclusive(v7, v12);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
}
