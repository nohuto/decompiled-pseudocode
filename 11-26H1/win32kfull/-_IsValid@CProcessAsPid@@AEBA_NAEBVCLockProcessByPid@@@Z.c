/*
 * XREFs of ?_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z @ 0x1401A4C50
 * Callers:
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x1401A0C88 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 *     ?_GetEProcess@CProcessAsPid@@AEBAPEAU_EPROCESS@@XZ @ 0x1401A4BA4 (-_GetEProcess@CProcessAsPid@@AEBAPEAU_EPROCESS@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CProcessAsPid::_IsValid(CProcessAsPid *this, const struct CLockProcessByPid *a2)
{
  char v3; // di
  __int64 v4; // rcx
  __int64 v7; // rbx

  v3 = 0;
  v4 = *((_QWORD *)a2 + 3);
  if ( v4 )
  {
    v7 = *((_QWORD *)this + 1);
    if ( v7 == PsGetProcessSequenceNumber(v4) )
      return (unsigned __int8)PsGetProcessExitProcessCalled(*((_QWORD *)a2 + 3)) == 0;
  }
  return v3;
}
