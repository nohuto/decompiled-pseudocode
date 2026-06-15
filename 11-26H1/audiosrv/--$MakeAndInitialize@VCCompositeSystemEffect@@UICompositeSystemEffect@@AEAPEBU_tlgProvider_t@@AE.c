/*
 * XREFs of ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18014EC2C
 * Callers:
 *     _lambda_dec62a0f3d11fac13fbc690f673d9d9c_::operator() @ 0x1801373F0 (_lambda_dec62a0f3d11fac13fbc690f673d9d9c_--operator().c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180139B8C (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MID.c)
 *     ?CreateCompositeSystemEffect@@YAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4FormatChangePosition@@W4AUDIO_DIRECTION@@IPEBU_GUID@@PEAPEAUICompositeSystemEffect@@@Z @ 0x18014F30C (-CreateCompositeSystemEffect@@YAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_audioenginecore_0000_00.c)
 * Callees:
 *     ??0CCompositeSystemEffect@@QEAA@XZ @ 0x18006B740 (--0CCompositeSystemEffect@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CCompositeSystemEffect@@QEAAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4FormatChangePosition@@W4AUDIO_DIRECTION@@IPEBU_GUID@@@Z @ 0x18014FD70 (-RuntimeClassInitialize@CCompositeSystemEffect@@QEAAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_aud.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,_tlgProvider_t const * &,enum __MIDL___MIDL_itf_audioenginecore_0000_0000_0002 &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7)
{
  void *v11; // rax
  int v12; // edi
  CCompositeSystemEffect *v13; // rbx
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = operator new[](0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v11;
  if ( v11 )
  {
    v13 = CCompositeSystemEffect::CCompositeSystemEffect((CCompositeSystemEffect *)v11);
    v15 = 0LL;
    v12 = CCompositeSystemEffect::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      v12 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, _QWORD *))v13)(
              v13,
              &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee,
              a1);
      (*(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    else if ( v13 )
    {
      (*(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v15);
  return (unsigned int)v12;
}
