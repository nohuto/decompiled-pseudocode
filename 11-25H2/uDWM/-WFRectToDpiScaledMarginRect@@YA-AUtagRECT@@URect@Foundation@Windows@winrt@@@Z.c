/*
 * XREFs of ?WFRectToDpiScaledMarginRect@@YA?AUtagRECT@@URect@Foundation@Windows@winrt@@@Z @ 0x1800E0BC8
 * Callers:
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800E07BC (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 *     ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E0B1C (-UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall WFRectToDpiScaledMarginRect(_DWORD *a1, __int64 a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  __m128 v8; // xmm3
  float v9; // xmm1_4

  v2 = (float)(int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 8.0);
  v3 = v2 + *(float *)a2;
  v4 = v2 + *(float *)(a2 + 4);
  v5 = (float)(2 * (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 8.0));
  *(float *)a2 = v3;
  v6 = *(float *)(a2 + 8);
  *(float *)(a2 + 4) = v4;
  v7 = *(float *)(a2 + 12) - v5;
  *(float *)(a2 + 8) = v6 - v5;
  *(float *)(a2 + 12) = v7;
  v8 = (__m128)_mm_loadu_si128((const __m128i *)a2);
  *a1 = (int)v8.m128_f32[0];
  v9 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
  a1[1] = (int)v9;
  a1[2] = (int)(float)(_mm_shuffle_ps(v8, v8, 170).m128_f32[0] + v8.m128_f32[0]);
  a1[3] = (int)(float)(_mm_shuffle_ps(v8, v8, 255).m128_f32[0] + v9);
  return a1;
}
