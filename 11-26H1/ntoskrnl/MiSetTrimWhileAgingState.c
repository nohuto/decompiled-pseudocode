/*
 * XREFs of MiSetTrimWhileAgingState @ 0x1405110FC
 * Callers:
 *     MiInitializeWorkingSetManagerParameters @ 0x1406FC6DC (MiInitializeWorkingSetManagerParameters.c)
 *     MmSetAgingOptions @ 0x1406FCB28 (MmSetAgingOptions.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiSetTrimWhileAgingState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  volatile LONG *v6; // r14
  KIRQL v7; // al

  v2 = 0LL;
  v5 = 0LL;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 1:
      v2 = -1LL;
      goto LABEL_9;
    case 2:
      v2 = 51200LL;
      goto LABEL_9;
    case 3:
      v2 = 12800LL;
LABEL_9:
      v5 = 204800LL;
      break;
    case 4:
      v5 = 384000LL;
      break;
  }
  v6 = (volatile LONG *)(a1 + 272);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
  *(_QWORD *)(a1 + 18632) = v5;
  *(_QWORD *)(a1 + 18624) = v2;
  *(_DWORD *)(a1 + 21248) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 18512) = *(_BYTE *)(a2 + 12);
  *(_BYTE *)(a1 + 18513) = *(_BYTE *)(a2 + 13);
  if ( v7 != 17 )
    ExReleaseSpinLockExclusive(v6, v7);
}
