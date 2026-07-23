/*
 * XREFs of ZwTerminateProcess @ 0x14069B6C0
 * Callers:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     PsCallEnclave @ 0x140AC7FE0 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
