/*
 * XREFs of DbgUiDebugActiveProcess @ 0x180138FE0
 * Callers:
 *     <none>
 * Callees:
 *     DbgUiIssueRemoteBreakin @ 0x180139060 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x180139230 (DbgUiStopDebugging.c)
 *     NtDebugActiveProcess @ 0x1801608F0 (NtDebugActiveProcess.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // ebx

  active = NtDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      DbgUiStopDebugging(Process);
  }
  return active;
}
