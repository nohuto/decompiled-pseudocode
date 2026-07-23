/*
 * XREFs of ZwShutdownWorkerFactory @ 0x14072B8C0
 * Callers:
 *     DifZwShutdownWorkerFactoryWrapper @ 0x1406C0910 (DifZwShutdownWorkerFactoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
