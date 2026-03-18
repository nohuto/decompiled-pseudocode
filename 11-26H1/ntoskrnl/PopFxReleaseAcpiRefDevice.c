/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x1406058BC
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x140B1BA40 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1402DF200 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxReleaseAcpiRefDevice(__int64 a1, void *a2)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 312), a2, 0x20u);
}
