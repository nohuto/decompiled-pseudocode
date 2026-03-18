/*
 * XREFs of SetConsoleSwitchInProgress @ 0x1401460A0
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

int __fastcall SetConsoleSwitchInProgress(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KEVENT *v12; // rcx
  __int64 v13; // rdx

  v1 = a1;
  *(_DWORD *)(W32GetUserGdiSessionState(a1) + 36) = a1;
  v3 = *(_DWORD *)(W32GetUserGdiSessionState(v2) + 36);
  *(_DWORD *)(W32GetUserSessionState(v5, v4) + 324) = v3;
  v6 = PtiCurrent();
  if ( v6 )
  {
    v13 = 0LL;
    if ( v1 == 1 )
      v13 = 2LL;
    v8 = *((_QWORD *)v6 + 170) & 0xFFFFFFFFFFFFFFFDuLL;
    v7 = v8 | v13;
    *((_QWORD *)v6 + 170) = v7;
  }
  UserSessionState = W32GetUserSessionState(v8, v7);
  if ( *(_QWORD *)(UserSessionState + 68400) )
  {
    v12 = *(struct _KEVENT **)(W32GetUserSessionState(v11, v10) + 68400);
    if ( v1 )
      LODWORD(UserSessionState) = KeResetEvent(v12);
    else
      LODWORD(UserSessionState) = KeSetEvent(v12, 1, 0);
  }
  return UserSessionState;
}
