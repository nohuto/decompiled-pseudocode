/*
 * XREFs of UserNotifyExternalMonitorConnectedStatus @ 0x1401D6AC8
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

int __fastcall UserNotifyExternalMonitorConnectedStatus(char a1, unsigned __int8 a2, int a3)
{
  int v4; // ebx
  __int64 UserSessionState; // rax
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  InputBuffer = 0LL;
  v4 = a2;
  v8 = 0;
  if ( a1 || (UserSessionState = W32GetUserSessionState(0, a2, a3), *(_DWORD *)(UserSessionState + 600) != v4) )
  {
    *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 600) = v4;
    LODWORD(InputBuffer) = 23;
    LOBYTE(v8) = a2;
    LODWORD(UserSessionState) = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
  }
  return UserSessionState;
}
