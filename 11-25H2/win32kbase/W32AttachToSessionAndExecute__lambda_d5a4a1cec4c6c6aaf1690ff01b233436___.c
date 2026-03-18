/*
 * XREFs of W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x1401EC84C
 * Callers:
 *     RIMDeviceNotify @ 0x1401569F0 (RIMDeviceNotify.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x1401EC6E4 (W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x1401F0720 (RIMDeviceNotifyUsingAsyncInputWork.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436_(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v9; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) || W32GetSessionState(v5) )
      return RIMDeviceNotifyUsingAsyncInputWork(*a2, a2[1]);
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
      v7 = W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v9, 0x47727355u);
    }
    return v7;
  }
}
