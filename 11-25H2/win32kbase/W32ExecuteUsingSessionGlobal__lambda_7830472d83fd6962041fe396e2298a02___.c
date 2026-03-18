/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___ @ 0x1401C21C4
 * Callers:
 *     AllocateW32ProcessImpl @ 0x14016AD30 (AllocateW32ProcessImpl.c)
 *     Win32AllocPoolWithQuotaZInitAndSessionHint @ 0x1401C1E40 (Win32AllocPoolWithQuotaZInitAndSessionHint.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     _lambda_7830472d83fd6962041fe396e2298a02_::operator() @ 0x1401C2288 (_lambda_7830472d83fd6962041fe396e2298a02_--operator().c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v8; // rdi
  __int64 UserSessionState; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    return lambda_7830472d83fd6962041fe396e2298a02_::operator()(a2, UserSessionState);
  }
  else
  {
    v11 = 0LL;
    v6 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, &v11);
    v8 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v6 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v6 >= 0 )
      {
        v6 = lambda_7830472d83fd6962041fe396e2298a02_::operator()(a2, v11);
        PsReleaseProcessExitSynchronization(v8);
      }
      ObfDereferenceObjectWithTag(v8, 0x47727355u);
    }
    return (unsigned int)v6;
  }
}
