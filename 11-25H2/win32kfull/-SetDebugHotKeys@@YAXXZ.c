/*
 * XREFs of ?SetDebugHotKeys@@YAXXZ @ 0x140275EA0
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     ?RegisterSystemHotkeys@@YAXXZ @ 0x140275DA4 (-RegisterSystemHotkeys@@YAXXZ.c)
 * Callees:
 *     Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline @ 0x14027714C (Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x14028ACB4 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

void SetDebugHotKeys(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  bool v3; // zf
  __int64 v4; // rcx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  FastGetProfileDword(0LL, 21LL, L"UserDebuggerHotkey", 0LL, &v5);
  if ( !v5 )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v1, v0) + 12824) == 2
      || *(_BYTE *)(W32GetUserSessionState(v1, v0) + 12824) == 4
      || *(_BYTE *)(W32GetUserSessionState(v1, v0) + 12824) == 7
      || (v3 = *(_BYTE *)(W32GetUserSessionState(v1, v0) + 12824) == 8, v5 = 109, v3) )
    {
      v5 = 123;
    }
  }
  if ( (unsigned int)Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline(v1, v0, v2) )
  {
    _RegisterHotKey(0LL, 0LL, -5, 0, v5, 0LL);
    v4 = 0LL;
  }
  else
  {
    _RegisterHotKey((struct tagWND *)1, 0LL, -5, 0, v5, 0LL);
    v4 = 1LL;
  }
  _RegisterHotKey((struct tagWND *)v4, 0LL, -6, 4u, v5, 0LL);
}
