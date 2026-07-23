/*
 * XREFs of ZwQueryInformationWorkerFactory @ 0x14072AB40
 * Callers:
 *     DifZwQueryInformationWorkerFactoryWrapper @ 0x1406B5D10 (DifZwQueryInformationWorkerFactoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
