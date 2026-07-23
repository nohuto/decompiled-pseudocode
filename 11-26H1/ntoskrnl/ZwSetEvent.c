/*
 * XREFs of ZwSetEvent @ 0x140728180
 * Callers:
 *     DifZwSetEventWrapper @ 0x1406BD220 (DifZwSetEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B20F30 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
