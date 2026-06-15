/*
 * XREFs of ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x1800AB550
 * Callers:
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18003B4A8 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18003BEF0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012E610 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012E804 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012E9E8 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012EBDC (-ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012ED50 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012EED8 (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012F060 (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

__int64 __fastcall SpatialAudio::GetMaxDynamicObjectCountPC(SpatialAudio *this, const struct _GUID *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = *(_QWORD *)this - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v2 = *((_QWORD *)this + 1) - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v2 )
    return 128LL;
  v3 = *(_QWORD *)this - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    v3 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
  if ( !v3 )
    return 20LL;
  v5 = *(_QWORD *)this - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v5 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v5 )
    return 128LL;
  v6 = *(_QWORD *)this - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
    v6 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v6 )
    return 128LL;
  v7 = *(_QWORD *)this - DTSX_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DTSX_HEADPHONES_SPATIAL_ENCODER )
    v7 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v7 )
    return 128LL;
  v8 = *(_QWORD *)this - DTSX_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DTSX_TWOSPEAKER_SPATIAL_ENCODER )
    v8 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v8 )
    return 128LL;
  v9 = *(_QWORD *)this - DTSX_HDMI_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DTSX_HDMI_SPATIAL_ENCODER )
    v9 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_HDMI_SPATIAL_ENCODER + 1);
  if ( !v9 )
    return 32LL;
  memcmp_0(this, &MULTICHANNEL_SPATIAL_ENCODER, 0x10uLL);
  return 0LL;
}
