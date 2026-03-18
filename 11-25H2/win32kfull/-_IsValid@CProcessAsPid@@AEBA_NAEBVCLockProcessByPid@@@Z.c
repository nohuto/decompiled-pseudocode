/*
 * XREFs of ?_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z @ 0x140207E20
 * Callers:
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x140222764 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1402267F0 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CProcessAsPid::_IsValid(CProcessAsPid *this, const struct CLockProcessByPid *a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  v4 = *((_QWORD *)a2 + 3);
  if ( v4 && *((_QWORD *)this + 1) == PsGetProcessSequenceNumber(v4) )
    return (unsigned __int8)PsGetProcessExitProcessCalled(*((_QWORD *)a2 + 3)) == 0;
  return v3;
}
