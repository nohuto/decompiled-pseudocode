/*
 * XREFs of W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1401F63EC
 * Callers:
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1401F6590 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1401F633C (W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___.c)
 *     _lambda_015c32a42809731270cc377abf7a5008_::operator() @ 0x1401F649C (_lambda_015c32a42809731270cc377abf7a5008_--operator().c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v9; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) || W32GetSessionState(v5) )
      return lambda_015c32a42809731270cc377abf7a5008_::operator()(a2);
    else
      return 3221225485LL;
  }
  else
  {
    v7 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
    v9 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v7 = W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v9, 0x47727355u);
    }
    return v7;
  }
}
