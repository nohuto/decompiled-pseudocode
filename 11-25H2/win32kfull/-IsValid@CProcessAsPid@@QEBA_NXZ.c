/*
 * XREFs of ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x140222764
 * Callers:
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A8484 (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028EEA0 (-PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 * Callees:
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z @ 0x140207E20 (-_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x140277630 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 *     ?_IsEmpty@CProcessAsPid@@AEBA_NXZ @ 0x140291018 (-_IsEmpty@CProcessAsPid@@AEBA_NXZ.c)
 */

char __fastcall CProcessAsPid::IsValid(CProcessAsPid *this)
{
  _QWORD *v2; // rcx
  char IsValid; // bl
  __int64 v5; // rdx
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF

  if ( CProcessAsPid::_IsEmpty(this) )
    return 0;
  CLockProcessByPid::CLockProcessByPid(v6, *v2, 1LL);
  IsValid = CProcessAsPid::_IsValid(this, (const struct CLockProcessByPid *)v6);
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v6, v5);
  return IsValid;
}
