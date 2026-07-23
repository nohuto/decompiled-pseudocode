/*
 * XREFs of PspJobIoRateQueryHistory @ 0x140488A14
 * Callers:
 *     PspQueryRateControlHistory @ 0x140A856AC (PspQueryRateControlHistory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall PspJobIoRateQueryHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  volatile LONG *v10; // rdi
  KIRQL v11; // al
  int v12; // ecx
  unsigned __int64 v13; // rsi
  int v14; // edx
  int v15; // eax
  unsigned int v16; // ebx

  if ( !*(_QWORD *)(a1 + 1672) )
  {
    v8 = a1 + 1696;
    v9 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    {
      if ( !v9 )
        return (unsigned int)-1073741275;
      v9 ^= v8;
    }
    if ( v9 )
      goto LABEL_4;
    return (unsigned int)-1073741275;
  }
LABEL_4:
  v10 = (volatile LONG *)(a1 + 1688);
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688));
  v12 = *(_DWORD *)(a1 + 1728);
  v13 = v11;
  if ( v12 )
  {
    v14 = *(_DWORD *)(a1 + 1720);
    *a2 = *(_QWORD *)(a1 + 1712);
    v15 = v14 - *(_DWORD *)(a1 + 1724);
    *(_DWORD *)(a1 + 1724) = v14;
    v16 = 0;
    *a4 = v15;
    *a3 = v12;
  }
  else
  {
    v16 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  __writecr8(v13);
  return v16;
}
