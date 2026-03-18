/*
 * XREFs of ?Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z @ 0x140247A58
 * Callers:
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A8484 (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028EEA0 (-PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CProcessAsPid::Store(CProcessAsPid *this, struct _EPROCESS *a2)
{
  char v2; // bl

  v2 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( !(unsigned __int8)PsGetProcessExitProcessCalled(a2) )
  {
    v2 = 1;
    *(_QWORD *)this = PsGetProcessId(a2);
    *((_QWORD *)this + 1) = PsGetProcessSequenceNumber(a2);
  }
  return v2;
}
