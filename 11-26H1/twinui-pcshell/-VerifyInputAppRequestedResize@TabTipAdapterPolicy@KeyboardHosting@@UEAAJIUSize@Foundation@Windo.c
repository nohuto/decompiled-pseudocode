/*
 * XREFs of ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x180485280
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801D4400 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x18024E054 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ @ 0x180476260 (-GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x180476314 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  float v7; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  LONG v12; // eax
  float v13; // xmm1_4
  LONG v14; // eax
  float v15; // xmm2_4
  HMONITOR v16; // rdi
  int v18; // r8d
  int v19; // r9d
  int v20; // r12d
  int v21; // edx
  float v22; // xmm2_4
  int v23; // r10d
  float v24; // xmm0_4
  float v25; // xmm2_4
  LONG v26; // ecx
  LONG v27; // eax
  LONG v28; // edx
  int v29; // r9d
  __m128i v30; // xmm1
  RTL_SRWLOCK *v31; // rcx
  KeyboardHosting::MonitorInformation *v32; // rax
  int v33; // r8d
  int v34; // r9d
  int v35; // r15d
  int v36; // edx
  float v37; // xmm2_4
  int v38; // r12d
  float v39; // xmm6_4
  LONG top; // ecx
  LONG v41; // eax
  LONG left; // edx
  _BYTE v43[8]; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+38h] [rbp-C8h]
  LONG v45; // [rsp+3Ch] [rbp-C4h]
  LONG v46; // [rsp+40h] [rbp-C0h]
  int v47; // [rsp+44h] [rbp-BCh]
  int v48; // [rsp+48h] [rbp-B8h]
  RECT rc; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v50[24]; // [rsp+90h] [rbp-70h] BYREF
  LONG v51; // [rsp+A8h] [rbp-58h]
  LONG v52; // [rsp+ACh] [rbp-54h]
  int v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B4h] [rbp-4Ch]
  int v55; // [rsp+B8h] [rbp-48h]

  v7 = *a4;
  v9 = a4[1];
  *(_QWORD *)&rc.left = a3;
  v10 = *(float *)&a3;
  v11 = *((float *)&a3 + 1);
  v12 = (int)v7;
  *a7 = 0;
  v13 = v7 + a4[2];
  rc.left = v12;
  v14 = (int)v9;
  v15 = v9 + a4[3];
  rc.top = v14;
  *(_OWORD *)a6 = 0LL;
  rc.right = (int)v13;
  rc.bottom = (int)v15;
  v16 = MonitorFromRect(&rc, 0);
  if ( !v16 )
    return 2147549183LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    v32 = KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v50, v16);
    KeyboardHosting::MonitorInformation::GetSnapshot((__int64)v32, (__int64)v43);
    v33 = v47;
    v34 = v48;
    v35 = _mm_cvtsi128_si32((__m128i)rc);
    v36 = v45 - v47;
    v37 = (float)v44;
    if ( v45 - v47 < 0 )
      v36 = v47 - v45;
    v38 = v46 - v48;
    if ( v46 - v48 < 0 )
      v38 = v48 - v46;
    v39 = (float)(v11 * v37) / 100.0;
    if ( (int)(float)((float)(v37 * v10) / 100.0) < v36 )
      v36 = (int)(float)((float)(v37 * v10) / 100.0);
    if ( (int)v39 < v38 )
      v38 = (int)v39;
    if ( v35 + v36 < v47 )
      v33 = v35 + v36;
    if ( v38 + rc.top < v48 )
      v34 = v38 + rc.top;
    top = rc.top;
    if ( a5 )
    {
      left = rc.left;
    }
    else
    {
      v41 = v33 - v36;
      left = rc.left;
      if ( v35 >= v41 )
        left = v41;
      if ( rc.top >= v34 - v38 )
        top = v34 - v38;
    }
    if ( left <= v45 )
      left = v45;
    if ( top <= v46 )
      top = v46;
    if ( left == v35
      && v33 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 8))
      && top == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 4))
      && v34 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 12)) )
    {
      return 0LL;
    }
    *a7 = 1;
    *(float *)a6 = (float)left;
    *(float *)(a6 + 4) = (float)top;
    *(float *)(a6 + 8) = (float)(v33 - left);
    *(float *)(a6 + 12) = (float)(v34 - top);
    if ( KeyboardHosting::MonitorInformation::GetMonitorHandle((RTL_SRWLOCK *)(a1 + 232)) == v16 )
      return 0LL;
    v31 = (RTL_SRWLOCK *)(a1 + 232);
  }
  else
  {
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v50, v16);
    v18 = v53;
    v19 = v54;
    v20 = _mm_cvtsi128_si32((__m128i)rc);
    v21 = v51 - v53;
    v22 = (float)v55;
    if ( v51 - v53 < 0 )
      v21 = v53 - v51;
    v23 = v52 - v54;
    if ( v52 - v54 < 0 )
      v23 = v54 - v52;
    v24 = (float)(v22 * v10) / 100.0;
    v25 = (float)(v22 * v11) / 100.0;
    if ( (int)v24 < v21 )
      v21 = (int)v24;
    if ( (int)v25 < v23 )
      v23 = (int)v25;
    if ( v21 + v20 < v53 )
      v18 = v21 + v20;
    if ( v23 + rc.top < v54 )
      v19 = v23 + rc.top;
    v26 = rc.top;
    if ( a5 )
    {
      v28 = rc.left;
    }
    else
    {
      v27 = v18 - v21;
      v28 = rc.left;
      if ( v20 >= v27 )
        v28 = v27;
      if ( rc.top >= v19 - v23 )
        v26 = v19 - v23;
    }
    if ( v28 <= v51 )
      v28 = v51;
    if ( v26 <= v52 )
      v26 = v52;
    if ( v28 == v20
      && v18 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 8))
      && v26 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 4))
      && v19 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 12)) )
    {
      return 0LL;
    }
    *a7 = 1;
    v29 = v19 - v26;
    v30 = _mm_cvtsi32_si128(v26);
    v31 = (RTL_SRWLOCK *)(a1 + 232);
    *(float *)a6 = (float)v28;
    *(_DWORD *)(a6 + 4) = _mm_cvtepi32_ps(v30).m128_u32[0];
    *(float *)(a6 + 8) = (float)(v18 - v28);
    *(float *)(a6 + 12) = (float)v29;
    if ( *(HMONITOR *)(a1 + 232) == v16 )
      return 0LL;
  }
  KeyboardHosting::MonitorInformation::SetMonitor(v31, v16);
  *(_BYTE *)(a1 + 808) = 1;
  return 0LL;
}
