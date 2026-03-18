/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___ @ 0x1401B4578
 * Callers:
 *     AllocateW32ProcessImpl @ 0x14018A480 (AllocateW32ProcessImpl.c)
 *     Win32AllocPoolWithQuotaZInitAndSessionHint @ 0x1401B4530 (Win32AllocPoolWithQuotaZInitAndSessionHint.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _lambda_7830472d83fd6962041fe396e2298a02_::operator() @ 0x1401B463C (_lambda_7830472d83fd6962041fe396e2298a02_--operator().c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02_(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v9; // rdi
  __int64 UserSessionState; // rax
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  if ( (_DWORD)a1 == (unsigned int)W32GetCurrentWin32kSessionId(a1) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    return lambda_7830472d83fd6962041fe396e2298a02_::operator()(a2, UserSessionState);
  }
  else
  {
    v12 = 0LL;
    v7 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(v3, 1198682965LL, &v12);
    v9 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v7 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v7 >= 0 )
      {
        v7 = lambda_7830472d83fd6962041fe396e2298a02_::operator()(a2, v12);
        PsReleaseProcessExitSynchronization(v9);
      }
      ObfDereferenceObjectWithTag(v9, 0x47727355u);
    }
    return (unsigned int)v7;
  }
}
