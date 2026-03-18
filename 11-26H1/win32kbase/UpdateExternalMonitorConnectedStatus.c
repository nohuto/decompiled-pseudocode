/*
 * XREFs of UpdateExternalMonitorConnectedStatus @ 0x140196570
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 * Callees:
 *     DrvIsExternalMonitorActive @ 0x140196634 (DrvIsExternalMonitorActive.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

int __fastcall UpdateExternalMonitorConnectedStatus(char a1)
{
  __int64 UserSessionState; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // ebx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  _BYTE v11[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  InputBuffer = 0LL;
  v13 = 0;
  v11[0] = 0;
  LODWORD(UserSessionState) = DrvIsExternalMonitorActive(v11);
  if ( (int)UserSessionState >= 0 )
  {
    v6 = v11[0];
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    if ( *(_DWORD *)(UserSessionState + 600) != v6 || a1 )
    {
      *(_DWORD *)(W32GetUserSessionState(v8, v7, v9) + 600) = v6;
      LODWORD(InputBuffer) = 23;
      LOBYTE(v13) = v6;
      LODWORD(UserSessionState) = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
    }
  }
  return UserSessionState;
}
