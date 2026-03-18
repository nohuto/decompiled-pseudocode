/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x1404C7ED4
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407F836C (PspEstablishJobHierarchy.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x140B097A0 (PspSetJobIoAttributionProcessCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x14021D5D4 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall IoSetDiskIoAttributionOnProcess(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rsi

  if ( *(_QWORD *)(a2 + 1752) != a1 )
  {
    if ( a1 && _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32)) <= 1 )
      __fastfail(0xEu);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&IopSessionNotificationLock.TrapFrame + 1);
    v5 = *(_QWORD *)(a2 + 1752);
    *(_QWORD *)(a2 + 1752) = a1;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&IopSessionNotificationLock.TrapFrame + 1, v4);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
  }
}
