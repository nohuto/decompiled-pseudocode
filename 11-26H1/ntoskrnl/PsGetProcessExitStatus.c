/*
 * XREFs of PsGetProcessExitStatus @ 0x140AF33E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsGetProcessExitStatus(PEPROCESS Process)
{
  return HIDWORD(Process[2].AvailableCpuState);
}
