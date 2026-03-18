/*
 * XREFs of PopPepWaitForDeviceRelease @ 0x14052DA20
 * Callers:
 *     PopPepUnregisterDevice @ 0x140B06800 (PopPepUnregisterDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PopPepWaitForDeviceRelease(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v2; // al

  v1 = (volatile LONG *)(a1 + 64);
  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  ExReleaseSpinLockExclusive(v1, v2);
}
