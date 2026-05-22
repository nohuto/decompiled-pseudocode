/*
 * XREFs of ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x18017D5B8
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x18017E4C4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 */

void __fastcall ControllerProcessor::CalculateMarginPanDelta(ControllerProcessor *this)
{
  char v1; // si
  int *v3; // rdi
  BOOL v4; // eax
  DWORD TickCount; // eax
  DWORD v6; // r8d
  int v7; // ecx
  __m128 v8; // xmm0
  int v9; // ecx
  __m128 v10; // xmm3
  __m128 v11; // xmm1
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  float v14; // xmm0_4
  POINT pt; // [rsp+30h] [rbp+8h]

  v1 = *((_BYTE *)this + 420);
  ControllerProcessor::GetCursorPosition(this);
  v3 = (int *)((char *)this + 404);
  v4 = PtInRect((const RECT *)((char *)this + 404), pt);
  *((_BYTE *)this + 420) = !v4;
  if ( !v4 )
  {
    TickCount = GetTickCount();
    if ( v1 )
    {
      v6 = *((_DWORD *)this + 106);
    }
    else
    {
      *((_DWORD *)this + 106) = TickCount;
      v6 = TickCount;
    }
    v7 = *((_DWORD *)this + 102);
    if ( pt.y > v7 && (v7 = *((_DWORD *)this + 104), pt.y < v7) )
      v8 = 0LL;
    else
      v8 = (__m128)COERCE_UNSIGNED_INT((float)(v7 - pt.y));
    v9 = *v3;
    if ( pt.x > *v3 && (v9 = *((_DWORD *)this + 103), pt.x < v9) )
      v10 = 0LL;
    else
      v10 = (__m128)COERCE_UNSIGNED_INT((float)(v9 - pt.x));
    v11 = (__m128)LODWORD(FLOAT_1_0);
    v11.m128_f32[0] = fminf(1.0, fmaxf(0.0, (float)(int)(TickCount - v6) / 1000.0));
    v12 = _mm_mul_ps(
            _mm_mul_ps(_mm_div_ps(_mm_movelh_ps(_mm_unpacklo_ps(v10, v8), (__m128)0LL), (__m128)_xmm), (__m128)_xmm),
            _mm_shuffle_ps(v11, v11, 0));
    v13 = _mm_mul_ps((__m128)_mm_load_si128((const __m128i *)&_xmm), v12);
    v11.m128_f32[0] = _mm_shuffle_ps(v12, v12, 85).m128_f32[0] + *((float *)this + 108);
    *((float *)this + 107) = v12.m128_f32[0] + *((float *)this + 107);
    v14 = v13.m128_f32[0] + *((float *)this + 92);
    v13.m128_f32[0] = _mm_shuffle_ps(v13, v13, 85).m128_f32[0] + *((float *)this + 93);
    *((_DWORD *)this + 108) = v11.m128_i32[0];
    *((float *)this + 92) = v14;
    *((_DWORD *)this + 93) = v13.m128_i32[0];
  }
}
