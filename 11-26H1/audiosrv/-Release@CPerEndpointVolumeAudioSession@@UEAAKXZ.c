/*
 * XREFs of ?Release@CPerEndpointVolumeAudioSession@@UEAAKXZ @ 0x180041640
 * Callers:
 *     ?Release@CPerEndpointVolumeAudioSession@@W7EAAKXZ @ 0x1800CF0A0 (-Release@CPerEndpointVolumeAudioSession@@W7EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ @ 0x1800CF0B0 (-Release@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ @ 0x1800CF0C0 (-Release@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ @ 0x1800CF0D0 (-Release@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ @ 0x1800CF0E0 (-Release@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ @ 0x1800CF0F0 (-Release@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPerEndpointVolumeAudioSession::Release(CPerEndpointVolumeAudioSession *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::Release(this);
}
