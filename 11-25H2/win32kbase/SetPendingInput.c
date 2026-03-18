/*
 * XREFs of SetPendingInput @ 0x1400E9010
 * Callers:
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 * Callees:
 *     EnterPowerCrit @ 0x1400E95D0 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9600 (LeavePowerCrit.c)
 */

__int64 __fastcall SetPendingInput(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterPowerCrit();
  if ( !*(_DWORD *)(W32GetUserSessionState(v3, v2) + 2692) )
  {
    *(_DWORD *)(W32GetUserSessionState(v5, v4) + 2696) = a1;
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 2692) = 1;
  }
  return LeavePowerCrit();
}
