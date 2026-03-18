/*
 * XREFs of ZwSetEvent @ 0x1407235B0
 * Callers:
 *     DifZwSetEventWrapper @ 0x1406B9640 (DifZwSetEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B1EEB0 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, PreviousState);
}
