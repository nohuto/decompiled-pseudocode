/*
 * XREFs of ReadInputHapticSettings @ 0x1401DF5F0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400F060C (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadDWORDSettingValue @ 0x1401DF534 (ReadDWORDSettingValue.c)
 *     ReadQWORDSettingValue @ 0x1401DF80C (ReadQWORDSettingValue.c)
 *     ValidateQWORDDoubleRange @ 0x1401DF8FC (ValidateQWORDDoubleRange.c)
 */

__int64 ReadInputHapticSettings()
{
  void *PointerDeviceConfigurationKey; // rdi
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  __int64 UserSessionState; // rax
  int v5; // ebx
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v9; // [rsp+30h] [rbp+10h] BYREF

  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(10LL, 0x20019u);
  UserSessionState = W32GetUserSessionState(v2, v1, v3);
  v5 = 0;
  v6 = UserSessionState;
  if ( !PointerDeviceConfigurationKey )
    return 0LL;
  LODWORD(v9) = *(_DWORD *)(UserSessionState + 18568);
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"PenFeedbackEnabled", &v9);
  v7 = (_DWORD)v9 == 0;
  LODWORD(v9) = *(_DWORD *)(v6 + 18572);
  *(_DWORD *)(v6 + 18568) = !v7;
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"PenInteractionFeedbackEnabled", &v9);
  *(_DWORD *)(v6 + 18572) = v9 != 0;
  LODWORD(v9) = *(_DWORD *)(v6 + 18576);
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"PenInkFeedbackEnabled", &v9);
  *(_DWORD *)(v6 + 18576) = v9 != 0;
  v9 = *(_QWORD *)(v6 + 18584);
  ReadQWORDSettingValue(PointerDeviceConfigurationKey);
  *(_QWORD *)(v6 + 18584) = ValidateQWORDDoubleRange(v9);
  LODWORD(v9) = *(_DWORD *)(v6 + 18592);
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"TouchpadFeedbackEnabled", &v9);
  *(_DWORD *)(v6 + 18592) = v9 != 0;
  v9 = *(_QWORD *)(v6 + 18600);
  ReadQWORDSettingValue(PointerDeviceConfigurationKey);
  *(_QWORD *)(v6 + 18600) = ValidateQWORDDoubleRange(v9);
  LODWORD(v9) = *(_DWORD *)(v6 + 18608);
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"MouseFeedbackEnabled", &v9);
  LOBYTE(v5) = (_DWORD)v9 != 0;
  v9 = *(_QWORD *)(v6 + 18616);
  *(_DWORD *)(v6 + 18608) = v5;
  ReadQWORDSettingValue(PointerDeviceConfigurationKey);
  *(_QWORD *)(v6 + 18616) = ValidateQWORDDoubleRange(v9);
  ZwClose(PointerDeviceConfigurationKey);
  return 1LL;
}
