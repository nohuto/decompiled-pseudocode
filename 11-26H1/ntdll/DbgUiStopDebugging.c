/*
 * XREFs of DbgUiStopDebugging @ 0x180139230
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x180138FE0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiStopDebugging(HANDLE Process)
{
  return ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
}
