/*
 * XREFs of DbgUiDebugActiveProcess @ 0x180139270
 * Callers:
 *     <none>
 * Callees:
 *     DbgUiIssueRemoteBreakin @ 0x1801392F0 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x1801394C0 (DbgUiStopDebugging.c)
 *     NtDebugActiveProcess @ 0x1801609F0 (NtDebugActiveProcess.c)
 */

__int64 __fastcall DbgUiDebugActiveProcess(HANDLE ProcessHandle)
{
  int active; // ebx

  active = NtDebugActiveProcess(ProcessHandle, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(ProcessHandle);
    if ( active < 0 )
      DbgUiStopDebugging(ProcessHandle);
  }
  return (unsigned int)active;
}
