/*
 * XREFs of PopPepWaitForDeviceRelease @ 0x14052FF40
 * Callers:
 *     PopPepUnregisterDevice @ 0x140B08930 (PopPepUnregisterDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PopPepWaitForDeviceRelease(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v2; // al

  v1 = (volatile LONG *)(a1 + 64);
  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  ExReleaseSpinLockExclusive(v1, v2);
}
