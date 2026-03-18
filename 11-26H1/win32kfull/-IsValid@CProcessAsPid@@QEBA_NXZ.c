/*
 * XREFs of ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x1401A0C88
 * Callers:
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A12BC (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA?AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@W4LaunchBoostState@2@@Z @ 0x1402AA7CC (-Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA-AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAU.c)
 * Callees:
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z @ 0x1401A4C50 (-_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 */

bool __fastcall CProcessAsPid::IsValid(CProcessAsPid *this)
{
  bool IsValid; // bl
  _BYTE v4[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( !*(_QWORD *)this )
    return 0;
  CLockProcessByPid::CLockProcessByPid(v4, *(_QWORD *)this, 0LL);
  IsValid = CProcessAsPid::_IsValid(this, (const struct CLockProcessByPid *)v4);
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v4);
  return IsValid;
}
