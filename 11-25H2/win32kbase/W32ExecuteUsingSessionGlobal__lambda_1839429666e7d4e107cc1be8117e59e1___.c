/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1___ @ 0x1401B53FC
 * Callers:
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x14016AC04 (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v8; // rdi
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 1184LL) = W32GetUserSessionState(v5, v4);
    return 0LL;
  }
  else
  {
    v10 = 0LL;
    v6 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, &v10);
    v8 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v6 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v6 >= 0 )
      {
        v6 = 0;
        *(_QWORD *)(*(_QWORD *)a2 + 1184LL) = v10;
        PsReleaseProcessExitSynchronization(v8);
      }
      ObfDereferenceObjectWithTag(v8, 0x47727355u);
    }
    return (unsigned int)v6;
  }
}
