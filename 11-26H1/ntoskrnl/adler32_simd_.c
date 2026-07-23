/*
 * XREFs of adler32_simd_ @ 0x14063A5E8
 * Callers:
 *     adler32_z @ 0x14063816C (adler32_z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall adler32_simd_(unsigned int a1, const __m128i *a2, unsigned __int64 a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // r10
  __m128i v9; // xmm0
  unsigned int v10; // edx
  __m128i v11; // xmm5
  __m128i v12; // xmm6
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm1
  __m128i v18; // xmm4
  int v19; // eax
  __m128i v20; // xmm1
  unsigned int v21; // ecx
  unsigned int v22; // r13d
  unsigned int v23; // r12d
  unsigned int v24; // r15d
  unsigned int v25; // r14d
  unsigned int v26; // ebp
  unsigned int v27; // esi
  unsigned int v28; // edi
  unsigned int v29; // ebx
  int v30; // r10d
  int v31; // r9d
  int v32; // r8d
  int v33; // edx
  int v34; // ecx
  int v35; // r11d
  unsigned int v36; // r8d
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v40; // [rsp+60h] [rbp+8h]
  __int8 *v41; // [rsp+68h] [rbp+10h]
  unsigned __int64 v42; // [rsp+70h] [rbp+18h]
  unsigned int v43; // [rsp+78h] [rbp+20h]

  v4 = (unsigned __int16)a1;
  v5 = HIWORD(a1);
  v6 = a3 >> 5;
  v40 = v5;
  v8 = a3 - 32 * (a3 >> 5);
  v42 = v8;
  if ( v6 )
  {
    do
    {
      v9 = _mm_cvtsi32_si128(0);
      v10 = 173;
      v11 = _mm_cvtsi32_si128(v5);
      if ( v6 < 0xAD )
        v10 = v6;
      v12 = 0LL;
      v6 -= v10;
      v13 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v4 * v10), v9), (__m128i)_xmm);
      v14 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(0)), (__m128i)_xmm);
      do
      {
        v15 = _mm_loadu_si128(a2);
        v16 = _mm_loadu_si128(a2 + 1);
        a2 += 2;
        v13 = _mm_add_epi32(v13, v12);
        v12 = _mm_add_epi32(_mm_add_epi32(v12, _mm_sad_epu8(v15, (__m128i)_xmm)), _mm_sad_epu8(v16, (__m128i)_xmm));
        v14 = _mm_add_epi32(
                _mm_add_epi32(v14, _mm_madd_epi16(_mm_maddubs_epi16(v15, (__m128i)_xmm), (__m128i)_xmm)),
                _mm_madd_epi16(_mm_maddubs_epi16(v16, (__m128i)_xmm), (__m128i)_xmm));
        --v10;
      }
      while ( v10 );
      v17 = _mm_add_epi32(_mm_shuffle_epi32(v12, 177), v12);
      v18 = _mm_add_epi32(_mm_slli_epi32(v13, 5u), v14);
      v19 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v17, 78), v17));
      v20 = _mm_add_epi32(_mm_shuffle_epi32(v18, 177), v18);
      v4 = (v19 + v4) % 0xFFF1;
      v5 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v20, 78), v20)) % 0xFFF1u;
    }
    while ( v6 );
    v40 = v5;
  }
  if ( v8 )
  {
    if ( v8 < 0x10 )
      goto LABEL_18;
    v21 = v4 + a2->m128i_u8[0];
    v22 = v21 + a2->m128i_u8[1];
    v23 = v22 + a2->m128i_u8[2];
    v24 = v23 + a2->m128i_u8[3];
    v25 = v24 + a2->m128i_u8[4];
    v26 = v25 + a2->m128i_u8[5];
    v27 = v26 + a2->m128i_u8[6];
    v28 = v27 + a2->m128i_u8[7];
    v29 = v28 + a2->m128i_u8[8];
    v30 = v29 + a2->m128i_u8[9];
    v31 = v30 + a2->m128i_u8[10];
    v32 = v31 + a2->m128i_u8[11];
    v43 = v21;
    v33 = v32 + a2->m128i_u8[12];
    v34 = v33 + a2->m128i_u8[13];
    v41 = &a2->m128i_i8[14];
    v35 = v34 + a2->m128i_u8[14];
    v36 = v43 + v22 + v23 + v24 + v25 + v26 + v27 + v28 + v29 + v30 + v31 + v32 + v33 + v35 + v34 + v40;
    v4 = v35 + (unsigned __int8)v41[1];
    a2 = (const __m128i *)(v41 + 2);
    v5 = v4 + v36;
    v8 = v42 - 16;
    if ( v42 != 16 )
    {
LABEL_18:
      do
      {
        v37 = a2->m128i_u8[0];
        a2 = (const __m128i *)((char *)a2 + 1);
        v4 += v37;
        v5 += v4;
        --v8;
      }
      while ( v8 );
    }
    v5 %= 0xFFF1u;
    v38 = v4 - 65521;
    if ( v4 < 0xFFF1 )
      v38 = v4;
    v4 = v38;
  }
  return v4 | (v5 << 16);
}
