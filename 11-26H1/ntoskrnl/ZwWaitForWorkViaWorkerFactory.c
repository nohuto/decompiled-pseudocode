/*
 * XREFs of ZwWaitForWorkViaWorkerFactory @ 0x14072BCA0
 * Callers:
 *     DifZwWaitForWorkViaWorkerFactoryWrapper @ 0x1406C3540 (DifZwWaitForWorkViaWorkerFactoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
