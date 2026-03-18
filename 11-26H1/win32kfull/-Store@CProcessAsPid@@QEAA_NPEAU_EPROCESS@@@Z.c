/*
 * XREFs of ?Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z @ 0x1401A0C14
 * Callers:
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A12BC (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA?AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@W4LaunchBoostState@2@@Z @ 0x1402AA7CC (-Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA-AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAU.c)
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
