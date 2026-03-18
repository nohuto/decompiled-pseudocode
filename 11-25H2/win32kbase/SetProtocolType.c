/*
 * XREFs of SetProtocolType @ 0x140148C80
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14009B1F0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RetrieveCurrentDisplayState @ 0x14015B918 (RetrieveCurrentDisplayState.c)
 *     ??4?$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z @ 0x1401A0F50 (--4-$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z.c)
 */

__int64 __fastcall SetProtocolType(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int16 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = a1;
  v1 = (unsigned __int16)a1;
  SGRDPgProtocolType<unsigned short>::operator=(a1, &v16);
  *(_DWORD *)(W32GetUserSessionState(v3, v2) + 316) = v1;
  if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v5, v4) )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    v7 = 0LL;
    *(_QWORD *)(UserSessionState + 68696) = 0LL;
  }
  result = W32GetUserSessionState(v7, v6);
  if ( !*(_WORD *)(result + 68752) )
  {
    RetrieveCurrentDisplayState();
    v12 = W32GetUserSessionState(v11, v10);
    CInputGlobals::UpdateLastInputTime(
      *(struct W32_PUSH_LOCK **)(v12 + 3056),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      9u);
    v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    result = W32GetUserSessionState(v15, v14);
    *(_DWORD *)(result + 2788) = v13;
  }
  return result;
}
