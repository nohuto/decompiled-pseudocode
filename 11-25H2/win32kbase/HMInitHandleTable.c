/*
 * XREFs of HMInitHandleTable @ 0x1402E83C8
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1401131B4 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMInitHandleTable(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = UserSessionState + 2461;
  UserSessionState[2461] = 0LL;
  UserSessionState[2463] = 0LL;
  UserSessionState[2462] = 0LL;
  v7 = *(_QWORD **)(W32GetUserSessionState(v6, v5) + 19832);
  v4[25] = a1;
  *((_DWORD *)v4 + 52) = 32;
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
  *(_QWORD *)(v10 + 8) = 0LL;
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v11) + 19872);
  *(_DWORD *)(v12 + 864) = 0;
  result = HMGrowHandleTable(v12, v13);
  if ( (_DWORD)result )
  {
    *v7 = 0LL;
    result = 1LL;
    *(_WORD *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 24) = 0;
    v4[1] = 2LL;
  }
  else
  {
    v4[25] = 0LL;
  }
  return result;
}
