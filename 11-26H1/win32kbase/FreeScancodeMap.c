/*
 * XREFs of FreeScancodeMap @ 0x140190F00
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

__int64 __fastcall FreeScancodeMap(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 12888) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    GreDeleteFastMutex(*(char **)(UserSessionState + 12888), v11, v12, v13);
    *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 12888) = 0LL;
  }
  result = W32GetUserSessionState(v4, v3, v5);
  if ( *(_QWORD *)(result + 12896) )
  {
    v17 = W32GetUserSessionState(v8, v7, v9);
    GreDeleteFastMutex(*(char **)(v17 + 12896), v18, v19, v20);
    *(_QWORD *)(W32GetUserSessionState(v22, v21, v23) + 12896) = 0LL;
    result = W32GetUserSessionState(v25, v24, v26);
    *(_DWORD *)(result + 12904) = 0;
  }
  return result;
}
