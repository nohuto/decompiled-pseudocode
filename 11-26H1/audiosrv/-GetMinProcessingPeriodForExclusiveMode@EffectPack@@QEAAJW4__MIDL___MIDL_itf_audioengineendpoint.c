/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000DA5C
 * Callers:
 *     ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x18000BE08 (-GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z.c)
 *     AudioServerGetDevicePeriod @ 0x18002B820 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000D0A0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D8C0 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::GetMinProcessingPeriodForExclusiveMode(
        CEndpointCharacteristics **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3)
{
  __int64 SupportedConnectorModesInternal; // r8
  int i; // ecx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  GUID v11; // xmm0
  struct tWAVEFORMATEX *v12; // rdx
  void *v13; // rcx
  int ConnectorFormatForProcessingMode; // edi
  LPVOID *v15; // r8
  const struct tWAVEFORMATEX *v16; // r15
  CEndpointCharacteristics *v17; // r8
  GUID v18; // xmm0
  CEndpointCharacteristics *v19; // r9
  int j; // ecx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rdi
  _QWORD *v24; // r14
  _QWORD *v25; // rcx
  __int64 v26; // rax
  const struct tWAVEFORMATEX ***v27; // rbx
  const struct tWAVEFORMATEX ***v28; // rsi
  __int64 v29; // rax
  void *v30; // rcx
  int k; // eax
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  void *v35; // rcx
  __int64 v36; // rcx
  struct _GUID v37; // [rsp+20h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-40h] BYREF
  GUID v39; // [rsp+40h] [rbp-30h]
  LPVOID *p_pv; // [rsp+50h] [rbp-20h]
  struct tWAVEFORMATEX *v41; // [rsp+58h] [rbp-18h] BYREF
  char v42; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  pv = 0LL;
  v39 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(this, 0LL, 0LL, 0LL);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(SupportedConnectorModesInternal + 8) )
      goto LABEL_8;
    v7 = (_QWORD *)(*(_QWORD *)SupportedConnectorModesInternal + 16LL * i);
    v8 = *v7 - *(_QWORD *)&v39.Data1;
    if ( *v7 == *(_QWORD *)&v39.Data1 )
      v8 = v7[1] - *(_QWORD *)v39.Data4;
    if ( !v8 )
      break;
  }
  if ( i != -1 )
    goto LABEL_11;
LABEL_8:
  v9 = EffectPack::GetSupportedConnectorModesInternal(this, 0LL, 0LL, 0LL);
  if ( *(_DWORD *)(v9 + 8) )
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v9,
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1 )
    {
      v11 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      goto LABEL_12;
    }
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v10,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      v11 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v36, 0);
      goto LABEL_12;
    }
LABEL_11:
    v11 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    goto LABEL_12;
  }
  v11 = GUID_00000000_0000_0000_0000_000000000000;
LABEL_12:
  v39 = v11;
  *a3 = 0LL;
  p_pv = &pv;
  v41 = 0LL;
  v42 = 1;
  v37 = v39;
  ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(
                                       this,
                                       eHostProcessConnector,
                                       &v37,
                                       &v41);
  if ( v42 )
  {
    v15 = p_pv;
    v13 = *p_pv;
    v12 = v41;
    *p_pv = v41;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x214D,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ConnectorFormatForProcessingMode,
      v37.Data1);
    v35 = pv;
    pv = 0LL;
    if ( v35 )
      CoTaskMemFree(v35);
    return (unsigned int)ConnectorFormatForProcessingMode;
  }
  else
  {
    v16 = (const struct tWAVEFORMATEX *)pv;
    *a3 = 30000LL;
    if ( !this[236] )
    {
      _o_terminate(v13, v12, v15);
      __debugbreak();
      JUMPOUT(0x18000DDC5LL);
    }
    v17 = this[237];
    v18 = v39;
    v37 = v39;
    v19 = this[198];
    for ( j = 0; j < *((_DWORD *)v17 + 4); ++j )
    {
      v21 = (_QWORD *)(*(_QWORD *)v17 + 16LL * j);
      v22 = *v21 - *(_QWORD *)&v37.Data1;
      if ( *v21 == *(_QWORD *)&v37.Data1 )
        v22 = v21[1] - *(_QWORD *)v37.Data4;
      if ( !v22 )
      {
        if ( j != -1 )
        {
          v37 = v39;
          for ( k = 0; ; ++k )
          {
            if ( k >= *((_DWORD *)v17 + 4) )
              goto LABEL_50;
            v33 = (_QWORD *)(*(_QWORD *)v17 + 16LL * k);
            v34 = *v33 - *(_QWORD *)&v37.Data1;
            if ( *v33 == *(_QWORD *)&v37.Data1 )
              v34 = v33[1] - *(_QWORD *)v37.Data4;
            if ( !v34 )
              break;
          }
          if ( k == -1 )
          {
LABEL_50:
            v18 = GUID_00000000_0000_0000_0000_000000000000;
            break;
          }
          if ( k < 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)v33);
            __debugbreak();
          }
          v18 = *(GUID *)(*((_QWORD *)v17 + 1) + 16LL * k);
        }
        break;
      }
    }
    v37 = v18;
    v23 = (_QWORD *)*((_QWORD *)v19 + 34);
    v24 = (_QWORD *)*((_QWORD *)v19 + 35);
    while ( v23 != v24 )
    {
      v25 = (_QWORD *)*v23;
      v26 = *(_QWORD *)*v23 - *(_QWORD *)&v37.Data1;
      if ( !v26 )
        v26 = v25[1] - *(_QWORD *)v37.Data4;
      if ( !v26 )
      {
        v27 = (const struct tWAVEFORMATEX ***)v25[2];
        v28 = (const struct tWAVEFORMATEX ***)v25[3];
        while ( v27 != v28 )
        {
          if ( (unsigned int)CompareWaveFormat(v16, **v27) )
          {
            v29 = (unsigned int)(int)((double)*((int *)*v27 + 4) * 10000000.0 / (double)(int)v16->nSamplesPerSec + 0.5);
            if ( v29 >= *a3 )
              v29 = *a3;
            *a3 = v29;
            goto LABEL_34;
          }
          ++v27;
        }
      }
      ++v23;
    }
LABEL_34:
    v30 = pv;
    pv = 0LL;
    if ( v30 )
      CoTaskMemFree(v30);
    return 0LL;
  }
}
