/*
 * XREFs of ?GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18006CFD4
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

void __fastcall EffectPack::GetExclusiveModeProcessingModeConfiguration(
        struct _RTL_CRITICAL_SECTION *this,
        struct _RTL_CRITICAL_SECTION *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  int v7; // ebp
  __int64 SupportedConnectorModesInternal; // r8
  int i; // edx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  GUID v15; // xmm0
  GUID v16; // xmm0
  __int64 v17; // rcx
  GUID v18; // [rsp+20h] [rbp-38h]

  v7 = (int)a2;
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(this, a2, 0LL, 0);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(SupportedConnectorModesInternal + 8) )
      goto LABEL_8;
    v11 = (_QWORD *)(*(_QWORD *)SupportedConnectorModesInternal + 16LL * i);
    v12 = *v11 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *v11 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v12 = v11[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v12 )
      break;
  }
  if ( i == -1 )
  {
LABEL_8:
    v13 = EffectPack::GetSupportedConnectorModesInternal(
            this,
            (struct _RTL_CRITICAL_SECTION *)(v7 & (unsigned int)-(((v7 - 2) & 0xFFFFFFFD) != 0)),
            0LL,
            0);
    if ( !*(_DWORD *)(v13 + 8) )
    {
      v15 = GUID_00000000_0000_0000_0000_000000000000;
      goto LABEL_11;
    }
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v13,
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1 )
    {
      v15 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
LABEL_11:
      v18 = v15;
      v16 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      goto LABEL_13;
    }
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v14,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      v15 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v17, 0);
      goto LABEL_11;
    }
  }
  v16 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
LABEL_13:
  if ( a3 )
  {
    *a3 = v18;
    v16 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  if ( a4 )
  {
    *a4 = v16;
    v16 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  if ( a5 )
    *a5 = v16;
}
