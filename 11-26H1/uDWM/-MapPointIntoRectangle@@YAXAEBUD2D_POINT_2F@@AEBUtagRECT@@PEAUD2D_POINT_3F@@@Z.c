/*
 * XREFs of ?MapPointIntoRectangle@@YAXAEBUD2D_POINT_2F@@AEBUtagRECT@@PEAUD2D_POINT_3F@@@Z @ 0x1800C1BC4
 * Callers:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800C44F4 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MapPointIntoRectangle(const struct D2D_POINT_2F *a1, const struct tagRECT *a2, struct D2D_POINT_3F *a3)
{
  float x; // xmm1_4
  int v5; // eax
  __m128i v6; // xmm0
  int v7; // ecx
  float v8; // xmm1_4
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm1_4
  float top; // xmm0_4

  x = a1->x;
  v5 = 0;
  v6 = _mm_cvtsi32_si128(a2->left);
  if ( a2->right - a2->left >= 0 )
    v5 = a2->right - a2->left;
  v7 = a2->bottom - a2->top;
  *((_DWORD *)a3 + 2) = 0;
  v8 = x - _mm_cvtepi32_ps(v6).m128_f32[0];
  v9 = (float)v5;
  v10 = 0;
  if ( v7 >= 0 )
    v10 = v7;
  v11 = v8 / v9;
  top = (float)a2->top;
  *(float *)a3 = v11;
  *((float *)a3 + 1) = (float)(a1->y - top) / (float)v10;
}
