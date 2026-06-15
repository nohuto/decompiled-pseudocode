/*
 * XREFs of ?DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180049CB0
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180008690 (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F84C (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8E8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180081CD0 (-CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPEAU3@@Z @ 0x180137B4C (-CheckForPreferredFormat@EffectPack@@QEAAJPEAUIAudioProcessingObject@@PEAUIAudioMediaType@@PEAPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectPack::DeriveOverridingMixFormatInternal(
        CEndpointCharacteristics **this,
        __int64 a2,
        struct _GUID *a3,
        struct IAudioMediaType *a4)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // esi
  int StreamEffect; // eax
  unsigned int v9; // ebx
  int Lfx; // eax
  const struct tWAVEFORMATEX *v11; // rax
  struct IAudioProcessingObject *v13[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp-20h] BYREF
  struct _GUID v15; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v6 = (int)a2;
  v13[0] = 0LL;
  if ( !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes((EffectPack *)this, a2, (__int64)a3) )
  {
    v13[0] = 0LL;
    Lfx = EffectPack::GetLfx((EffectPack *)this, v6, 0LL, v13);
    v9 = Lfx;
    if ( Lfx < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FD6,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)Lfx);
LABEL_12:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v13);
      return v9;
    }
LABEL_8:
    *(_QWORD *)&v14.Data1 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v14);
    EffectPack::CheckForPreferredFormat((EffectPack *)this, v13[0], a4, (struct IAudioMediaType **)&v14);
    if ( *(_QWORD *)&v14.Data1 )
      v11 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v14.Data1 + 40LL))(*(_QWORD *)&v14.Data1);
    else
      v11 = 0LL;
    v15 = *a3;
    CEndpointCharacteristics::CacheOverridingMixFormat(this[198], v6, &v15, v11);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
    v9 = 0;
    goto LABEL_12;
  }
  v13[0] = 0LL;
  v14 = *a3;
  StreamEffect = EffectPack::GetStreamEffect((EffectPack *)this, &v14, 0LL, v6, 0LL, v13, 0LL);
  v9 = StreamEffect;
  if ( StreamEffect >= 0 )
    goto LABEL_8;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FD2,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)StreamEffect);
  if ( v13[0] )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v13[0]->lpVtbl->Release)(v13[0]);
  return v9;
}
