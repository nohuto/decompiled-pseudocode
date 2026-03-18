/*
 * XREFs of SetProtocolType @ 0x14017D3E0
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1400D00A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ??4?$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z @ 0x14017D4C0 (--4-$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z.c)
 *     RetrieveCurrentDisplayState @ 0x14017D4FC (RetrieveCurrentDisplayState.c)
 */

__int64 __fastcall SetProtocolType(__int64 a1)
{
  int v1; // ebx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 UserSessionState; // rax
  __int64 result; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int16 v22; // [rsp+30h] [rbp+8h] BYREF

  v22 = a1;
  v1 = (unsigned __int16)a1;
  SGRDPgProtocolType<unsigned short>::operator=(a1, &v22);
  *(_DWORD *)(W32GetUserSessionState(v3, v2, v4) + 316) = v1;
  if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v6, v5, v7, v8) )
  {
    UserSessionState = W32GetUserSessionState(v10, v9, v11);
    v10 = 0;
    *(_QWORD *)(UserSessionState + 68688) = 0LL;
  }
  result = W32GetUserSessionState(v10, v9, v11);
  if ( !*(_WORD *)(result + 68744) )
  {
    RetrieveCurrentDisplayState();
    v17 = W32GetUserSessionState(v15, v14, v16);
    CInputGlobals::UpdateLastInputTime(
      *(struct W32_PUSH_LOCK **)(v17 + 3056),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      9u);
    v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    result = W32GetUserSessionState(v20, v19, v21);
    *(_DWORD *)(result + 2784) = v18;
  }
  return result;
}
