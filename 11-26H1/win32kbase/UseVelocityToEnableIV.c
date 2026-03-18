/*
 * XREFs of UseVelocityToEnableIV @ 0x14010FD9C
 * Callers:
 *     IsPTPIVEnabled @ 0x14008A078 (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x14010FD58 (IsKeyboardIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1401C3E68 (IsTouchIVEnabled.c)
 *     IsPenIVEnabled @ 0x1401C3EA8 (IsPenIVEnabled.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

char __fastcall UseVelocityToEnableIV(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  char v6; // di
  int v8; // ebx
  __int64 v9; // rcx

  v6 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 19480) )
  {
    v8 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 19484);
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v9) == v8 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 19536) )
        return 1;
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 36) == 3 )
    return 1;
  return v6;
}
