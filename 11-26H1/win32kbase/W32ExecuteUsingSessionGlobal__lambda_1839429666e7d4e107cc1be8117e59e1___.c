/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1___ @ 0x1401D7964
 * Callers:
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x1401D7A2C (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1_(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v9; // rdi
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  if ( (_DWORD)a1 == (unsigned int)W32GetCurrentWin32kSessionId(a1) )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 1208LL) = W32GetUserSessionState(v5, v4, v6);
    return 0LL;
  }
  else
  {
    v11 = 0LL;
    v7 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(v3, 1198682965LL, &v11);
    v9 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v7 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v7 >= 0 )
      {
        v7 = 0;
        *(_QWORD *)(*(_QWORD *)a2 + 1208LL) = v11;
        PsReleaseProcessExitSynchronization(v9);
      }
      ObfDereferenceObjectWithTag(v9, 0x47727355u);
    }
    return (unsigned int)v7;
  }
}
