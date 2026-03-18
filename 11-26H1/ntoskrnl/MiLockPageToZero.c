/*
 * XREFs of MiLockPageToZero @ 0x14051EF34
 * Callers:
 *     MiBackgroundZeroPage @ 0x14045D3B4 (MiBackgroundZeroPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiLockHugePfnAtDpc @ 0x140358C94 (MiLockHugePfnAtDpc.c)
 *     MiColdPageSizeSupported @ 0x1404919C0 (MiColdPageSizeSupported.c)
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
  char v10; // r8
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  __int64 v15; // rax
  KIRQL v16; // dl
  volatile LONG *v17; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(v2 + 24);
  if ( (v4 & 8) == 0 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = (v4 >> 12) & 0x3FFFFFFFFFLL;
  if ( v5 && *(_BYTE *)(v5 + 68) )
  {
    v7 = 0;
    v8 = *(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8 * ((v4 >> 12) & 0x3FFFFF);
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
    && (v10 & 3) == 0 )
  {
    *(_BYTE *)(a1 + 3) = 1;
  }
  if ( v5 )
    *(_BYTE *)(a1 + 1) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 14136));
  if ( v7 )
  {
    v11 = MiSafeLockPage(v6, a2);
    v12 = *(_QWORD *)(v2 + 24);
    v13 = v11;
    *(_BYTE *)a1 = v11;
    if ( (v12 & 1) != 0 )
    {
      if ( v11 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v11 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
          __writecr8(v13);
        }
      }
      if ( !v5 )
        return 0LL;
      goto LABEL_28;
    }
    v15 = *(_QWORD *)(v2 + 24);
  }
  else
  {
    MiLockHugePfnAtDpc(v8);
    v15 = *(_QWORD *)(v2 + 24);
    if ( (v15 & 1) != 0 )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2EB88.SystemCallNumber
                                  + 4
                                  * ((((v8 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((v8 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3)));
LABEL_28:
      v16 = *(_BYTE *)(a1 + 1);
      v17 = (volatile LONG *)(v9 + 14136);
      if ( v16 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v17);
      else
        ExReleaseSpinLockExclusive(v17, v16);
      return 0LL;
    }
  }
  *(_QWORD *)(v2 + 24) = v15 | 0x20;
  return 1LL;
}
