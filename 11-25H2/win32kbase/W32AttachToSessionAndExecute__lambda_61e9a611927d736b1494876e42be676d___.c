/*
 * XREFs of W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401EC798
 * Callers:
 *     RIMDeviceClassNotify @ 0x140137390 (RIMDeviceClassNotify.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401EC630 (W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401F0464 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d_(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v9; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) || W32GetSessionState(v5) )
      return RIMDeviceClassNotifyUsingAsyncInputWork(*a2, a2[1]);
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
      v7 = W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v9, 0x47727355u);
    }
    return v7;
  }
}
