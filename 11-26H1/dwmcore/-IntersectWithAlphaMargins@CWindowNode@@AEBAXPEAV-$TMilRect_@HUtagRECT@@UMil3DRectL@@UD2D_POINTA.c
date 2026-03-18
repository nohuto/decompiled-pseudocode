/*
 * XREFs of ?IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800E6948
 * Callers:
 *     ?GetAlphaMarginsRect@CWindowNode@@AEAA_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAV2@@Z @ 0x180268354 (-GetAlphaMarginsRect@CWindowNode@@AEAA_NAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZ.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CWindowNode::IntersectWithAlphaMargins(__m128i *a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int v5; // r11d
  int v6; // r10d
  int v7; // eax
  __int64 result; // rax
  _QWORD *v9; // rdx
  __m128i v10; // [rsp+20h] [rbp-18h]

  v4 = (unsigned int)a1[43].m128i_i64[1] - a1[42].m128i_i32[1];
  v5 = *(_OWORD *)&a1[43] + a1[42].m128i_i32[0];
  v10 = a1[43];
  v6 = a1[42].m128i_i32[2] + v10.m128i_i32[1];
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 12)) - a1[42].m128i_i32[3];
  if ( (int)v4 <= v5 )
    v4 = (unsigned int)v5;
  if ( v7 <= v6 )
    v7 = a1[42].m128i_i32[2] + v10.m128i_i32[1];
  if ( v5 > *a2 )
    *a2 = v5;
  if ( v6 > a2[1] )
    a2[1] = v6;
  if ( (int)v4 < a2[2] )
    a2[2] = v4;
  if ( v7 < a2[3] )
    a2[3] = v7;
  result = TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(a2, a2, v4, a4);
  if ( (_BYTE)result )
  {
    v9[1] = 0LL;
    *v9 = 0LL;
  }
  return result;
}
