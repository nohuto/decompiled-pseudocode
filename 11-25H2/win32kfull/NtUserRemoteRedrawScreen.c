/*
 * XREFs of NtUserRemoteRedrawScreen @ 0x14029D4B0
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x14012515C (RemoteRedrawScreen.c)
 */

__int64 NtUserRemoteRedrawScreen()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx

  EnterCrit(0LL, 0LL);
  v1 = *(_QWORD *)(W32GetUserGdiSessionState(v0) + 40);
  if ( PsGetCurrentProcess(v2) == v1 )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v4, v3) + 68904) || *(_DWORD *)(W32GetUserSessionState(v4, v6) + 68756) )
    {
      UserSessionState = W32GetUserSessionState(v4, v6);
      v5 = RemoteRedrawScreen((void **)(UserSessionState + 19152), v8);
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
