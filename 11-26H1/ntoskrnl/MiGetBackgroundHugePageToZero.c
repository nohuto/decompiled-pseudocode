/*
 * XREFs of MiGetBackgroundHugePageToZero @ 0x1404BBDD8
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14035A1D0 (MiGetUltraHugeAlreadyActive.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetSinglePageToZero @ 0x1403CE6F0 (MiGetSinglePageToZero.c)
 *     MiInitializeNewUltraHugeContext @ 0x1404875D8 (MiInitializeNewUltraHugeContext.c)
 *     MiHugeFreePagesMayExist @ 0x1404A28CC (MiHugeFreePagesMayExist.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404EC414 (MiGetSingleHugeRangeToZero.c)
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall MiGetBackgroundHugePageToZero(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r15
  KIRQL v7; // si
  __int64 PoolMm; // rax
  __int64 v9; // r14
  volatile signed __int32 *v10; // r12
  __int64 SingleHugeRangeToZero; // rdx
  __int64 SinglePageToZero; // rax
  int v13; // r14d
  volatile LONG *v14; // rcx
  volatile LONG *v15; // rcx
  volatile LONG *v16; // rcx
  volatile LONG *v18; // rcx

  v4 = *(unsigned int *)(*(_QWORD *)(a2[10] + 136LL) + 56LL);
  v5 = 56320 * v4;
  do
  {
    a2[4] = 0LL;
    a2[3] = 0LL;
    v6 = v5 + *(_QWORD *)(a1 + 16);
    if ( !a2[41] && !(unsigned int)MiHugeFreePagesMayExist(a1, (__int64)a2) )
      return 0LL;
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 14136));
    if ( MiGetUltraHugeAlreadyActive((__int64)a2) )
    {
      v18 = (volatile LONG *)(v6 + 14136);
      if ( v7 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v18);
      else
        ExReleaseSpinLockExclusive(v18, v7);
      return 1LL;
    }
    PoolMm = ExAllocatePoolMm(64LL, 0x148uLL, 1967679821, (unsigned int)v4 | 0x80000000);
    v9 = PoolMm;
    if ( !PoolMm )
    {
      v16 = (volatile LONG *)(v6 + 14136);
      if ( v7 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
      else
        ExReleaseSpinLockExclusive(v16, v7);
      return 0LL;
    }
    v10 = (volatile signed __int32 *)(PoolMm + 324);
    *(_DWORD *)(PoolMm + 324) = __rdtsc() >> 4;
    SingleHugeRangeToZero = MiGetSingleHugeRangeToZero(v9, v6, v10);
    if ( (SingleHugeRangeToZero & 0x3FFFFF) == 0 )
    {
      SinglePageToZero = MiGetSinglePageToZero(v9, v6, v10, 0);
      if ( !SinglePageToZero )
      {
        v15 = (volatile LONG *)(v6 + 14136);
        if ( v7 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v15);
        else
          ExReleaseSpinLockExclusive(v15, v7);
        ExFreePoolWithTag((PVOID)v9, 0);
        return 0LL;
      }
      SingleHugeRangeToZero = (SinglePageToZero + 0x220000000000LL) / 48;
    }
    *(_QWORD *)(v9 + 168) = SingleHugeRangeToZero;
    *(_DWORD *)(v9 + 312) = v4;
    v13 = MiInitializeNewUltraHugeContext((__int64)a2, v9);
    if ( v13 )
      MiDereferenceHugeContext(a2);
    v14 = (volatile LONG *)(v6 + 14136);
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    else
      ExReleaseSpinLockExclusive(v14, v7);
    v5 = 56320 * v4;
  }
  while ( v13 == 1 );
  return v13 != 2;
}
