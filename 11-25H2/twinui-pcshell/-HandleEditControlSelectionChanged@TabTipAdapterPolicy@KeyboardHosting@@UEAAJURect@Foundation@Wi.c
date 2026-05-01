/*
 * XREFs of ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180036B80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180036D58 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ??$HandleEditControlSelectionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000$$QEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180036F80 (--$HandleEditControlSelectionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __m128 v3; // xmm6
  float v7; // xmm1_4
  HMONITOR v8; // rax
  HMONITOR v9; // rsi
  KeyboardHosting::MonitorInformation *v10; // rcx
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  int v18; // [rsp+30h] [rbp-30h] BYREF
  RECT rc; // [rsp+38h] [rbp-28h] BYREF

  v3 = (__m128)_mm_loadu_si128((const __m128i *)a2);
  if ( GetSystemMetrics(80) <= 1 )
  {
    v8 = MonitorFromWindow(0LL, 1u);
  }
  else
  {
    v7 = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
    rc.left = (int)v3.m128_f32[0];
    rc.top = (int)v7;
    rc.right = (int)(float)(_mm_shuffle_ps(v3, v3, 170).m128_f32[0] + v3.m128_f32[0]);
    rc.bottom = (int)(float)(v7 + _mm_shuffle_ps(v3, v3, 255).m128_f32[0]);
    v8 = MonitorFromRect(&rc, 2u);
  }
  v9 = v8;
  *(_QWORD *)(a1 + 232) = v8;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 232));
  v10 = (KeyboardHosting::MonitorInformation *)(a1 + 392);
  if ( *(HMONITOR *)(a1 + 392) != v9 )
  {
    *(_QWORD *)v10 = v9;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v10);
  }
  v11 = *(_DWORD *)(a1 + 272);
  v12 = *(float *)a2;
  if ( v11 )
  {
    v13 = (float)v11;
    v12 = (float)(v12 * 100.0) / (float)v11;
  }
  else
  {
    v13 = 0.0;
  }
  *(float *)&rc.left = v12;
  v14 = *(float *)(a2 + 4);
  if ( v11 )
    v14 = (float)(v14 * 100.0) / v13;
  v15 = *(float *)(a2 + 8);
  *(float *)&rc.top = v14;
  if ( v11 )
    v15 = (float)(v15 * 100.0) / v13;
  v16 = *(float *)(a2 + 12);
  *(float *)&rc.right = v15;
  if ( v11 )
    v16 = (float)(v16 * 100.0) / v13;
  *(float *)&rc.bottom = v16;
  *(RECT *)(a1 + 144) = rc;
  *(_OWORD *)(a1 + 160) = *(_OWORD *)a2;
  *a3 = 0;
  v18 = *(_DWORD *)(a1 + 272);
  TouchKeyboardExperienceTelemetryLogger::HandleEditControlSelectionChanged<float &,float &,float &,float &,unsigned int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    a1 + 144,
    a1 + 148,
    a1 + 152,
    a1 + 156,
    (__int64)&v18,
    (__int64)a3);
  return 0LL;
}
