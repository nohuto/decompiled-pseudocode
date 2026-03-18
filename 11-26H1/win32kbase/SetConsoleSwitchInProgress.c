/*
 * XREFs of SetConsoleSwitchInProgress @ 0x14007E740
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

int __fastcall SetConsoleSwitchInProgress(int a1)
{
  int v2; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  int v11; // r8d
  __int64 UserSessionState; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  struct _KEVENT *v16; // rcx
  __int64 v17; // rdx

  *(_DWORD *)(W32GetUserGdiSessionState() + 36) = a1;
  v2 = *(_DWORD *)(W32GetUserGdiSessionState() + 36);
  *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 324) = v2;
  v8 = PtiCurrent(v7, v6);
  if ( v8 )
  {
    v17 = 0LL;
    if ( a1 == 1 )
      v17 = 2LL;
    v10 = *((_QWORD *)v8 + 170) & 0xFFFFFFFFFFFFFFFDuLL;
    v9 = v10 | v17;
    *((_QWORD *)v8 + 170) = v9;
  }
  UserSessionState = W32GetUserSessionState(v10, v9, v11);
  if ( *(_QWORD *)(UserSessionState + 68392) )
  {
    v16 = *(struct _KEVENT **)(W32GetUserSessionState(v14, v13, v15) + 68392);
    if ( a1 )
      LODWORD(UserSessionState) = KeResetEvent(v16);
    else
      LODWORD(UserSessionState) = KeSetEvent(v16, 1, 0);
  }
  return UserSessionState;
}
