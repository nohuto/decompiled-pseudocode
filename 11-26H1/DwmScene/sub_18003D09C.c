/*
 * XREFs of sub_18003D09C @ 0x18003D09C
 * Callers:
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18003AC54 @ 0x18003AC54 (sub_18003AC54.c)
 *     sub_18003BA5C @ 0x18003BA5C (sub_18003BA5C.c)
 *     sub_18003CD04 @ 0x18003CD04 (sub_18003CD04.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_18003D09C(__int64 a1, __m128 *a2)
{
  char v4; // bl
  __int64 *v5; // rax
  __m128 *v6; // rax
  __m128 v7; // xmm6
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h]
  __m128 v17; // [rsp+40h] [rbp-30h] BYREF
  __m128 v18; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  sub_18003D758();
  if ( *sub_180013644(a1, &v17) )
  {
    v5 = sub_180013644(a1, &v15);
    v4 = 1;
    v6 = sub_18003BA5C(*v5, &v18);
  }
  else
  {
    v14 = xmmword_1800FA7C0;
    v6 = (__m128 *)&v14;
  }
  v7 = (__m128)_mm_loadu_si128((const __m128i *)v6);
  if ( (v4 & 1) != 0 && v16 )
    sub_180010EC8(v16);
  if ( v17.m128_u64[1] )
    sub_180010EC8(v17.m128_i64[1]);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_add_ps(_mm_shuffle_ps(v7, v8, 64), v8);
  v10 = _mm_add_ps(_mm_shuffle_ps(v8, v9, 48), v9);
  v11 = _mm_shuffle_ps(v10, v10, 170);
  v12 = _mm_cmple_ps(v11, (__m128)xmmword_1800FA200);
  v17 = _mm_or_ps(
          _mm_andnot_ps(v12, _mm_div_ps(_mm_mul_ps(v7, (__m128)xmmword_1800FC2A0), v11)),
          _mm_and_ps(v12, (__m128)xmmword_1800FA320));
  v17 = *sub_18003AC54(&v18, a2, &v17);
  return sub_18003CD04(a1, &v17);
}
