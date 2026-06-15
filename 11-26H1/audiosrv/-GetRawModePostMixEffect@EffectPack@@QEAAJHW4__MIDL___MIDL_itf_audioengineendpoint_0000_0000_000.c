/*
 * XREFs of ?GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800804AC
 * Callers:
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F84C (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18004CFF8 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180139B8C (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MID.c)
 */

__int64 __fastcall EffectPack::GetRawModePostMixEffect(
        EffectPack *this,
        __int64 a2,
        __int64 a3,
        struct ICompositeSystemEffect **a4,
        struct IAudioProcessingObject **a5)
{
  unsigned int v5; // ebx
  int v7; // r14d
  GUID v10; // [rsp+60h] [rbp-28h] BYREF

  v5 = 0;
  v7 = a3;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, (unsigned int)a3, a3) )
  {
    v10 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    if ( SystemEffectDescriptor::IsModeSupportedForStreaming((__int64)this + 2016, (__m128i *)&v10, 1) )
    {
      v10 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(
                             this,
                             (char *)this + 2016,
                             2LL,
                             1LL,
                             &v10,
                             0,
                             0,
                             v7,
                             a4,
                             a5,
                             0LL);
    }
  }
  return v5;
}
