/*
 * XREFs of W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x14020B1D4
 * Callers:
 *     RIMDeviceNotify @ 0x140190060 (RIMDeviceNotify.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x14008FAD4 (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x14020B058 (W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436_(__int64 a1, __int64 *a2)
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
      return RIMDeviceNotifyUsingAsyncInputWork(*a2, a2[1]);
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v6) < MaxSessionCount && W32GetSessionState(v7) )
      return RIMDeviceNotifyUsingAsyncInputWork(*a2, a2[1]);
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
      v9 = W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v11, 0x47727355u);
    }
    return v9;
  }
}
