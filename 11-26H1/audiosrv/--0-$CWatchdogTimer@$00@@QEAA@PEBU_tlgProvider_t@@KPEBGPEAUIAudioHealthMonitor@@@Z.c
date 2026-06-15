/*
 * XREFs of ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320
 * Callers:
 *     asm_GetApplicationSubmixes @ 0x180025B40 (asm_GetApplicationSubmixes.c)
 *     AudioSessionGetAllVolumes @ 0x180025CB0 (AudioSessionGetAllVolumes.c)
 *     PolicyConfigSetDefaultEndpoint @ 0x180025D70 (PolicyConfigSetDefaultEndpoint.c)
 *     AudioServerResetEndpoint @ 0x180025E00 (AudioServerResetEndpoint.c)
 *     AudioSessionSetDuckingPreference @ 0x180025F30 (AudioSessionSetDuckingPreference.c)
 *     s_pbmAllowMediaPlaybackForApp @ 0x180025FE0 (s_pbmAllowMediaPlaybackForApp.c)
 *     s_pbmUnregisterAppManagerNotification @ 0x1800260B0 (s_pbmUnregisterAppManagerNotification.c)
 *     s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x1800261A0 (s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     AudioSessionSetMute @ 0x180026230 (AudioSessionSetMute.c)
 *     s_pbmReportAppClosing @ 0x180026300 (s_pbmReportAppClosing.c)
 *     s_pbmRegisterAppManagerNotification @ 0x1800263B0 (s_pbmRegisterAppManagerNotification.c)
 *     AudioVolumeStepUp @ 0x1800264A0 (AudioVolumeStepUp.c)
 *     s_apmDoesPlatformSupportVolumeGroups @ 0x180026580 (s_apmDoesPlatformSupportVolumeGroups.c)
 *     AudioSessionManagerAddVolumeDuckNotification @ 0x180026610 (AudioSessionManagerAddVolumeDuckNotification.c)
 *     AudioSessionMeterGetMeteringChannelCount @ 0x180026710 (AudioSessionMeterGetMeteringChannelCount.c)
 *     AudioVolumeSetMasterVolumeLevelScalar @ 0x1800267C0 (AudioVolumeSetMasterVolumeLevelScalar.c)
 *     s_pbmReportApplicationState @ 0x1800268C0 (s_pbmReportApplicationState.c)
 *     AudioSessionGetStreamSwitchId @ 0x180026970 (AudioSessionGetStreamSwitchId.c)
 *     PolicyConfigReportSpatialLicenseChanged @ 0x180026A20 (PolicyConfigReportSpatialLicenseChanged.c)
 *     AudioVolumeGetStepInfo @ 0x180026AB0 (AudioVolumeGetStepInfo.c)
 *     AudioSessionGetDisplayOptions @ 0x180026B50 (AudioSessionGetDisplayOptions.c)
 *     AudioSessionGetIsComms @ 0x180026BE0 (AudioSessionGetIsComms.c)
 *     AudioVolumeSetMute @ 0x180026C90 (AudioVolumeSetMute.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180026D90 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     AudioSessionGetChannelVolume @ 0x180027060 (AudioSessionGetChannelVolume.c)
 *     AudioServerGetChannelCount @ 0x180027120 (AudioServerGetChannelCount.c)
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x180030220 (AudioServerGetMixFormat.c)
 *     PolicyConfigSetEndpointVisibility @ 0x18008CF80 (PolicyConfigSetEndpointVisibility.c)
 *     AudioSessionMeterGetChannelsPeakValues @ 0x1800B1160 (AudioSessionMeterGetChannelsPeakValues.c)
 *     asm_ApplicationSubmixContextDestroy @ 0x1800BD130 (asm_ApplicationSubmixContextDestroy.c)
 *     asm_ApplicationSubmixDestroy @ 0x1800BD1B0 (asm_ApplicationSubmixDestroy.c)
 *     asm_AudioServerGetApplicationSubmixPeriod @ 0x1800BD240 (asm_AudioServerGetApplicationSubmixPeriod.c)
 *     asm_AudioServerInitializeStream @ 0x1800BD340 (asm_AudioServerInitializeStream.c)
 *     asm_GetApplicationSubmixContext @ 0x1800BD500 (asm_GetApplicationSubmixContext.c)
 *     asm_GetApplicationSubmixContextForExcludedProcessTree @ 0x1800BD640 (asm_GetApplicationSubmixContextForExcludedProcessTree.c)
 *     asm_GetApplicationSubmixContextForProcessTree @ 0x1800BD780 (asm_GetApplicationSubmixContextForProcessTree.c)
 *     asm_GetApplicationSubmixContextFromPID @ 0x1800BD8C0 (asm_GetApplicationSubmixContextFromPID.c)
 *     asm_GetApplicationSubmixFromId @ 0x1800BDA00 (asm_GetApplicationSubmixFromId.c)
 *     s_afxCloseAudioEffectsWatcher @ 0x1800BFBB0 (s_afxCloseAudioEffectsWatcher.c)
 *     s_afxOpenAudioEffectsWatcher @ 0x1800BFC80 (s_afxOpenAudioEffectsWatcher.c)
 *     AudioSessionGetDuckingState @ 0x1800D0970 (AudioSessionGetDuckingState.c)
 *     AudioSessionGetInstanceId @ 0x1800D0A20 (AudioSessionGetInstanceId.c)
 *     AudioSessionGetLastActivation @ 0x1800D0AC0 (AudioSessionGetLastActivation.c)
 *     AudioSessionGetLastInactivation @ 0x1800D0B70 (AudioSessionGetLastInactivation.c)
 *     AudioSessionPropertyStoreCommit @ 0x1800D0C20 (AudioSessionPropertyStoreCommit.c)
 *     AudioSessionPropertyStoreGetAt @ 0x1800D0CC0 (AudioSessionPropertyStoreGetAt.c)
 *     AudioSessionPropertyStoreGetCount @ 0x1800D0D80 (AudioSessionPropertyStoreGetCount.c)
 *     AudioSessionPropertyStoreGetValue @ 0x1800D0E30 (AudioSessionPropertyStoreGetValue.c)
 *     AudioSessionPropertyStoreSetValue @ 0x1800D0EF0 (AudioSessionPropertyStoreSetValue.c)
 *     AudioSessionSetChannelVolume @ 0x1800D0FB0 (AudioSessionSetChannelVolume.c)
 *     AudioSessionSetGroupingParam @ 0x1800D1090 (AudioSessionSetGroupingParam.c)
 *     AudioSessionSetVolume @ 0x1800D1130 (AudioSessionSetVolume.c)
 *     AudioSessionSetWindowId @ 0x1800D1210 (AudioSessionSetWindowId.c)
 *     AudioSessionManagerAddAudioSessionClientNotification @ 0x1800D2D60 (AudioSessionManagerAddAudioSessionClientNotification.c)
 *     AudioSessionManagerDeleteAudioSessionClientNotification @ 0x1800D2E40 (AudioSessionManagerDeleteAudioSessionClientNotification.c)
 *     AudioSessionManagerDeleteVolumeDuckNotification @ 0x1800D2EE0 (AudioSessionManagerDeleteVolumeDuckNotification.c)
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800EFBD0 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 *     s_apmClearAllPersistedApplicationDefaultEndpoints @ 0x180104370 (s_apmClearAllPersistedApplicationDefaultEndpoints.c)
 *     s_apmSetPersistedDefaultAudioEndpoint @ 0x180104400 (s_apmSetPersistedDefaultAudioEndpoint.c)
 *     s_midiOpenPort @ 0x180105B50 (s_midiOpenPort.c)
 *     s_mmeNotifyDeviceAdded @ 0x180106C60 (s_mmeNotifyDeviceAdded.c)
 *     s_mmeNotifyDeviceRemoved @ 0x180106D50 (s_mmeNotifyDeviceRemoved.c)
 *     s_SetScreenReaderState @ 0x180109CB0 (s_SetScreenReaderState.c)
 *     s_apmRegisterProxyAudioProcess @ 0x180109DC0 (s_apmRegisterProxyAudioProcess.c)
 *     s_apmResetPreferredChatApplication @ 0x180109EB0 (s_apmResetPreferredChatApplication.c)
 *     s_apmSetDuckingGainForId @ 0x18010A040 (s_apmSetDuckingGainForId.c)
 *     s_apmSetLayoutGainForId @ 0x18010A170 (s_apmSetLayoutGainForId.c)
 *     s_apmSetPreferredChatApplication @ 0x18010A220 (s_apmSetPreferredChatApplication.c)
 *     s_apmSetVolumeGroupGainScalarForId @ 0x18010A370 (s_apmSetVolumeGroupGainScalarForId.c)
 *     s_apmSetVolumeGroupMuteForId @ 0x18010A480 (s_apmSetVolumeGroupMuteForId.c)
 *     s_getEmergencyCallbackMode @ 0x18010A580 (s_getEmergencyCallbackMode.c)
 *     s_getRingerVibrateState @ 0x18010A600 (s_getRingerVibrateState.c)
 *     s_pbmCastingAppStateChanged @ 0x18010A680 (s_pbmCastingAppStateChanged.c)
 *     s_pbmIsPlaying @ 0x18010A7A0 (s_pbmIsPlaying.c)
 *     s_pbmLaunchBackgroundTask @ 0x18010A840 (s_pbmLaunchBackgroundTask.c)
 *     s_pbmPlayToStreamStateChanged @ 0x18010A960 (s_pbmPlayToStreamStateChanged.c)
 *     s_pbmRegisterAppClosureNotification @ 0x18010AA00 (s_pbmRegisterAppClosureNotification.c)
 *     s_pbmRegisterAsBackgroundTask @ 0x18010AA90 (s_pbmRegisterAsBackgroundTask.c)
 *     s_pbmRegisterPlaybackManagerNotifications @ 0x18010AB70 (s_pbmRegisterPlaybackManagerNotifications.c)
 *     s_pbmUnregisterAppClosureNotification @ 0x18010ACF0 (s_pbmUnregisterAppClosureNotification.c)
 *     s_pbmUnregisterPlaybackManagerNotifications @ 0x18010AD80 (s_pbmUnregisterPlaybackManagerNotifications.c)
 *     s_pbmVoipCallStateChanged @ 0x18010AE90 (s_pbmVoipCallStateChanged.c)
 *     s_setEmergencyCallbackMode @ 0x18010AFD0 (s_setEmergencyCallbackMode.c)
 *     s_setRingerVibrateState @ 0x18010B070 (s_setRingerVibrateState.c)
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x18010D030 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 *     PolicyConfigGetDeviceFormatForConnector @ 0x18010D430 (PolicyConfigGetDeviceFormatForConnector.c)
 *     PolicyConfigGetEndpointExtendedSpatialLicenseInfo @ 0x18010D5C0 (PolicyConfigGetEndpointExtendedSpatialLicenseInfo.c)
 *     PolicyConfigGetMixFormat @ 0x18010D660 (PolicyConfigGetMixFormat.c)
 *     PolicyConfigGetProcessingPeriod @ 0x18010D7A0 (PolicyConfigGetProcessingPeriod.c)
 *     PolicyConfigGetShareMode @ 0x18010D850 (PolicyConfigGetShareMode.c)
 *     PolicyConfigIsSpatialFormatOwner @ 0x18010D8E0 (PolicyConfigIsSpatialFormatOwner.c)
 *     PolicyConfigResetDeviceFormat @ 0x18010D9E0 (PolicyConfigResetDeviceFormat.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x18010DAD0 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 *     PolicyConfigSetDeviceFormat @ 0x18010DBF0 (PolicyConfigSetDeviceFormat.c)
 *     PolicyConfigSetDeviceSpatialSettings @ 0x18010DE40 (PolicyConfigSetDeviceSpatialSettings.c)
 *     PolicyConfigSetEndpointAbilityToBeDefault @ 0x18010E140 (PolicyConfigSetEndpointAbilityToBeDefault.c)
 *     PolicyConfigSetMixedRealitySpatialAudioFormatPolicy @ 0x18010E1D0 (PolicyConfigSetMixedRealitySpatialAudioFormatPolicy.c)
 *     PolicyConfigSetProcessingPeriod @ 0x18010E2B0 (PolicyConfigSetProcessingPeriod.c)
 *     PolicyConfigSetShareMode @ 0x18010E3D0 (PolicyConfigSetShareMode.c)
 *     PolicyConfigValidateSpatialAudioSettings @ 0x18010E480 (PolicyConfigValidateSpatialAudioSettings.c)
 *     s_epmSetCurrentEffectPackForEndpoint @ 0x18010E560 (s_epmSetCurrentEffectPackForEndpoint.c)
 *     AudioServerCloseVpoContext @ 0x180114910 (AudioServerCloseVpoContext.c)
 *     AudioServerCreateStream @ 0x1801149A0 (AudioServerCreateStream.c)
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x180114EC0 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 *     AudioServerGetBufferSizeLimits @ 0x1801152E0 (AudioServerGetBufferSizeLimits.c)
 *     AudioServerGetChannelVolume @ 0x1801154B0 (AudioServerGetChannelVolume.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180115590 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetEndpointVpoContext @ 0x180115E50 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetStreamVpoContext @ 0x180116180 (AudioServerGetStreamVpoContext.c)
 *     AudioServerIsPostVolumeLoopbackSupported @ 0x180116240 (AudioServerIsPostVolumeLoopbackSupported.c)
 *     AudioServerPreStartStream @ 0x1801163E0 (AudioServerPreStartStream.c)
 *     AudioServerRequestSpatialDynamicObjects @ 0x1801165D0 (AudioServerRequestSpatialDynamicObjects.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x180116690 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAudioEffect @ 0x180116980 (AudioServerSetAudioEffect.c)
 *     AudioServerSetChannelVolume @ 0x180116B10 (AudioServerSetChannelVolume.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x180116C10 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x180116D00 (AudioServerSetEchoCancellationRenderEndpoint.c)
 *     AudioServerSetLastBufferInProgress @ 0x180116E00 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x180116EE0 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x180117060 (AudioServerStartStreamAborted.c)
 *     AudioVolumeSetChannelVolumeLevel @ 0x18011B1B0 (AudioVolumeSetChannelVolumeLevel.c)
 *     AudioVolumeSetChannelVolumeLevelScalar @ 0x18011B2C0 (AudioVolumeSetChannelVolumeLevelScalar.c)
 * Callees:
 *     <none>
 */

struct _TP_TIMER **__fastcall CWatchdogTimer<1>::CWatchdogTimer<1>(
        struct _TP_TIMER **pv,
        struct _TP_TIMER *a2,
        unsigned int a3,
        struct _TP_TIMER *a4,
        struct _TP_TIMER *pftDueTime)
{
  __int64 v5; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax

  v5 = a3;
  *pv = 0LL;
  pv[1] = a2;
  CurrentThreadId = GetCurrentThreadId();
  pv[3] = a4;
  *((_DWORD *)pv + 4) = CurrentThreadId;
  pv[4] = pftDueTime;
  *((_BYTE *)pv + 40) = 0;
  *(struct _TP_TIMER **)((char *)pv + 44) = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    *pv = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _TP_TIMER *)(((unsigned __int64)(((unsigned __int128)(10000
                                                                               * v5
                                                                               * (__int128)0x5555555555555555LL) >> 64)
                                                          - 10000 * v5) >> 63)
                                      + ((__int64)(((unsigned __int128)(10000 * v5 * (__int128)0x5555555555555555LL) >> 64)
                                                 - 10000 * v5) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  return pv;
}
