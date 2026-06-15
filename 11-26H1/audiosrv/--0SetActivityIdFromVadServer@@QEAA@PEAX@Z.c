/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180025ED4
 * Callers:
 *     AudioServerResetEndpoint @ 0x180025E00 (AudioServerResetEndpoint.c)
 *     AudioServerCreateStream @ 0x1801149A0 (AudioServerCreateStream.c)
 *     AudioServerGetAmbHeadTracking @ 0x180114E30 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x180114EC0 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 *     AudioServerGetAudioStreamInfo @ 0x1801150B0 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetChannelVolume @ 0x1801154B0 (AudioServerGetChannelVolume.c)
 *     AudioServerGetStreamVpoContext @ 0x180116180 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x180116340 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x1801163E0 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioStreamHandle @ 0x1801164C0 (AudioServerReleaseAudioStreamHandle.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x180116690 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x180116790 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x180116820 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1801168B0 (AudioServerSetAmbRotation.c)
 *     AudioServerSetAudioEffect @ 0x180116980 (AudioServerSetAudioEffect.c)
 *     AudioServerSetChannelVolume @ 0x180116B10 (AudioServerSetChannelVolume.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x180116C10 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x180116D00 (AudioServerSetEchoCancellationRenderEndpoint.c)
 *     AudioServerSetLastBufferInProgress @ 0x180116E00 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x180116EE0 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x180117060 (AudioServerStartStreamAborted.c)
 * Callees:
 *     <none>
 */

SetActivityIdFromVadServer *__fastcall SetActivityIdFromVadServer::SetActivityIdFromVadServer(
        SetActivityIdFromVadServer *this,
        _OWORD *a2)
{
  GUID v3; // xmm0

  if ( a2 )
    v3 = (GUID)a2[16];
  else
    v3 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)this = v3;
  *((GUID *)this + 1) = v3;
  EtwEventActivityIdControl(4LL, (char *)this + 16);
  return this;
}
