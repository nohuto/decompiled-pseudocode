/*
 * XREFs of ZwTerminateProcess @ 0x140723970
 * Callers:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     PsCallEnclave @ 0x1407FE1F0 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ExitStatus);
}
