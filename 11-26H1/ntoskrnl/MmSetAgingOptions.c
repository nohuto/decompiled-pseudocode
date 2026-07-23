/*
 * XREFs of MmSetAgingOptions @ 0x1406FCB28
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSetTrimWhileAgingState @ 0x1405110FC (MiSetTrimWhileAgingState.c)
 */

__int64 __fastcall MmSetAgingOptions(__int64 *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rbp
  unsigned __int16 v6; // r8
  unsigned int v7; // ecx
  int v8; // esi
  unsigned int v9; // eax
  KIRQL v10; // al
  volatile LONG *v11; // rcx

  v2 = *(_DWORD *)a2;
  v3 = 0;
  if ( !*(_DWORD *)a2 || (v2 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741811;
  v5 = *a1;
  if ( (v2 & 2) == 0 )
    goto LABEL_9;
  if ( *(int *)(a2 + 8) >= 5 || *(_BYTE *)(a2 + 12) > 7u || *(_BYTE *)(a2 + 13) > 7u )
    return (unsigned int)-1073741811;
  MiSetTrimWhileAgingState(*a1, a2);
LABEL_9:
  v6 = 1;
  if ( (*(_DWORD *)a2 & 1) == 0 )
    return v3;
  v7 = *(_DWORD *)(a2 + 4);
  if ( !v7 )
  {
    v8 = 0;
    goto LABEL_18;
  }
  if ( v7 < 0xC )
  {
    LOWORD(v9) = 1000;
  }
  else
  {
    v9 = 0x3E8 / (v7 / 6);
    if ( v9 <= 1 )
      goto LABEL_17;
  }
  v6 = v9;
LABEL_17:
  v8 = v6;
LABEL_18:
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 272));
  *(_DWORD *)(v5 + 18412) = v8;
  v11 = (volatile LONG *)(v5 + 272);
  if ( v10 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  else
    ExReleaseSpinLockExclusive(v11, v10);
  return v3;
}
