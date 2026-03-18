/*
 * XREFs of WritePointerDeviceSettings @ 0x1401DF9A0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     SendCrosshairPropertiesChanged @ 0x14008D180 (SendCrosshairPropertiesChanged.c)
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400F060C (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     SetTouchInputStatus @ 0x1401DF8D0 (SetTouchInputStatus.c)
 *     ValidateQWORDDoubleRange @ 0x1401DF8FC (ValidateQWORDDoubleRange.c)
 *     WriteDWORDSettingValue @ 0x1401DF924 (WriteDWORDSettingValue.c)
 *     WriteQWORDSettingValue @ 0x1401DFCF4 (WriteQWORDSettingValue.c)
 *     WriteSettingValues @ 0x1401DFD70 (WriteSettingValues.c)
 */

__int64 __fastcall WritePointerDeviceSettings(int a1, __int64 a2, int a3)
{
  unsigned int v6; // esi
  _DWORD *UserSessionState; // rax
  int v8; // edx
  int v9; // r8d
  _DWORD *v10; // rbx
  int v11; // ebp
  int v12; // ebp
  void *PointerDeviceConfigurationKey; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r8d

  v6 = 0;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2, a3);
  v10 = UserSessionState + 4346;
  v11 = a1 - 147;
  if ( v11 )
  {
    v12 = v11 - 32;
    if ( v12 )
    {
      if ( v12 == 2 && (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
      {
        PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(10LL, 0x20006u);
        *((_OWORD *)v10 + 74) = *(_OWORD *)a2;
        *((_OWORD *)v10 + 75) = *(_OWORD *)(a2 + 16);
        *((_OWORD *)v10 + 76) = *(_OWORD *)(a2 + 32);
        *((_QWORD *)v10 + 154) = *(_QWORD *)(a2 + 48);
        v14 = *((_QWORD *)v10 + 150);
        v10[296] = *(_DWORD *)a2 != 0;
        v10[297] = *(_DWORD *)(a2 + 4) != 0;
        v10[298] = *(_DWORD *)(a2 + 8) != 0;
        v10[302] = *(_DWORD *)(a2 + 24) != 0;
        v10[306] = *(_DWORD *)(a2 + 40) != 0;
        v15 = ValidateQWORDDoubleRange(v14, 0.01, 1.0, 0.5);
        v16 = *((_QWORD *)v10 + 152);
        *((_QWORD *)v10 + 150) = v15;
        v17 = ValidateQWORDDoubleRange(v16, 0.01, 1.0, 0.5);
        v18 = *((_QWORD *)v10 + 154);
        *((_QWORD *)v10 + 152) = v17;
        *((_QWORD *)v10 + 154) = ValidateQWORDDoubleRange(v18, 0.01, 1.0, 0.5);
        v6 = 1;
        if ( a3 )
        {
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"PenFeedbackEnabled", v19);
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"PenInteractionFeedbackEnabled", v10[297]);
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"PenInkFeedbackEnabled", v10[298]);
          WriteQWORDSettingValue(PointerDeviceConfigurationKey);
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"TouchpadFeedbackEnabled", v10[302]);
          WriteQWORDSettingValue(PointerDeviceConfigurationKey);
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"MouseFeedbackEnabled", v10[306]);
          WriteQWORDSettingValue(PointerDeviceConfigurationKey);
        }
        ZwClose(PointerDeviceConfigurationKey);
      }
    }
    else
    {
      UserSessionState[4637] = *(_DWORD *)a2;
      v6 = 1;
      if ( !a3 || (v6 = WriteSettingValues(9LL, UserSessionState + 4634, 1LL)) != 0 )
      {
        if ( !v10[292] )
          v10[292] = 1;
        SendCrosshairPropertiesChanged(*(_DWORD *)a2);
      }
    }
  }
  else
  {
    v6 = 1;
    UserSessionState[4349] = *(_DWORD *)a2 == 0;
    UserSessionState[4353] = *(_DWORD *)(a2 + 4);
    UserSessionState[4357] = *(_DWORD *)(a2 + 8);
    UserSessionState[4361] = *(_DWORD *)(a2 + 12);
    UserSessionState[4365] = *(_DWORD *)(a2 + 20);
    UserSessionState[4369] = *(_DWORD *)(a2 + 24);
    UserSessionState[4373] = *(_DWORD *)(a2 + 28);
    UserSessionState[4377] = *(_DWORD *)(a2 + 32);
    UserSessionState[4381] = *(_DWORD *)(a2 + 36);
    UserSessionState[4385] = *(_DWORD *)(a2 + 40);
    UserSessionState[4389] = *(_DWORD *)(a2 + 44);
    UserSessionState[4393] = *(_DWORD *)(a2 + 48);
    UserSessionState[4397] = *(_DWORD *)(a2 + 52);
    UserSessionState[4401] = *(_DWORD *)(a2 + 56);
    UserSessionState[4405] = *(_DWORD *)(a2 + 60);
    UserSessionState[4409] = *(_DWORD *)(a2 + 64);
    SetTouchInputStatus(*(_DWORD *)(a2 + 28), v8, v9);
    if ( !a3 || (v6 = WriteSettingValues(2LL, v10, 16LL)) != 0 )
    {
      if ( !v10[64] )
        v10[64] = 1;
      v10[71] = *(_DWORD *)(a2 + 16);
      if ( a3 )
        v6 = WriteSettingValues(3LL, v10 + 68, 1LL);
      if ( v6 && !v10[72] )
        v10[72] = 1;
    }
  }
  return v6;
}
