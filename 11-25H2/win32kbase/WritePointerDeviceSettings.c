/*
 * XREFs of WritePointerDeviceSettings @ 0x14019DB40
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 * Callees:
 *     SendCrosshairPropertiesChanged @ 0x1400A6FA0 (SendCrosshairPropertiesChanged.c)
 *     SetTouchInputStatus @ 0x1401B9600 (SetTouchInputStatus.c)
 *     WriteSettingValues @ 0x1401B9630 (WriteSettingValues.c)
 */

__int64 __fastcall WritePointerDeviceSettings(__int64 a1, unsigned int *a2, int a3)
{
  int v5; // esi
  unsigned int v6; // edi
  _DWORD *UserSessionState; // rax
  _DWORD *v8; // rbx
  int v9; // esi
  __int64 v10; // rdx

  v5 = a1;
  v6 = 0;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  v8 = UserSessionState + 4348;
  v9 = v5 - 147;
  if ( v9 )
  {
    if ( v9 == 32 )
    {
      v10 = (__int64)(UserSessionState + 4636);
      UserSessionState[4639] = *a2;
      v6 = 1;
      if ( !a3 || (v6 = WriteSettingValues(9LL, v10, 1LL)) != 0 )
      {
        if ( !v8[292] )
          v8[292] = 1;
        SendCrosshairPropertiesChanged(*a2, v10);
      }
    }
  }
  else
  {
    v6 = 1;
    UserSessionState[4351] = *a2 == 0;
    UserSessionState[4355] = a2[1];
    UserSessionState[4359] = a2[2];
    UserSessionState[4363] = a2[3];
    UserSessionState[4367] = a2[5];
    UserSessionState[4371] = a2[6];
    UserSessionState[4375] = a2[7];
    UserSessionState[4379] = a2[8];
    UserSessionState[4383] = a2[9];
    UserSessionState[4387] = a2[10];
    UserSessionState[4391] = a2[11];
    UserSessionState[4395] = a2[12];
    UserSessionState[4399] = a2[13];
    UserSessionState[4403] = a2[14];
    UserSessionState[4407] = a2[15];
    UserSessionState[4411] = a2[16];
    SetTouchInputStatus(a2[7]);
    if ( !a3 || (v6 = WriteSettingValues(2LL, v8, 16LL)) != 0 )
    {
      if ( !v8[64] )
        v8[64] = 1;
      v8[71] = a2[4];
      if ( a3 )
        v6 = WriteSettingValues(3LL, v8 + 68, 1LL);
      if ( v6 && !v8[72] )
        v8[72] = 1;
    }
  }
  return v6;
}
