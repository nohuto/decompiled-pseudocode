/*
 * XREFs of IsShellProcess @ 0x1401A7FD8
 * Callers:
 *     NtUserShellRegisterHotKey @ 0x1401A7BF0 (NtUserShellRegisterHotKey.c)
 *     NtUserShellForegroundBoostProcess @ 0x1401A7DD0 (NtUserShellForegroundBoostProcess.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1401A7F08 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A8314 (-DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A8484 (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     NtUserRegisterEdgy @ 0x14020F790 (NtUserRegisterEdgy.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x140247CC0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserSetInteractiveControlFocus @ 0x14024DE20 (NtUserSetInteractiveControlFocus.c)
 *     ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer @ 0x14026C1C0 (ShellHangDetection--_anonymous_namespace_--ReportHungShellToWer.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x14028ACB4 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028F9BC (-_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402904D0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x140292A58 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 *     NtUserGetWindowProcessHandle @ 0x1402995F0 (NtUserGetWindowProcessHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 336);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 176LL) == a1;
  return v2;
}
