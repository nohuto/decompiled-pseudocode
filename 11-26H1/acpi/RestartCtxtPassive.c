/*
 * XREFs of RestartCtxtPassive @ 0x14000E280
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x14000E500 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(PVOID Entry)
{
  byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue(Entry);
  KeReleaseSpinLock(&SpinLock, byte_14008EB70);
}
