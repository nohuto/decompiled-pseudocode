/*
 * XREFs of ZwCreateWorkerFactory @ 0x140729A60
 * Callers:
 *     DifZwCreateWorkerFactoryWrapper @ 0x1406A7490 (DifZwCreateWorkerFactoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWorkerFactory(
        PHANDLE WorkerFactoryHandleReturn,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE CompletionPortHandle,
        HANDLE WorkerProcessHandle,
        PVOID StartRoutine,
        PVOID StartParameter,
        ULONG MaxThreadCount,
        SIZE_T StackReserve,
        SIZE_T StackCommit)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandleReturn);
}
