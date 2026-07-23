/*
 * XREFs of MiWaitForInFlightAcceleratorDeletions @ 0x14071494C
 * Callers:
 *     MiDeleteHardwareAccelerators @ 0x14071419C (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 */

void MiWaitForInFlightAcceleratorDeletions()
{
  KIRQL v0; // al
  __int64 v1; // [rsp+20h] [rbp-20h] BYREF
  __int64 v2; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v3[2]; // [rsp+30h] [rbp-10h] BYREF

  v1 = 0LL;
  v3[1] = v3;
  v2 = 393479LL;
  v3[0] = v3;
  v0 = ExAcquireSpinLockExclusive(&dword_140E366B0);
  if ( dword_140E366A0 )
  {
    v1 = qword_140E36698;
    qword_140E36698 = (__int64)&v1;
    if ( v0 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E366B0);
    else
      ExReleaseSpinLockExclusive(&dword_140E366B0, v0);
    KeWaitForGate((__int64)&v2, 19LL);
  }
  else if ( v0 == 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E366B0);
  }
  else
  {
    ExReleaseSpinLockExclusive(&dword_140E366B0, v0);
  }
}
