/*
 * XREFs of ZwTerminateProcess @ 0x140728540
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
