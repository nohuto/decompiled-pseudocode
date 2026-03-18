/*
 * XREFs of ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68
 * Callers:
 *     ?DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z @ 0x1400FA230 (-DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z.c)
 *     ?DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A0F4C (-DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A12BC (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?DeBoostAll@CShellForegroundBoost@@QEAAXXZ @ 0x1401A57F0 (-DeBoostAll@CShellForegroundBoost@@QEAAXXZ.c)
 *     ?OnDaemonTimer@CForegroundLaunch@@QEAAXXZ @ 0x1401F5678 (-OnDaemonTimer@CForegroundLaunch@@QEAAXXZ.c)
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x140208A94 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x1402527A0 (-OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ.c)
 *     ?OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z @ 0x14028D714 (-OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z.c)
 * Callees:
 *     ?_GetEProcess@CProcessAsPid@@AEBAPEAU_EPROCESS@@XZ @ 0x1401A4BA4 (-_GetEProcess@CProcessAsPid@@AEBAPEAU_EPROCESS@@XZ.c)
 */

unsigned __int64 __fastcall CProcessAsPid::GetProcessInfo(CProcessAsPid *this)
{
  unsigned __int64 result; // rax

  result = (unsigned __int64)CProcessAsPid::_GetEProcess(this);
  if ( result )
  {
    result = PsGetProcessWin32Process(result);
    if ( result )
      result &= -(__int64)(*(_QWORD *)result != 0LL);
  }
  return result;
}
