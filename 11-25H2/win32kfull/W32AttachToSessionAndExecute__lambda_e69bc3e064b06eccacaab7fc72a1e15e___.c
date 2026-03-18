/*
 * XREFs of W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x140289910
 * Callers:
 *     NtUserSetProcessWin32Capabilities @ 0x14029FB10 (NtUserSetProcessWin32Capabilities.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x140289860 (W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 *     _lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator() @ 0x1402899C0 (_lambda_e69bc3e064b06eccacaab7fc72a1e15e_--operator().c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v8; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v10; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) || W32GetSessionState(v6, v5) )
      return lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator()(a2);
    else
      return 3221225485LL;
  }
  else
  {
    v8 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
    v10 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v8 = W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v10, 0x47727355u);
    }
    return v8;
  }
}
