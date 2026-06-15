/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18014F260
 * Callers:
 *     ?QueryInterface@CCompositeSystemEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005D9C0 (-QueryInterface@CCompositeSystemEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800AE7BC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSyste.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180049230 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectPreferredFormatSupport>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r11

  if ( InlineIsEqualGUID(a2, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014)
      || InlineIsEqualGUID(v6, &GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097)
      || InlineIsEqualGUID(v10, &GUID_25385759_3236_4101_a943_25693dfb5d2d)
      || InlineIsEqualGUID(v11, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768) )
    {
      *v7 = v9;
    }
    else if ( InlineIsEqualGUID(v12, &GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3) )
    {
      *v13 = v14 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
