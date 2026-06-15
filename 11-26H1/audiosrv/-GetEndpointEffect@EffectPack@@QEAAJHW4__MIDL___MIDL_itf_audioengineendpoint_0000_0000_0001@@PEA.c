/*
 * XREFs of ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180011074
 * Callers:
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049E2C (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007D518 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18013A1BC (-GetSystemEffect@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@U_GUID@@HW.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18013A288 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180008980 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010920 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18004CFF8 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180139B8C (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MID.c)
 */

__int64 __fastcall EffectPack::GetEndpointEffect(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        __int64 a3,
        struct ICompositeSystemEffect **a4,
        struct IAudioProcessingObject **a5,
        struct IAudioSystemEffects2 **a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  struct _RTL_CRITICAL_SECTION_DEBUG *v11; // rcx
  unsigned int v12; // r14d
  __int64 v14; // rax
  GUID v15; // [rsp+60h] [rbp-58h] BYREF
  int v16; // [rsp+C8h] [rbp+10h]
  unsigned int v17; // [rsp+D0h] [rbp+18h]

  v17 = a3;
  v16 = a2;
  v6 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v9 = (int)a3;
  if ( (PRTL_CRITICAL_SECTION_DEBUG)(int)a3 >= this[36].DebugInfo )
    goto LABEL_19;
  v10 = 2LL * (int)a3;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 * 48 + *(_QWORD *)&this[36].LockCount));
  if ( (HANDLE)v9 >= this[36].OwningThread )
    goto LABEL_19;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)((char *)this[36].LockSemaphore + v10 * 48));
  if ( v9 >= this[36].SpinCount )
    goto LABEL_19;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)&this[37].DebugInfo[v10]);
  if ( (HANDLE)v9 >= this[40].OwningThread )
    goto LABEL_19;
  if ( !*((_DWORD *)this[40].LockSemaphore + v9) )
    return v6;
  if ( v16 )
  {
    v12 = v17;
LABEL_18:
    v14 = gsl::span<SystemEffectDescriptor,-1>::operator[](&this[36].SpinCount, v9);
    v15 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(
                           this,
                           v14,
                           3LL,
                           1LL,
                           &v15,
                           v16,
                           0,
                           v12,
                           a4,
                           a5,
                           a6);
  }
  if ( v9 >= this[36].SpinCount )
  {
LABEL_19:
    _o_terminate(this, a2, a3);
    __debugbreak();
    JUMPOUT(0x180011238LL);
  }
  v11 = &this[37].DebugInfo[v10];
  v15 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( (unsigned __int8)SystemEffectDescriptor::IsModeSupportedForStreaming(v11, &v15, 1LL) )
  {
    v12 = v17;
    if ( *(_DWORD *)(EffectPack::GetSupportedConnectorModesInternal(this, (struct _RTL_CRITICAL_SECTION *)v17, 0LL, 0)
                   + 8) <= 1u )
      goto LABEL_18;
  }
  return v6;
}
