/*
 * XREFs of ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x14018ED0C
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x14018E78C (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14018ED6C (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall ForegroundLaunch::ApplyForegroundPolicyConsole(ForegroundLaunch *this, struct _EPROCESS *a2)
{
  CForegroundLaunch *v3; // rdi
  unsigned __int64 ProcessWin32Process; // rax

  v3 = *(CForegroundLaunch **)(W32GetUserSessionState(this, a2) + 18872);
  ProcessWin32Process = PsGetProcessWin32Process(this);
  if ( ProcessWin32Process )
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  CForegroundLaunch::ApplyForegroundPolicyConsole(v3, (struct tagPROCESSINFO *)ProcessWin32Process);
}
