/*
 * XREFs of ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x180475B10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180036D58 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x180037220 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
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
  float v10; // xmm6_4
  float v11; // xmm7_4
  LONG v12; // eax
  float v13; // xmm1_4
  LONG v14; // eax
  float v15; // xmm2_4
  HMONITOR v16; // rax
  HMONITOR v17; // rdi
  int v19; // r8d
  int v20; // r9d
  int v21; // r14d
  int v22; // edx
  float v23; // xmm2_4
  int v24; // r12d
  float v25; // xmm0_4
  float v26; // xmm2_4
  signed int top; // ecx
  int v28; // eax
  int left; // edx
  int v30; // r9d
  __m128i v31; // xmm1
  KeyboardHosting::MonitorInformation *v32; // rcx
  RECT rc_8; // [rsp+28h] [rbp-81h] BYREF
  RECT v34; // [rsp+38h] [rbp-71h]
  _BYTE v35[24]; // [rsp+48h] [rbp-61h] BYREF
  int v36; // [rsp+60h] [rbp-49h]
  signed int v37; // [rsp+64h] [rbp-45h]
  int v38; // [rsp+68h] [rbp-41h]
  int v39; // [rsp+6Ch] [rbp-3Dh]
  int v40; // [rsp+70h] [rbp-39h]

  v7 = *a4;
  v9 = a4[1];
  *(_QWORD *)&rc_8.left = a3;
  v10 = *(float *)&a3;
  v11 = *((float *)&a3 + 1);
  v12 = (int)v7;
  *a7 = 0;
  v13 = v7 + a4[2];
  rc_8.left = v12;
  v14 = (int)v9;
  v15 = v9 + a4[3];
  rc_8.top = v14;
  *(_OWORD *)a6 = 0LL;
  rc_8.right = (int)v13;
  rc_8.bottom = (int)v15;
  v16 = MonitorFromRect(&rc_8, 0);
  v17 = v16;
  if ( !v16 )
    return 2147549183LL;
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v35, v16);
  v19 = v38;
  v20 = v39;
  v21 = _mm_cvtsi128_si32((__m128i)rc_8);
  v22 = v36 - v38;
  v34 = rc_8;
  v23 = (float)v40;
  if ( v36 - v38 < 0 )
    v22 = v38 - v36;
  v24 = v37 - v39;
  if ( v37 - v39 < 0 )
    v24 = v39 - v37;
  v25 = (float)(v23 * v10) / 100.0;
  v26 = (float)(v23 * v11) / 100.0;
  if ( (int)v25 < v22 )
    v22 = (int)v25;
  if ( (int)v26 < v24 )
    v24 = (int)v26;
  if ( v21 + v22 < v38 )
    v19 = v21 + v22;
  if ( v24 + rc_8.top < v39 )
    v20 = v24 + rc_8.top;
  top = v34.top;
  if ( a5 )
  {
    left = v34.left;
  }
  else
  {
    v28 = v19 - v22;
    left = v34.left;
    if ( v21 >= v28 )
      left = v28;
    if ( v34.top >= v20 - v24 )
      top = v20 - v24;
  }
  if ( left <= v36 )
    left = v36;
  if ( top <= v37 )
    top = v37;
  if ( left != v21
    || v19 != _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc_8, 8))
    || top != _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc_8, 4))
    || v20 != _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc_8, 12)) )
  {
    *a7 = 1;
    v30 = v20 - top;
    v31 = _mm_cvtsi32_si128(top);
    v32 = (KeyboardHosting::MonitorInformation *)(a1 + 232);
    *(float *)a6 = (float)left;
    *(_DWORD *)(a6 + 4) = _mm_cvtepi32_ps(v31).m128_u32[0];
    *(float *)(a6 + 8) = (float)(v19 - left);
    *(float *)(a6 + 12) = (float)v30;
    if ( *(HMONITOR *)(a1 + 232) != v17 )
    {
      *(_QWORD *)v32 = v17;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v32);
      *(_BYTE *)(a1 + 544) = 1;
    }
  }
  return 0LL;
}
