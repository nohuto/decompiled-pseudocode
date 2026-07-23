/*
 * XREFs of ZwSetInformationWorkerFactory @ 0x14072B600
 * Callers:
 *     DifZwSetInformationWorkerFactoryWrapper @ 0x1406BEE80 (DifZwSetInformationWorkerFactoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
