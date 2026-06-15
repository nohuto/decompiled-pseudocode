/*
 * XREFs of ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800B89C0
 * Callers:
 *     AudioMeterGetMeteringChannelCount @ 0x180013D00 (AudioMeterGetMeteringChannelCount.c)
 *     AudioMeterGetChannelsPeakValues @ 0x180013ED0 (AudioMeterGetChannelsPeakValues.c)
 *     ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x1800142A0 (-StateCheckExpiredCallback@CAudioSession@@AEAAXXZ.c)
 *     AudioMeterGetPeakValue @ 0x1800144E0 (AudioMeterGetPeakValue.c)
 *     AudioSessionManagerGetAudioSessions @ 0x180014BD0 (AudioSessionManagerGetAudioSessions.c)
 *     s_tsSessionGetAudioProtocol @ 0x180014E20 (s_tsSessionGetAudioProtocol.c)
 *     AudioSessionDestroy @ 0x180015030 (AudioSessionDestroy.c)
 *     AudioSessionGetState @ 0x180015250 (AudioSessionGetState.c)
 *     AudioVolumeGetMasterVolumeLevel @ 0x180015430 (AudioVolumeGetMasterVolumeLevel.c)
 *     AudioVolumeGetMute @ 0x1800155F0 (AudioVolumeGetMute.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x1800157B0 (s_rtgGetDefaultAudioEndpoint.c)
 *     AudioVolumeConnect @ 0x180020900 (AudioVolumeConnect.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800219E0 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180021D80 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     AudioVolumeDisconnect @ 0x1800542B0 (AudioVolumeDisconnect.c)
 *     AudioVolumeGetMasterVolumeLevelScalar @ 0x1800565E0 (AudioVolumeGetMasterVolumeLevelScalar.c)
 *     AudioSessionGetVolume @ 0x180056960 (AudioSessionGetVolume.c)
 *     AudioVolumeGetChannelCount @ 0x180056BC0 (AudioVolumeGetChannelCount.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800ADC60 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 */

BOOL __fastcall wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(_DWORD *a1)
{
  if ( !a1[2] )
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)(*(_QWORD *)a1 + 8LL),
      *(const struct _tlgProvider_t *const *)(*(_QWORD *)a1 + 32LL),
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}
