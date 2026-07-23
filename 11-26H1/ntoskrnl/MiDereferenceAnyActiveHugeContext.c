/*
 * XREFs of MiDereferenceAnyActiveHugeContext @ 0x14049ABC4
 * Callers:
 *     MiZeroThreadStopZeroing @ 0x1404EF578 (MiZeroThreadStopZeroing.c)
 *     MiDeleteZeroThreadContext @ 0x140532C28 (MiDeleteZeroThreadContext.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
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
