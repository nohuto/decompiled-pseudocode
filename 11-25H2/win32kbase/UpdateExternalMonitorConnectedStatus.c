/*
 * XREFs of UpdateExternalMonitorConnectedStatus @ 0x14002AAE4
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 * Callees:
 *     DrvIsExternalMonitorActive @ 0x14002ABA4 (DrvIsExternalMonitorActive.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int __fastcall UpdateExternalMonitorConnectedStatus(char a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  InputBuffer = 0LL;
  v11 = 0;
  v9[0] = 0;
  LODWORD(UserSessionState) = DrvIsExternalMonitorActive(v9);
  if ( (int)UserSessionState >= 0 )
  {
    v5 = v9[0];
    UserSessionState = W32GetUserSessionState(v4, v3);
    if ( *(_DWORD *)(UserSessionState + 600) != v5 || a1 )
    {
      *(_DWORD *)(W32GetUserSessionState(v7, v6) + 600) = v5;
      LODWORD(InputBuffer) = 23;
      LOBYTE(v11) = v5;
      LODWORD(UserSessionState) = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
    }
  }
  return UserSessionState;
}
