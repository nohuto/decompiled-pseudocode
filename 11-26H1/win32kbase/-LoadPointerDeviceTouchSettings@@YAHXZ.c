/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400EE59C
 * Callers:
 *     GetTouchTimeFromCPLValue @ 0x140198990 (GetTouchTimeFromCPLValue.c)
 *     ReadPointerDeviceSettings @ 0x1401B41E0 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400F060C (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1400F0690 (ReadPointerDeviceCfgDWORDSetting.c)
 *     ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1401C1CA0 (ApiSetEditionOverrideDefaultTouchGestureSettings.c)
 */

__int64 __fastcall LoadPointerDeviceTouchSettings(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  void *PointerDeviceConfigurationKey; // rbp
  __int64 result; // rax
  __int64 v8; // rsi
  void *v9; // rax
  void *v10; // rdi
  _DWORD *v11; // rsi
  __int64 v12; // r14

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = UserSessionState;
  if ( !*(_DWORD *)(UserSessionState + 17640) )
  {
    ApiSetEditionOverrideDefaultTouchGestureSettings(*(_QWORD *)(UserSessionState + 17648));
    v5 = *(_QWORD *)(v4 + 17648);
    PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(2LL, 131097LL);
    if ( !PointerDeviceConfigurationKey )
      return 0LL;
    v11 = (_DWORD *)(v5 + 12);
    v12 = 16LL;
    do
    {
      if ( (int)ReadPointerDeviceCfgDWORDSetting(PointerDeviceConfigurationKey) < 0 )
        *v11 = -1;
      v5 += 16LL;
      v11 += 4;
      --v12;
    }
    while ( v12 );
    ZwClose(PointerDeviceConfigurationKey);
  }
  if ( !*(_DWORD *)(v4 + 17672) )
  {
    v8 = *(_QWORD *)(v4 + 17680);
    v9 = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(3LL, 131097LL);
    v10 = v9;
    if ( !v9 )
      return 0LL;
    if ( (int)ReadPointerDeviceCfgDWORDSetting(v9) < 0 )
      *(_DWORD *)(v8 + 12) = -1;
    ZwClose(v10);
  }
  *(_DWORD *)(v4 + 17640) = 1;
  result = 1LL;
  *(_DWORD *)(v4 + 17672) = 1;
  return result;
}
