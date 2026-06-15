/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800CDD9C
 * Callers:
 *     ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x1800CE0C8 (-GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ.c)
 *     s_apmSetVolumeGroupGainForId @ 0x18010A310 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x1800B31B4 (pow.c)
 */

// local variable allocation has failed, the output may be wrong!
float __fastcall ConvertDbToEngineVolume(double a1)
{
  if ( _mm_cvtsi128_si32(*(__m128i *)&a1) == -8388608 )
    return 0.0;
  else
    return pow(10.0, *(float *)&a1 / 20.0);
}
