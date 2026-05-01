/*
 * XREFs of ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18024E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleEditControlPositionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000$$QEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BC56C (--$HandleEditControlPositionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@W.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180134510 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013E8FC (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18016A1FC (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?IsRectEqual@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@0@Z @ 0x18017E204 (-IsRectEqual@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@0@Z.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x18024E054 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x180476314 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlPositionChanged(
        __int64 a1,
        float *a2,
        WINBOOL *a3)
{
  __m128i v3; // xmm0
  HMONITOR CurrentMonitorWithRect; // rax
  const struct Windows::Foundation::Rect *v8; // r8
  const struct Windows::Foundation::Rect *v9; // rdx
  const struct Windows::Foundation::Rect *v10; // r8
  __int128 v11; // xmm4
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  int v14; // eax
  const struct Windows::Foundation::Rect *v15; // r8
  KeyboardHosting *v16; // rcx
  __m128i v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h]
  int v22; // [rsp+5Ch] [rbp-A4h]
  unsigned int v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+64h] [rbp-9Ch]
  int v25; // [rsp+68h] [rbp-98h]
  _BYTE v26[24]; // [rsp+A0h] [rbp-60h] BYREF
  int v27; // [rsp+B8h] [rbp-48h]
  unsigned int v28; // [rsp+BCh] [rbp-44h]
  int v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C4h] [rbp-3Ch]
  int v31; // [rsp+C8h] [rbp-38h]

  v3 = *(__m128i *)a2;
  *a3 = 0;
  v18 = v3;
  CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect((float *)v18.m128i_i32);
  KeyboardHosting::MonitorInformation::MonitorInformation(
    (KeyboardHosting::MonitorInformation *)v26,
    CurrentMonitorWithRect);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    KeyboardHosting::MonitorInformation::GetSnapshot(v26, v20);
    v18 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                             (float *)v18.m128i_i32,
                                             a2,
                                             v21));
    if ( KeyboardHosting::IsRectEqual((KeyboardHosting *)&v18, (const struct Windows::Foundation::Rect *)(a1 + 176), v8) )
      goto LABEL_9;
    v12 = _mm_cvtsi32_si128(v23);
    *(float *)v18.m128i_i32 = (float)v22;
    v13 = _mm_cvtsi32_si128(v24 - v22);
    v14 = v25 - v23;
  }
  else
  {
    v18 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                             (float *)v18.m128i_i32,
                                             a2,
                                             v31));
    if ( KeyboardHosting::IsRectEqual(
           (KeyboardHosting *)&v18,
           (const struct Windows::Foundation::Rect *)(a1 + 176),
           v15) )
    {
      goto LABEL_9;
    }
    v12 = _mm_cvtsi32_si128(v28);
    *(float *)v18.m128i_i32 = (float)v27;
    v13 = _mm_cvtsi32_si128(v29 - v27);
    v14 = v30 - v28;
  }
  *(_BYTE *)(a1 + 820) = 0;
  v18.m128i_i32[2] = _mm_cvtepi32_ps(v13).m128_u32[0];
  v18.m128i_i32[1] = _mm_cvtepi32_ps(v12).m128_u32[0];
  *(_OWORD *)(a1 + 176) = v11;
  *(float *)&v18.m128i_i32[3] = (float)v14;
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)a2, v9)
    && !KeyboardHosting::IsRectEqual(v16, (const struct Windows::Foundation::Rect *)&v18, v10) )
  {
    *a3 = 3;
  }
LABEL_9:
  v19[0] = (int)v10;
  TouchKeyboardExperienceTelemetryLogger::HandleEditControlPositionChanged<float &,float &,float &,float &,unsigned int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    (int *)(a1 + 176),
    (int *)(a1 + 180),
    (int *)(a1 + 184),
    (int *)(a1 + 188),
    v19,
    a3);
  return 0LL;
}
