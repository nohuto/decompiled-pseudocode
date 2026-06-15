/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIApoAcousticEchoCancellation2@@UIAudioProcessingObjectPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800835E0
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIApoAcousticEchoCancellation2@@UIAudioProcessingObjectPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIApoAcousticEchoCancellation2@@UIAudioProcessingObjectPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18007DC48 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClie.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180049230 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIApoAcousticEchoCancellation2@@UIAudioProcessingObjectPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800B9A00 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApoAuxiliaryInputConf.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  const struct _GUID *v5; // rcx
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  __int64 v9; // r9

  if ( *(_DWORD *)a2 == -41997527
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID((const struct _GUID *)a2, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56);
    v8 = 0;
    if ( IsEqualGUID || InlineIsEqualGUID(v5, &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17) )
      *v6 = v7;
    else
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::CanCastTo(
                             v7 + 8,
                             v9,
                             v6);
    return v8;
  }
}
