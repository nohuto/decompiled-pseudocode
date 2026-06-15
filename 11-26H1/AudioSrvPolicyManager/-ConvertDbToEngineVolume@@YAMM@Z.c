/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001FE70
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x18001F8E0 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18003C5B0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180044920 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x1800482AC (--0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z.c)
 * Callees:
 *     pow @ 0x1800309D4 (pow.c)
 */

// local variable allocation has failed, the output may be wrong!
float __fastcall ConvertDbToEngineVolume(double a1)
{
  if ( _mm_cvtsi128_si32(*(__m128i *)&a1) == -8388608 )
    return 0.0;
  else
    return pow(10.0, *(float *)&a1 / 20.0);
}
