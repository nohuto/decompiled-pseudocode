/*
 * XREFs of W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1402113F8
 * Callers:
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1402115B0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x140211348 (W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___.c)
 *     _lambda_015c32a42809731270cc377abf7a5008_::operator() @ 0x1402114BC (_lambda_015c32a42809731270cc377abf7a5008_--operator().c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008_(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v9; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v11; // rsi

  v3 = a1;
  if ( (_DWORD)a1 == (unsigned int)W32GetCurrentWin32kSessionId(a1) )
  {
    if ( PsGetCurrentProcessWin32Process(v4) )
      return lambda_015c32a42809731270cc377abf7a5008_::operator()(a2);
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v6) < MaxSessionCount && W32GetSessionState(v7) )
      return lambda_015c32a42809731270cc377abf7a5008_::operator()(a2);
    else
      return 3221225485LL;
  }
  else
  {
    v9 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(v3, 1198682965LL, 0LL);
    v11 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v9 = W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v11, 0x47727355u);
    }
    return v9;
  }
}
