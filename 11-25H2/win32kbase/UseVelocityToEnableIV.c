/*
 * XREFs of UseVelocityToEnableIV @ 0x1400C8E98
 * Callers:
 *     IsKeyboardIVEnabled @ 0x14005DFE8 (IsKeyboardIVEnabled.c)
 *     IsPTPIVEnabled @ 0x14005E094 (IsPTPIVEnabled.c)
 *     IsMouseIVEnabled @ 0x14005F180 (IsMouseIVEnabled.c)
 *     IsPenIVEnabled @ 0x14021B7A4 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x14021B7FC (IsTouchIVEnabled.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

char __fastcall UseVelocityToEnableIV(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // di
  int v6; // ebx

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19448) )
  {
    v6 = *(_DWORD *)(W32GetUserSessionState(v3, v2) + 19452);
    if ( (unsigned int)W32GetCurrentWin32kSessionId() == v6 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v3, v2) + 19504) )
        return 1;
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v3, v2) + 36) == 3 )
    return 1;
  return v4;
}
