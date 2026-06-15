/*
 * XREFs of ?QueryInterface@CCompositeSystemEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005D9C0
 * Callers:
 *     ?QueryInterface@CCompositeSystemEffect@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014FC90 (-QueryInterface@CCompositeSystemEffect@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014FCA0 (-QueryInterface@CCompositeSystemEffect@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014FCB0 (-QueryInterface@CCompositeSystemEffect@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014FCC0 (-QueryInterface@CCompositeSystemEffect@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014FCD0 (-QueryInterface@CCompositeSystemEffect@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014FCE0 (-QueryInterface@CCompositeSystemEffect@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014FCF0 (-QueryInterface@CCompositeSystemEffect@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180049230 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??$ChainedAposSupportInterface@UIApoAcousticEchoCancellation@@@CCompositeSystemEffect@@AEAA_NXZ @ 0x18005DAEC (--$ChainedAposSupportInterface@UIApoAcousticEchoCancellation@@@CCompositeSystemEffect@@AEAA_NXZ.c)
 *     ??$ChainedAposSupportInterface@UIApoAuxiliaryInputConfiguration@@@CCompositeSystemEffect@@AEAA_NXZ @ 0x18005DB78 (--$ChainedAposSupportInterface@UIApoAuxiliaryInputConfiguration@@@CCompositeSystemEffect@@AEAA_N.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18014F260 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioSystemEffects2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::QueryInterface(
        CCompositeSystemEffect *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  char v8; // al
  __int64 v10; // rax
  const struct _GUID *v11; // rcx
  int CanCastTo; // edi

  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
  v7 = 0;
  if ( v6 )
  {
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
    if ( v10 )
      goto LABEL_10;
    v8 = CCompositeSystemEffect::ChainedAposSupportInterface<IApoAuxiliaryInputConfiguration>();
  }
  else
  {
    v8 = CCompositeSystemEffect::ChainedAposSupportInterface<IApoAcousticEchoCancellation>();
  }
  if ( !v8 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
LABEL_10:
  *a3 = 0LL;
  if ( a2->Data1
    || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( InlineIsEqualGUID(a2, &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee)
      || (this = (CCompositeSystemEffect *)((char *)this + 8),
          InlineIsEqualGUID(v11, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10)) )
    {
      *a3 = this;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectPreferredFormatSupport>::CanCastTo(
                    (char *)this + 8,
                    a2,
                    a3);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = this;
  (*(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)this + 8LL))(this);
  return v7;
}
