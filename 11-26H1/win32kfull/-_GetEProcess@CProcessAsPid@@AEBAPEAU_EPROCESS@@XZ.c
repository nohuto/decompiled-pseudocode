/*
 * XREFs of ?_GetEProcess@CProcessAsPid@@AEBAPEAU_EPROCESS@@XZ @ 0x1401A4BA4
 * Callers:
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z @ 0x1401A4C50 (-_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A4E94 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 */

struct _EPROCESS *__fastcall CProcessAsPid::_GetEProcess(CProcessAsPid *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  struct tagTHREADINFO *v5; // rax
  struct tagTHREADINFO *v6; // rax
  _BYTE v7[20]; // [rsp+30h] [rbp-58h] BYREF
  char v8; // [rsp+44h] [rbp-44h]
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+60h] [rbp-28h]

  if ( !*(_QWORD *)this )
    return 0LL;
  CLockProcessByPid::CLockProcessByPid(v7, *(_QWORD *)this, 0LL);
  if ( !CProcessAsPid::_IsValid(this, (const struct CLockProcessByPid *)v7) )
  {
    if ( v9 )
    {
      if ( (v8 & 8) != 0 )
      {
        v6 = PtiCurrent(v2);
        *((_QWORD *)v6 + 47) = v10;
      }
      CLockProcessByPid::_Cleanup((CLockProcessByPid *)v7);
    }
    return 0LL;
  }
  v3 = v9;
  if ( v9 )
  {
    if ( (v8 & 8) != 0 )
    {
      v5 = PtiCurrent(v2);
      *((_QWORD *)v5 + 47) = v10;
    }
    CLockProcessByPid::_Cleanup((CLockProcessByPid *)v7);
  }
  return (struct _EPROCESS *)v3;
}
