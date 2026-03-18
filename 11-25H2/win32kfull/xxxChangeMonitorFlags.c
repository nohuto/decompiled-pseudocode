/*
 * XREFs of xxxChangeMonitorFlags @ 0x14017E61C
 * Callers:
 *     xxxCsDdeInitialize @ 0x14017DC44 (xxxCsDdeInitialize.c)
 *     NtUserUpdateInstance @ 0x1402A3180 (NtUserUpdateInstance.c)
 *     xxxEventWndProc @ 0x1402DD6A0 (xxxEventWndProc.c)
 * Callees:
 *     xxxCsEvent @ 0x1402DD438 (xxxCsEvent.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxChangeMonitorFlags(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD v19[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 40) ^ a2;
  *(_DWORD *)(a1 + 40) = a2;
  v4 = W32GetUserSessionState(a1, a2) + 66692;
  v7 = *(_DWORD *)(W32GetUserSessionState(v6, v5) + 66688);
  v10 = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v9, v8) + 66688) = 0;
  do
  {
    v12 = *(unsigned int *)(v4 + 8 * v10 + 4);
    if ( ((unsigned int)v12 & v3) != 0 )
    {
      v13 = *(_DWORD *)(v4 + 8 * v10);
      if ( ((unsigned int)v12 & v2) != 0 )
        v14 = v13 + 1;
      else
        v14 = v13 - 1;
      *(_DWORD *)(v4 + 8 * v10) = v14;
    }
    if ( *(_DWORD *)(v4 + 8 * v10) )
    {
      UserSessionState = W32GetUserSessionState(v12, v11);
      v12 = *(unsigned int *)(v4 + 8 * v10 + 4);
      *(_DWORD *)(UserSessionState + 66688) |= v12;
    }
    ++v10;
  }
  while ( v10 < 10 );
  result = W32GetUserSessionState(v12, v11);
  if ( v7 != *(_DWORD *)(result + 66688) )
  {
    v19[0] = 0;
    v19[1] = 0x40000;
    v19[2] = *(_DWORD *)(W32GetUserSessionState(v18, v17) + 66688);
    return xxxCsEvent(v19, 4LL);
  }
  return result;
}
