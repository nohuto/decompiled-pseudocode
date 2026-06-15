/*
 * XREFs of ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x180102DB0
 * Callers:
 *     ??$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVDialogSession@@$$QEAPEAUIAudioProcess@@AEAPEBG@Z @ 0x180102A04 (--$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180055E50 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_::operator() @ 0x1800807A8 (_lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_--operator().c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800B0E88 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 *     ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1801028D4 (--$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CAT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DialogSession::RuntimeClassInitialize(
        DialogSession *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3)
{
  int EndpointCharacteristics; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v13; // [rsp+30h] [rbp-20h] BYREF
  struct CEndpointCharacteristics *v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IAudioProcess *v17; // [rsp+88h] [rbp+38h] BYREF
  const unsigned __int16 *v18; // [rsp+90h] [rbp+40h] BYREF
  int v19; // [rsp+98h] [rbp+48h] BYREF

  v18 = a3;
  v17 = a2;
  v14 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v14);
  EndpointCharacteristics = GetEndpointCharacteristics(a3, 0, &v14);
  v7 = EndpointCharacteristics;
  if ( EndpointCharacteristics >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v14 + 56LL))(v14) != 0;
    v13 = 18;
    v9 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    EndpointCharacteristics = Microsoft::WRL::Details::MakeAndInitialize<CVirtualAudioStream,CVirtualAudioStream,IAudioProcess * &,enum _AUDIO_STREAM_EXTENDED_CATEGORY,unsigned short const * &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 &>(
                                (_QWORD *)this + 2,
                                &v17,
                                &v13,
                                &v18,
                                (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *)&v19);
    v7 = EndpointCharacteristics;
    if ( EndpointCharacteristics >= 0 )
    {
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 3, (__int64)a2);
      v15[0] = 0LL;
      wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(v10, (__int64)v15);
      LOBYTE(v11) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v15[0] + 80LL))(v15[0], *((_QWORD *)this + 3), v11);
      v18 = (const unsigned __int16 *)*((_QWORD *)this + 2);
      lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_::operator()(&v18);
      *((_DWORD *)this + 8) = 1;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v15);
      v7 = 0;
      goto LABEL_9;
    }
    v8 = 26LL;
  }
  else
  {
    v8 = 23LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dialogsession.cpp",
    (const char *)(unsigned int)EndpointCharacteristics);
LABEL_9:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  return v7;
}
