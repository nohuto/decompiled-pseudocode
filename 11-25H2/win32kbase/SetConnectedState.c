/*
 * XREFs of SetConnectedState @ 0x140150BE0
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x140150D1C (PowerConnectionEvent.c)
 *     ??4?$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z @ 0x1401A0FBC (--4-$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z.c)
 */

__int64 __fastcall SetConnectedState(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v2 = a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68756) = a1;
  W32GetUserSessionState(v4, v3);
  result = W32GetUserSessionState(v6, v5);
  if ( v2 != *(_DWORD *)(result + 68760) )
  {
    SGRDPgbConnectCompleted<int>::operator=(v8, &v12);
    UserSessionState = W32GetUserSessionState(v10, v9);
    return PowerConnectionEvent(*(unsigned int *)(UserSessionState + 68756));
  }
  return result;
}
