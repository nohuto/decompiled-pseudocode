/*
 * XREFs of ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180038F10
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleEditControlPositionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000$$QEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180038C70 (--$HandleEditControlPositionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@W.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1802D2F54 (_o_ceilf_0.c)
 *     floorf @ 0x1802D2F60 (floorf.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlPositionChanged(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  __m128 v3; // xmm2
  float v7; // xmm1_4
  int ScaleFactorForMonitor; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // edx
  float v12; // xmm3_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm8_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm8_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm6_4
  float v28; // xmm1_4
  float v29; // xmm7_4
  float v30; // xmm2_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  int *v33; // rcx
  bool v34; // zf
  int v35; // eax
  __m128i v36; // xmm1
  float v37; // xmm1_4
  int v39; // [rsp+28h] [rbp-E0h]
  int v40[4]; // [rsp+38h] [rbp-D0h] BYREF
  HMONITOR v41; // [rsp+48h] [rbp-C0h]
  __int128 v42; // [rsp+50h] [rbp-B8h]
  RECT rcMonitor; // [rsp+60h] [rbp-A8h]
  int v44; // [rsp+70h] [rbp-98h] BYREF
  __int128 v45; // [rsp+74h] [rbp-94h]
  __int128 v46; // [rsp+84h] [rbp-84h]
  RECT rc; // [rsp+98h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v3 = (__m128)_mm_loadu_si128((const __m128i *)a2);
  *a3 = 0;
  v7 = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  rc.left = (int)v3.m128_f32[0];
  rc.top = (int)v7;
  rc.right = (int)(float)(_mm_shuffle_ps(v3, v3, 170).m128_f32[0] + v3.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v3, v3, 255).m128_f32[0] + v7);
  v44 = 100;
  v41 = MonitorFromRect(&rc, 2u);
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  v42 = 0LL;
  rcMonitor = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( GetMonitorInfoW(v41, &mi) )
  {
    ScaleFactorForMonitor = GetScaleFactorForMonitor(v41, &v44);
    if ( ScaleFactorForMonitor < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor,
        v39);
    v9 = v44;
    v10 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
    v11 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 4));
    rcMonitor = mi.rcMonitor;
    v12 = (float)v10;
    v13 = (float)v10;
    v14 = (float)v11;
    v15 = (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8)) - v10);
    v16 = (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 12)) - v11);
    if ( v44 )
    {
      v17 = (float)v44;
      v13 = (float)(v12 * 100.0) / (float)v44;
    }
    else
    {
      v17 = 0.0;
    }
    v18 = (float)v11;
    if ( v44 )
      v18 = (float)(v14 * 100.0) / v17;
    v19 = v15;
    if ( v44 )
      v19 = (float)(v15 * 100.0) / v17;
    v20 = v16;
    if ( v44 )
      v20 = (float)(v16 * 100.0) / v17;
    *(_QWORD *)&v42 = __PAIR64__(LODWORD(v18), LODWORD(v13));
    *((_QWORD *)&v42 + 1) = __PAIR64__(LODWORD(v20), LODWORD(v19));
    if ( v44 )
      v12 = (float)(v12 * 100.0) / v17;
    *(float *)&rc.left = v12;
    if ( v44 )
      v14 = (float)(v14 * 100.0) / v17;
    *(float *)&rc.top = v14;
    if ( v44 )
      v15 = (float)(v15 * 100.0) / v17;
    *(float *)&rc.right = v15;
    if ( v44 )
      v16 = (float)(v16 * 100.0) / v17;
    *(float *)&rc.bottom = v16;
    LODWORD(v45) = rc.left;
    LODWORD(v21) = _mm_shuffle_ps((__m128)rc, (__m128)rc, 85).m128_u32[0];
    LODWORD(v22) = _mm_shuffle_ps((__m128)rc, (__m128)rc, 170).m128_u32[0];
    LODWORD(v23) = _mm_shuffle_ps((__m128)rc, (__m128)rc, 255).m128_u32[0];
    *(_QWORD *)((char *)&v45 + 4) = __PAIR64__(LODWORD(v22), LODWORD(v21));
    *((float *)&v45 + 3) = v23;
    LODWORD(v46) = floorf(*(float *)&rc.left);
    DWORD1(v46) = floorf(v21);
    DWORD2(v46) = o_ceilf_0(v22);
    HIDWORD(v46) = o_ceilf_0(v23);
  }
  else
  {
    v9 = v44;
  }
  v24 = *(float *)a2;
  v25 = *(float *)a2;
  if ( v9 )
  {
    v26 = (float)v9;
    v25 = (float)(v25 * 100.0) / (float)v9;
  }
  else
  {
    v26 = 0.0;
  }
  v27 = *(float *)(a2 + 4);
  v28 = v27;
  if ( v9 )
    v28 = (float)(v27 * 100.0) / v26;
  v29 = *(float *)(a2 + 8);
  v30 = v29;
  if ( v9 )
    v30 = (float)(v29 * 100.0) / v26;
  v31 = *(float *)(a2 + 12);
  v32 = v31;
  if ( v9 )
    v32 = (float)(v31 * 100.0) / v26;
  v33 = (int *)(a1 + 176);
  *(float *)&rc.left = v25;
  v34 = v25 == *(float *)(a1 + 176);
  *(float *)&rc.top = v28;
  *(float *)&rc.right = v30;
  *(float *)&rc.bottom = v32;
  if ( !v34 || v28 != *(float *)(a1 + 180) || v30 != *(float *)(a1 + 184) || v32 != *(float *)(a1 + 188) )
  {
    v35 = rcMonitor.right - rcMonitor.left;
    v36 = _mm_cvtsi32_si128(rcMonitor.top);
    *(RECT *)v33 = rc;
    *(_BYTE *)(a1 + 556) = 0;
    LODWORD(v37) = _mm_cvtepi32_ps(v36).m128_u32[0];
    if ( (v24 != 0.0 || v27 != 0.0 || v29 != 0.0 || v31 != 0.0)
      && (v24 != (float)rcMonitor.left
       || v27 != v37
       || v29 != (float)v35
       || v31 != (float)(rcMonitor.bottom - rcMonitor.top)) )
    {
      *a3 = 3;
    }
  }
  v40[0] = v9;
  TouchKeyboardExperienceTelemetryLogger::HandleEditControlPositionChanged<float &,float &,float &,float &,unsigned int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    v33,
    (int *)(a1 + 180),
    (int *)(a1 + 184),
    (int *)(a1 + 188),
    v40,
    a3);
  return 0LL;
}
