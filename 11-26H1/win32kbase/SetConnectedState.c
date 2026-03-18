/*
 * XREFs of SetConnectedState @ 0x14007F120
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x14018642C (PowerConnectionEvent.c)
 *     ??4?$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z @ 0x1401C4690 (--4-$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z.c)
 */

__int64 __fastcall SetConnectedState(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 UserSessionState; // rax
  int v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 68748) = a1;
  W32GetUserSessionState(v5, v4, v6);
  result = W32GetUserSessionState(v8, v7, v9);
  if ( a2 != *(_DWORD *)(result + 68752) )
  {
    SGRDPgbConnectCompleted<int>::operator=(v11, &v16);
    UserSessionState = W32GetUserSessionState(v13, v12, v14);
    return PowerConnectionEvent(*(unsigned int *)(UserSessionState + 68748));
  }
  return result;
}
