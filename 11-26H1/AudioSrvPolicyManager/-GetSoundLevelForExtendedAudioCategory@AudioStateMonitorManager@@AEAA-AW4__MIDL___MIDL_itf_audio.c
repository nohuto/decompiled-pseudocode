/*
 * XREFs of ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x180013324
 * Callers:
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180005674 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ?GetSoundLevel@AudioStateMonitorManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180025FF4 (-GetSoundLevel@AudioStateMonitorManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW.c)
 * Callees:
 *     ??0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEBG@Z @ 0x180012D54 (--0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180012D90 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 */

__int64 __fastcall AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        const unsigned __int16 *a4)
{
  int v5; // r9d
  unsigned int v6; // ebx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v7; // r8d
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12[7]; // [rsp+30h] [rbp-38h] BYREF
  float v13; // [rsp+70h] [rbp+8h] BYREF

  v5 = 24;
  if ( a3 )
    v5 = *a3;
  v6 = 2;
  if ( a2 )
    v7 = *a2 == 1;
  else
    v7 = eAll;
  CStreamPolicyVolumeClient::CStreamPolicyVolumeClient(
    (CStreamPolicyVolumeClient *)v12,
    *(struct IAudioProcess **)(a1 + 136),
    v7,
    v5,
    a4);
  v9 = *(_QWORD *)(v8 + 128);
  v13 = 1.0;
  GetPolicyVolumeForAudioStream(v9, v12, v10, &v13);
  if ( v13 < 1.0 )
    return v13 > 0.0;
  return v6;
}
