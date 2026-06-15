/*
 * XREFs of ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F634
 * Callers:
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002EC70 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?PopulateControllableEffects@AudioModeEffectsWatcher@@AEAAJPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x18003FDBC (-PopulateControllableEffects@AudioModeEffectsWatcher@@AEAAJPEAUEndpointCharacteristicsDescriptor.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18004B5FC (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007D518 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180080E1C (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J66PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800C91E0 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18013A1BC (-GetSystemEffect@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@U_GUID@@HW.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18013A288 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800095A0 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010920 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180139B8C (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MID.c)
 */

__int64 __fastcall EffectPack::GetModeEffect(
        unsigned __int64 this,
        __m128i *a2,
        __int64 SupportedConnectorModesInternal,
        int a4,
        struct ICompositeSystemEffect **a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  unsigned int v7; // ebx
  ULONG_PTR v8; // r13
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // rax
  char *v13; // rdx
  __m128i v15; // [rsp+60h] [rbp-48h] BYREF
  __m128i *v16; // [rsp+B8h] [rbp+10h]
  int v17; // [rsp+C0h] [rbp+18h]

  v17 = SupportedConnectorModesInternal;
  v16 = a2;
  v7 = 0;
  v8 = a4;
  v9 = (struct _RTL_CRITICAL_SECTION *)this;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (unsigned __int64)a4 >= *(_QWORD *)(this + 1440) )
    goto LABEL_26;
  v10 = 96LL * a4;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *(_QWORD *)(this + 1448)));
  if ( (HANDLE)v8 >= v9[36].OwningThread )
    goto LABEL_26;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)((char *)v9[36].LockSemaphore + v10));
  if ( v8 >= v9[36].SpinCount )
    goto LABEL_26;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)&v9[37].DebugInfo[(unsigned __int64)v10
                                                                                               / 0x30]);
  if ( (HANDLE)v8 >= v9[40].OwningThread )
    goto LABEL_26;
  if ( *((_DWORD *)v9[40].LockSemaphore + v8) )
  {
    if ( v17 || (v15 = *v16, (unsigned int)EffectPack::IsAPOModeSupported(v9, 0LL, &v15, v8)) )
    {
      v15 = *v16;
      SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(
                                          v9,
                                          (struct _RTL_CRITICAL_SECTION *)(unsigned int)v8,
                                          0LL,
                                          0);
      this = 0LL;
      v11 = 1LL;
      while ( (int)this < *(_DWORD *)(SupportedConnectorModesInternal + 8) )
      {
        a2 = (__m128i *)(*(_QWORD *)SupportedConnectorModesInternal + 16LL * (int)this);
        v12 = a2->m128i_i64[0] - v15.m128i_i64[0];
        if ( a2->m128i_i64[0] == v15.m128i_i64[0] )
          v12 = a2->m128i_i64[1] - v15.m128i_i64[1];
        if ( !v12 )
        {
          if ( (_DWORD)this != -1 )
            goto LABEL_20;
          break;
        }
        this = (unsigned int)(this + 1);
      }
      v11 = 0LL;
LABEL_20:
      if ( (HANDLE)v8 < v9[36].OwningThread )
      {
        v13 = (char *)v9[36].LockSemaphore + v10;
        v15 = *v16;
        return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(
                               v9,
                               v13,
                               2LL,
                               v11,
                               &v15,
                               v17,
                               0,
                               v8,
                               a5,
                               a6,
                               a7);
      }
LABEL_26:
      _o_terminate(this, a2, SupportedConnectorModesInternal);
      __debugbreak();
      JUMPOUT(0x18000F846LL);
    }
  }
  return v7;
}
