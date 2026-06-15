/*
 * XREFs of ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800AD3A4
 * Callers:
 *     ??$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPerEndpointVolumeAudioSession@@@12@XZ @ 0x180086360 (--$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPerEndpointV.c)
 * Callees:
 *     ??0CAudioSession@@IEAA@XZ @ 0x180042740 (--0CAudioSession@@IEAA@XZ.c)
 */

CPerEndpointVolumeAudioSession *__fastcall CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(
        CPerEndpointVolumeAudioSession *this)
{
  CPerEndpointVolumeAudioSession *result; // rax

  CAudioSession::CAudioSession(this);
  *(_QWORD *)this = &CPerEndpointVolumeAudioSession::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CPerEndpointVolumeAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
  *((_QWORD *)this + 2) = &CPerEndpointVolumeAudioSession::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CPerEndpointVolumeAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
  *((_QWORD *)this + 4) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 5) = &CPerEndpointVolumeAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  *((_QWORD *)this + 115) = &CPerEndpointVolumeAudioSession::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 928), 0, 0);
  result = this;
  *((_QWORD *)this + 121) = 0LL;
  return result;
}
