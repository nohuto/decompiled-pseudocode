/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x1404C1C14
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x140B0B560 (PspSetJobIoAttributionProcessCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall IoSetDiskIoAttributionOnProcess(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rsi

  if ( *(_QWORD *)(a2 + 1752) != a1 )
  {
    if ( a1 && _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32)) <= 1 )
      __fastfail(0xEu);
    v4 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
    v5 = *(_QWORD *)(a2 + 1752);
    *(_QWORD *)(a2 + 1752) = a1;
    ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v4);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
  }
}
