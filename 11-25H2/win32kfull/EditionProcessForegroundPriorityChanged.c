/*
 * XREFs of EditionProcessForegroundPriorityChanged @ 0x1400D8A70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall EditionProcessForegroundPriorityChanged(PEPROCESS *a1, int a2, __int64 a3)
{
  int ActiveConsoleId; // ebx
  HANDLE ProcessId; // rax

  if ( a2 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId == (unsigned int)W32GetCurrentWin32kSessionId() )
    {
      ProcessId = PsGetProcessId(*a1);
      RtlSetConsoleSessionForegroundProcessId(ProcessId);
    }
  }
  LOBYTE(a3) = a2 != 0;
  return GreDxgkSetProcessStatus(a1, 1LL, a3);
}
