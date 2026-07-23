/*
 * XREFs of MiLockPageToZero @ 0x1405215D8
 * Callers:
 *     MiBackgroundZeroPage @ 0x140456DB4 (MiBackgroundZeroPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiColdPageSizeSupported @ 0x14048B510 (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiLockPageToZero(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // r8
  __int64 v5; // r12
  ULONG_PTR v6; // r15
  char v7; // bp
  __int64 v8; // rdi
  __int64 v9; // r13
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  __int64 v14; // rax
  KIRQL v15; // dl
  volatile LONG *v16; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(v2 + 24);
  if ( (v4 & 8) == 0 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = (v4 >> 12) & 0x3FFFFFFFFFLL;
  if ( v5 && *(_BYTE *)(v5 + 68) )
  {
    v7 = 0;
    v8 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * ((v4 >> 12) & 0x3FFFFF);
  }
  else
  {
    v7 = 1;
    v8 = 48 * v6 - 0x220000000000LL;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 56320LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL)
    && MiColdPageSizeSupported(
         *(_DWORD *)(a1 + 4),
         *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 56320LL * *(unsigned int *)(a1 + 8))
    && !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 195LL)
    && !*(_BYTE *)(v2 + 68)
    && (v4 & 3) == 0 )
  {
    *(_BYTE *)(a1 + 3) = 1;
  }
  if ( v5 )
    *(_BYTE *)(a1 + 1) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 14136));
  if ( v7 )
  {
    v10 = MiSafeLockPage(v6, a2, v4);
    v11 = *(_QWORD *)(v2 + 24);
    v12 = v10;
    *(_BYTE *)a1 = v10;
    if ( (v11 & 1) != 0 )
    {
      if ( v10 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v10 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
          __writecr8(v12);
        }
      }
      if ( !v5 )
        return 0LL;
      goto LABEL_28;
    }
    v14 = *(_QWORD *)(v2 + 24);
  }
  else
  {
    MiLockHugePfnAtDpc(v8);
    v14 = *(_QWORD *)(v2 + 24);
    if ( (v14 & 1) != 0 )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * ((((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
LABEL_28:
      v15 = *(_BYTE *)(a1 + 1);
      v16 = (volatile LONG *)(v9 + 14136);
      if ( v15 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
      else
        ExReleaseSpinLockExclusive(v16, v15);
      return 0LL;
    }
  }
  *(_QWORD *)(v2 + 24) = v14 | 0x20;
  return 1LL;
}
