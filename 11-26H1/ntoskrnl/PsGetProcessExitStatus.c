/*
 * XREFs of PsGetProcessExitStatus @ 0x140AF0810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsGetProcessExitStatus(PEPROCESS Process)
{
  return HIDWORD(Process[2].AvailableCpuState);
}
