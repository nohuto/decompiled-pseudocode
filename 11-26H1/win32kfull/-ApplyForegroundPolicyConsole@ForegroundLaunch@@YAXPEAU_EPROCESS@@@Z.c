/*
 * XREFs of ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1401A4F9C
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1401A4808 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A5358 (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall ForegroundLaunch::ApplyForegroundPolicyConsole(ForegroundLaunch *this, struct _EPROCESS *a2)
{
  CForegroundLaunch *v3; // rdi
  __int64 ProcessWin32Process; // rax
  struct tagPROCESSINFO *v5; // rdx

  v3 = *(CForegroundLaunch **)(W32GetUserSessionState(this, a2) + 18912);
  ProcessWin32Process = PsGetProcessWin32Process(this);
  v5 = (struct tagPROCESSINFO *)ProcessWin32Process;
  if ( ProcessWin32Process )
    v5 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process);
  CForegroundLaunch::ApplyForegroundPolicyConsole(v3, v5);
}
