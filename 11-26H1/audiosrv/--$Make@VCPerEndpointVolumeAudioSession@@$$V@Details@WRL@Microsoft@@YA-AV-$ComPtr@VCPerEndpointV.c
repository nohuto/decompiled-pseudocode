/*
 * XREFs of ??$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPerEndpointVolumeAudioSession@@@12@XZ @ 0x180086360
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIAudioSessionPolicyControl@@UIAudioSessionInfo@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioSessionInfoInternal@@UIAudioSessionDuckingControl@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180041650 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800AD3A4 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

volatile signed __int64 **__fastcall Microsoft::WRL::Details::Make<CPerEndpointVolumeAudioSession,>(
        volatile signed __int64 **a1)
{
  CPerEndpointVolumeAudioSession *v2; // rax
  CPerEndpointVolumeAudioSession *v3; // rdi
  CPerEndpointVolumeAudioSession *v4; // rdi

  *a1 = 0LL;
  v2 = (CPerEndpointVolumeAudioSession *)operator new[](0x3D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x3D0uLL);
    v4 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::Release(*a1);
    *a1 = (volatile signed __int64 *)v4;
  }
  return a1;
}
