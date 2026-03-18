/*
 * XREFs of ExInterlockedExtendZone @ 0x1406CFD40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExExtendZone @ 0x1406CFC50 (ExExtendZone.c)
 */

NTSTATUS __stdcall ExInterlockedExtendZone(PZONE_HEADER Zone, PVOID Segment, ULONG SegmentSize, PKSPIN_LOCK Lock)
{
  KIRQL v8; // di
  NTSTATUS v9; // ebx

  v8 = KeAcquireSpinLockRaiseToDpc(Lock);
  v9 = ExExtendZone(Zone, Segment, SegmentSize);
  KeReleaseSpinLock(Lock, v8);
  return v9;
}
