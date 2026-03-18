/*
 * XREFs of MiWaitForInFlightAcceleratorDeletions @ 0x14070FC50
 * Callers:
 *     MiDeleteHardwareAccelerators @ 0x14070F4A0 (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1403C26D0 (KeWaitForGate.c)
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
  v0 = ExAcquireSpinLockExclusive(&dword_140E36530);
  if ( dword_140E36520 )
  {
    v1 = qword_140E36518;
    qword_140E36518 = (__int64)&v1;
    if ( v0 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36530);
    else
      ExReleaseSpinLockExclusive(&dword_140E36530, v0);
    KeWaitForGate((__int64)&v2, 19LL);
  }
  else if ( v0 == 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36530);
  }
  else
  {
    ExReleaseSpinLockExclusive(&dword_140E36530, v0);
  }
}
