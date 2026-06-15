/*
 * XREFs of ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x18000E7D8
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002E644 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J66PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800C91E0 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18000CB9C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180010D90 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::CanBuildProcessingModesOnRawConnector(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // edi
  unsigned __int64 v4; // r13
  GUID *v6; // rbx
  unsigned int v7; // r14d
  __int64 SupportedConnectorModesInternal; // r8
  __int64 i; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  int *v12; // rbx
  BOOL v13; // r8d
  _QWORD *v15; // rdx
  int v16; // edi
  __int64 v17; // rsi
  GUID *v18; // r12
  __int64 v19; // r8
  int j; // eax
  __int64 v21; // rcx
  GUID *v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+28h] [rbp-18h]
  GUID v24; // [rsp+30h] [rbp-10h]
  unsigned int v25; // [rsp+80h] [rbp+40h]

  v25 = a3;
  v3 = a3;
  v4 = (int)a2;
  v6 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v7 = 0;
  v24 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(a1, a2, a3, 0LL);
  for ( i = 0LL; (int)i < *(_DWORD *)(SupportedConnectorModesInternal + 8); i = (unsigned int)(i + 1) )
  {
    v10 = (_QWORD *)(*(_QWORD *)SupportedConnectorModesInternal + 16LL * (int)i);
    v11 = *v10 - *(_QWORD *)&v24.Data1;
    if ( *v10 == *(_QWORD *)&v24.Data1 )
      v11 = v10[1] - *(_QWORD *)v24.Data4;
    if ( !v11 )
    {
      if ( (_DWORD)i != -1 )
      {
        if ( v4 >= *(_QWORD *)(a1 + 1456) )
        {
          _o_terminate(i, v10, SupportedConnectorModesInternal);
          __debugbreak();
          JUMPOUT(0x18000E981LL);
        }
        v12 = (int *)(*(_QWORD *)(a1 + 1464) + 96 * v4);
        v13 = v3 == 1
           || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(a1 + 1584))
           || (_DWORD)v4 == 3;
        SystemEffectDescriptor::GetSupportedProcessingModes(v12, (__int64)&v22, v13);
        v16 = 0;
        v17 = 0LL;
        v6 = v22;
        v18 = v22;
        while ( v16 < (int)v23 )
        {
          if ( v17 < 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)v15);
            __debugbreak();
          }
          v24 = *v18;
          v19 = EffectPack::GetSupportedConnectorModesInternal(a1, (unsigned int)v4, v25, 0LL);
          for ( j = 0; ; ++j )
          {
            if ( j >= *(_DWORD *)(v19 + 8) )
              goto LABEL_14;
            v15 = (_QWORD *)(*(_QWORD *)v19 + 16LL * j);
            v21 = *v15 - *(_QWORD *)&v24.Data1;
            if ( *v15 == *(_QWORD *)&v24.Data1 )
              v21 = v15[1] - *(_QWORD *)v24.Data4;
            if ( !v21 )
              break;
          }
          if ( j == -1 )
          {
LABEL_14:
            v7 = 1;
            goto LABEL_15;
          }
          ++v16;
          ++v17;
          ++v18;
        }
      }
      break;
    }
  }
LABEL_15:
  if ( v6 )
    free(v6);
  return v7;
}
