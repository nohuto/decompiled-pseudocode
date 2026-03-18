/*
 * XREFs of ?SetDebugHotKeys@@YAXXZ @ 0x14029B46C
 * Callers:
 *     ?RegisterSystemHotkeys@@YAXXZ @ 0x14029B3C4 (-RegisterSystemHotkeys@@YAXXZ.c)
 * Callees:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x1401A24FC (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

void SetDebugHotKeys(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  FastGetProfileDword(0LL, 21LL, L"UserDebuggerHotkey", 0LL, &v10);
  v2 = v10;
  if ( !v10 )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v1, v0) + 12824) == 2
      || *(_BYTE *)(W32GetUserSessionState(v4, v3) + 12824) == 4
      || *(_BYTE *)(W32GetUserSessionState(v6, v5) + 12824) == 7
      || (v9 = *(_BYTE *)(W32GetUserSessionState(v8, v7) + 12824) == 8, v2 = 109, v9) )
    {
      v2 = 123;
    }
    v10 = v2;
  }
  _RegisterHotKey(0LL, 0LL, -5, 0, v2, 0LL);
  _RegisterHotKey(0LL, 0LL, -6, 4, v10, 0LL);
}
