/*
 * XREFs of NdisAllocateSpinLockExported @ 0x1400D9520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisAllocateSpinLockExported(PNDIS_SPIN_LOCK SpinLock)
{
  KeInitializeSpinLock(&SpinLock->SpinLock);
}
