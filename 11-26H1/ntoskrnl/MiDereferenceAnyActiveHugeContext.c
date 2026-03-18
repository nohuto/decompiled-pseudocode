/*
 * XREFs of MiDereferenceAnyActiveHugeContext @ 0x1404A1094
 * Callers:
 *     MiZeroThreadStopZeroing @ 0x1404F5FB8 (MiZeroThreadStopZeroing.c)
 *     MiDeleteZeroThreadContext @ 0x140530728 (MiDeleteZeroThreadContext.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceHugeContext @ 0x1404F6860 (MiDereferenceHugeContext.c)
 */

void __fastcall MiDereferenceAnyActiveHugeContext(__int64 a1)
{
  __int64 v2; // rcx
  volatile LONG *v3; // rbx
  KIRQL v4; // si

  v2 = *(_QWORD *)(a1 + 328);
  if ( v2 )
  {
    v3 = (volatile LONG *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 136LL) + 48LL) + 16LL)
                         + 56320LL * *(unsigned int *)(v2 + 312)
                         + 14136);
    v4 = ExAcquireSpinLockExclusive(v3);
    MiDereferenceHugeContext(a1);
    if ( v4 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v4);
  }
}
