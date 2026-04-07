/*
 * XREFs of ?AdjustFinalRectToPreserveAspectRatio@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA?AURect@Foundation@Windows@6@AEBU7896@0@Z @ 0x180087F88
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040774 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180088060 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

_OWORD *__fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::AdjustFinalRectToPreserveAspectRatio(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        float *a4)
{
  __int32 v5; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  __int128 v10; // [rsp+20h] [rbp-18h]

  COERCE_FLOAT(v5 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(*(_DWORD *)(a3 + 12) & v5) < 0.001 || (v7 = a4[3], COERCE_FLOAT(LODWORD(v7) & v5) < 0.001) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    *a2 = *(_OWORD *)a4;
  }
  else
  {
    v8 = *(float *)(a3 + 8) / *(float *)(a3 + 12);
    v10 = *(_OWORD *)a4;
    if ( (float)(a4[2] / v7) <= v8 )
      *((float *)&v10 + 2) = *((float *)&v10 + 2) + (float)((float)(v7 * v8) - a4[2]);
    else
      *((float *)&v10 + 3) = *((float *)&v10 + 3) + (float)((float)((float)(1.0 / v8) * a4[2]) - v7);
    *a2 = v10;
  }
  return a2;
}
