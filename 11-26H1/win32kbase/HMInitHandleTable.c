/*
 * XREFs of HMInitHandleTable @ 0x1402F54F4
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x140153418 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMInitHandleTable(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  _QWORD *v8; // rsi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r8d
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_QWORD *)(UserSessionState + 19720) = 0LL;
  *(_QWORD *)(UserSessionState + 19736) = 0LL;
  *(_QWORD *)(UserSessionState + 19728) = 0LL;
  v8 = *(_QWORD **)(W32GetUserSessionState(v6, v5, v7) + 19864);
  *(_QWORD *)(UserSessionState + 19920) = a1;
  *(_DWORD *)(UserSessionState + 19928) = 32;
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 19904);
  *(_QWORD *)(v12 + 8) = 0LL;
  v15 = *(_QWORD *)(W32GetUserSessionState(v12, v13, v14) + 19904);
  *(_DWORD *)(v15 + 864) = 0;
  result = HMGrowHandleTable(v15, v16, v17);
  if ( (_DWORD)result )
  {
    *v8 = 0LL;
    result = 1LL;
    *(_WORD *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)(UserSessionState + 19728) = 2LL;
  }
  else
  {
    *(_QWORD *)(UserSessionState + 19920) = 0LL;
  }
  return result;
}
