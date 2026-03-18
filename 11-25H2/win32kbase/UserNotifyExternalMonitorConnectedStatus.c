/*
 * XREFs of UserNotifyExternalMonitorConnectedStatus @ 0x1401B0F74
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int __fastcall UserNotifyExternalMonitorConnectedStatus(__int64 a1, __int64 a2)
{
  char v2; // di
  int v3; // ebx
  __int64 UserSessionState; // rax
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = a2;
  InputBuffer = 0LL;
  v3 = (unsigned __int8)a2;
  v7 = 0;
  if ( (_BYTE)a1 || (UserSessionState = W32GetUserSessionState(a1, a2), *(_DWORD *)(UserSessionState + 600) != v3) )
  {
    *(_DWORD *)(W32GetUserSessionState(a1, a2) + 600) = v3;
    LODWORD(InputBuffer) = 23;
    LOBYTE(v7) = v2;
    LODWORD(UserSessionState) = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
  }
  return UserSessionState;
}
