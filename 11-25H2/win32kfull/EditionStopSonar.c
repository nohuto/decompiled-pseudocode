/*
 * XREFs of EditionStopSonar @ 0x1401931E0
 * Callers:
 *     <none>
 * Callees:
 *     StopSonar @ 0x140287A2C (StopSonar.c)
 */

__int64 __fastcall EditionStopSonar(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx

  result = W32GetUserSessionState(a1, a2);
  if ( (*(_DWORD *)(result + 66804) & 0x4000) != 0 )
  {
    result = W32GetUserSessionState(v4, v3);
    if ( (*(_DWORD *)(result + 43032) & 0x80u) != 0 )
    {
      EnterCrit(1LL, 0LL);
      if ( (*(_DWORD *)(W32GetUserSessionState(v6, v5) + 66804) & 0x4000) != 0 )
      {
        v8 = *(unsigned int *)(W32GetUserSessionState(v8, v7) + 43032);
        if ( (v8 & 0x80u) != 0LL )
        {
          StopSonar();
          if ( (*(_DWORD *)(W32GetUserSessionState(v10, v9) + 66804) & 0x4000) != 0 )
          {
            if ( *(_BYTE *)(W32GetUserSessionState(v8, v11) + 14335) )
              *(_BYTE *)(W32GetUserSessionState(v8, v12) + 14335) = 0;
          }
        }
      }
      return UserSessionSwitchLeaveCrit(v8);
    }
  }
  return result;
}
