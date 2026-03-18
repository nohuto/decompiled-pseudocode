/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400B14CC
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1400A7F80 (ReadPointerDeviceSettings.c)
 *     GetTouchTimeFromCPLValue @ 0x1400AF8D0 (GetTouchTimeFromCPLValue.c)
 * Callees:
 *     ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1400B095C (ApiSetEditionOverrideDefaultTouchGestureSettings.c)
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400B2CA8 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1400B2D30 (ReadPointerDeviceCfgDWORDSetting.c)
 */

__int64 __fastcall LoadPointerDeviceTouchSettings(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdi
  void *PointerDeviceConfigurationKey; // rbp
  _DWORD *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rsi
  void *v10; // rax
  void *v11; // rdi
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = UserSessionState;
  if ( !*(_DWORD *)(UserSessionState + 17648) )
  {
    ApiSetEditionOverrideDefaultTouchGestureSettings(*(_QWORD *)(UserSessionState + 17656), v3);
    v5 = *(_QWORD *)(v4 + 17656);
    PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(2LL, 131097LL);
    if ( !PointerDeviceConfigurationKey )
      return 0LL;
    v7 = (_DWORD *)(v5 + 12);
    v8 = 16LL;
    do
    {
      if ( (int)ReadPointerDeviceCfgDWORDSetting(PointerDeviceConfigurationKey) < 0 )
        *v7 = -1;
      v5 += 16LL;
      v7 += 4;
      --v8;
    }
    while ( v8 );
    ZwClose(PointerDeviceConfigurationKey);
  }
  if ( !*(_DWORD *)(v4 + 17680) )
  {
    v9 = *(_QWORD *)(v4 + 17688);
    v10 = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(3LL, 131097LL);
    v11 = v10;
    if ( !v10 )
      return 0LL;
    if ( (int)ReadPointerDeviceCfgDWORDSetting(v10) < 0 )
      *(_DWORD *)(v9 + 12) = -1;
    ZwClose(v11);
  }
  *(_DWORD *)(v4 + 17648) = 1;
  result = 1LL;
  *(_DWORD *)(v4 + 17680) = 1;
  return result;
}
