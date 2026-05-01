/*
 * XREFs of ?HasHandheldScreenSize@@YA_NXZ @ 0x18000ADF8
 * Callers:
 *     IsGamingFullScreenExperienceSupported @ 0x18000E8A0 (IsGamingFullScreenExperienceSupported.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800067C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x18000B390 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000DD00 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18000DD20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60704660@@@details@wil@@QEAA_NXZ @ 0x18000DEB4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60704660@@@details@wil@@QEAA_NXZ.c)
 *     powf_0 @ 0x18000FE4E (powf_0.c)
 *     sqrtf_0 @ 0x18000FE5A (sqrtf_0.c)
 *     __security_check_cookie @ 0x18000FE80 (__security_check_cookie.c)
 */

char HasHandheldScreenSize(void)
{
  int IntegratedDisplaySize; // eax
  HDEVINFO ClassDevsW; // r14
  char v3; // di
  DWORD v4; // r15d
  HKEY v5; // rsi
  unsigned int v6; // r8d
  const char *v7; // r9
  unsigned int Value; // eax
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  float v12; // xmm7_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  unsigned int v20; // eax
  unsigned int v21; // r8d
  void *v22; // rdx
  unsigned int v23; // r8d
  const char *v24; // r9
  unsigned int v25; // r8d
  const char *v26; // r9
  unsigned int KeyType; // [rsp+28h] [rbp-E0h]
  DWORD cbData[2]; // [rsp+38h] [rbp-D0h] BYREF
  double DeviceInfoData[5]; // [rsp+40h] [rbp-C8h] BYREF
  BYTE Data[21]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v31; // [rsp+7Dh] [rbp-8Bh]
  unsigned __int8 v32; // [rsp+7Eh] [rbp-8Ah]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  DeviceInfoData[0] = 0.0;
  IntegratedDisplaySize = GetIntegratedDisplaySize(DeviceInfoData);
  if ( IntegratedDisplaySize >= 0 )
  {
    if ( DeviceInfoData[0] < 9.5 )
      return 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
      (const char *)(unsigned int)IntegratedDisplaySize);
  }
  ClassDevsW = SetupDiGetClassDevsW(&GUID_DEVCLASS_MONITOR, 0LL, 0LL, 2u);
  if ( ClassDevsW == (HDEVINFO)-1LL )
    return 0;
  v3 = 0;
  memset(&DeviceInfoData[1], 0, 32);
  LODWORD(DeviceInfoData[1]) = 32;
  v4 = 0;
  while ( SetupDiEnumDeviceInfo(ClassDevsW, v4, (PSP_DEVINFO_DATA)&DeviceInfoData[1]) )
  {
    v5 = SetupDiOpenDevRegKey(ClassDevsW, (PSP_DEVINFO_DATA)&DeviceInfoData[1], 1u, 0, 1u, 0x20019u);
    if ( v5 != HKEY_CURRENT_USER_LOCAL_SETTINGS|0x7FFFFFF8LL )
    {
      cbData[0] = 256;
      cbData[1] = 0;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60704660>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60704660>::GetImpl'::`2'::impl) )
      {
        Value = RegQueryValueExW(v5, L"EDID", 0LL, &cbData[1], Data, cbData);
        if ( Value )
        {
          v10 = Value;
          v11 = 103LL;
          goto LABEL_20;
        }
        v12 = (float)v31 * 0.39370099;
        v13 = (float)v32 * 0.39370099;
        if ( v12 > 0.0 && v13 > 0.0 )
        {
          v14 = powf_0(v13, 2.0);
          v15 = v14 + powf_0(v12, 2.0);
          if ( sqrtf_0(v15) < 9.5 )
            v3 = 1;
        }
      }
      else if ( RegQueryValueExW(v5, L"EDID", 0LL, &cbData[1], Data, cbData) )
      {
        v16 = (float)v31 * 0.39370099;
        v17 = (float)v32 * 0.39370099;
        if ( v16 > 0.0 && v17 > 0.0 )
        {
          v18 = powf_0(v17, 2.0);
          v19 = v18 + powf_0(v16, 2.0);
          if ( sqrtf_0(v19) < 9.5 )
            v3 = 1;
        }
      }
      else
      {
        v10 = 1LL;
        v11 = 120LL;
LABEL_20:
        wil::details::in1diag3::_Log_Win32(retaddr, (void *)v11, v9, (const char *)v10, KeyType);
      }
      v20 = RegCloseKey(v5);
      if ( v20 )
        wil::details::in1diag3::_Log_Win32(retaddr, (void *)0x88, v21, (const char *)v20, KeyType);
      goto LABEL_27;
    }
    wil::details::in1diag3::_Log_GetLastError(retaddr, (void *)0x5A, v6, v7);
LABEL_27:
    ++v4;
    if ( v3 )
      goto LABEL_31;
  }
  if ( GetLastError() != 259 )
    wil::details::in1diag3::Log_GetLastError(retaddr, v22, v23, v24);
LABEL_31:
  if ( SetupDiDestroyDeviceInfoList(ClassDevsW) )
    wil::details::in1diag3::_Log_GetLastError(retaddr, (void *)0x8C, v25, v26);
  return v3;
}
