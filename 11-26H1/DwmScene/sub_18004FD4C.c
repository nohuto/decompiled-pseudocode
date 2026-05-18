/*
 * XREFs of sub_18004FD4C @ 0x18004FD4C
 * Callers:
 *     sub_18004FFB0 @ 0x18004FFB0 (sub_18004FFB0.c)
 *     sub_18005005C @ 0x18005005C (sub_18005005C.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180025A84 @ 0x180025A84 (sub_180025A84.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18004FD4C(__m128 *a1, __m128 *a2)
{
  __m128 v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128 v7; // xmm0
  char *v8; // rdx
  unsigned int v9; // r8d
  __m128 *v10; // r9
  __int32 *v11; // rdi
  __int32 v12; // eax
  __int64 i; // rcx
  __m128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int32 v15; // [rsp+60h] [rbp-18h]
  __int32 v16; // [rsp+64h] [rbp-14h]
  void *v17; // [rsp+80h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1[28].m128_u64[0] + 128) || _mm_movemask_ps(_mm_cmpneq_ps(a1[31], *a2)) )
  {
    v4 = _mm_mul_ps(
           _mm_min_ps(_mm_max_ps(*a2, (__m128)xmmword_1800FA320), (__m128)xmmword_1800FA310),
           (__m128)xmmword_1800FA120);
    v5 = _mm_cvtps_epi32(_mm_shuffle_ps(v4, v4, 198));
    v6 = _mm_packs_epi32(v5, v5);
    v7 = (__m128)_mm_packus_epi16(v6, v6);
    v14 = _mm_shuffle_ps(v7, v7, 0);
    v15 = v14.m128_i32[0];
    v16 = v14.m128_i32[0];
    v8 = (char *)sub_18001C514(24576LL);
    v17 = v8;
    v9 = 0;
    v10 = &v14;
    do
    {
      v11 = (__int32 *)&v8[4096 * v9];
      v12 = v10->m128_i32[0];
      for ( i = 1024LL; i; --i )
        *v11++ = v12;
      ++v9;
      v10 = (__m128 *)((char *)v10 + 4);
    }
    while ( v9 < 6 );
    sub_180053894(a1[28].m128_u64[0], 32, 32, 0, 16, 0, 17, (__int64)v8, 24576, 0LL);
    a1[31].m128_i32[0] = a2->m128_i32[0];
    a1[31].m128_i32[1] = a2->m128_i32[1];
    a1[31].m128_i32[2] = a2->m128_i32[2];
    a1[31].m128_i32[3] = a2->m128_i32[3];
    sub_180025A84(&v17);
  }
  a1[33].m128_i32[0] = 1065353216;
}
