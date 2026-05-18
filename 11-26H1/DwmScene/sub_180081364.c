/*
 * XREFs of sub_180081364 @ 0x180081364
 * Callers:
 *     sub_1800932E0 @ 0x1800932E0 (sub_1800932E0.c)
 * Callees:
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 */

__int64 __fastcall sub_180081364(_QWORD *a1, float a2, float a3, float a4, int a5, int a6)
{
  __int64 v7; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __m128 v11; // xmm5
  __int128 v12; // xmm1
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int64 v20; // rax
  __m128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // rax
  __m128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __m128 v29; // [rsp+28h] [rbp-39h] BYREF
  __m128 v30; // [rsp+38h] [rbp-29h]
  __int128 v31; // [rsp+48h] [rbp-19h]
  __int128 v32; // [rsp+58h] [rbp-9h]
  __int64 v33; // [rsp+68h] [rbp+7h]

  v7 = a1[6];
  v9 = *(_QWORD *)(v7 + 112);
  v10 = *(_OWORD *)(v9 + 32);
  v11 = *(__m128 *)(v9 + 16);
  v12 = *(_OWORD *)(v9 + 48);
  v29 = *(__m128 *)v9;
  v31 = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(v9 + 64);
  v30 = v11;
  v32 = v12;
  v33 = v10;
  if ( _mm_shuffle_ps(v29, v29, 255).m128_f32[0] != a2
    || _mm_shuffle_ps(v11, v11, 85).m128_f32[0] != a3
    || v11.m128_f32[0] != a4
    || (result = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v11, 8)), (_BYTE)result != 1)
    || HIDWORD(v33) != a6 )
  {
    v29.m128_f32[3] = a2;
    v30.m128_u64[0] = __PAIR64__(LODWORD(a3), LODWORD(a4));
    v30.m128_i8[8] = 1;
    HIDWORD(v33) = a6;
    result = sub_180081920(v7, &v29, 0LL);
    v14 = a1[8];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 112);
      v16 = *(__m128 *)(v15 + 16);
      v29 = *(__m128 *)v15;
      v17 = *(_OWORD *)(v15 + 32);
      v30 = v16;
      v18 = *(_OWORD *)(v15 + 48);
      v30.m128_i8[8] = 1;
      v31 = v17;
      LODWORD(v33) = *(_QWORD *)(v15 + 64);
      HIDWORD(v33) = a6;
      v29.m128_f32[3] = a2;
      v30.m128_u64[0] = __PAIR64__(LODWORD(a3), LODWORD(a4));
      v32 = v18;
      result = sub_180081920(v14, &v29, 0LL);
    }
    v19 = a1[10];
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 112);
      v21 = *(__m128 *)(v20 + 16);
      v29 = *(__m128 *)v20;
      v22 = *(_OWORD *)(v20 + 32);
      v30 = v21;
      v23 = *(_OWORD *)(v20 + 48);
      v30.m128_i8[8] = 1;
      v31 = v22;
      LODWORD(v33) = *(_QWORD *)(v20 + 64);
      HIDWORD(v33) = a6;
      v29.m128_f32[3] = a2;
      v30.m128_u64[0] = __PAIR64__(LODWORD(a3), LODWORD(a4));
      v32 = v23;
      result = sub_180081920(v19, &v29, 0LL);
    }
    v24 = a1[12];
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 112);
      v26 = *(__m128 *)(v25 + 16);
      v29 = *(__m128 *)v25;
      v27 = *(_OWORD *)(v25 + 32);
      v30 = v26;
      v28 = *(_OWORD *)(v25 + 48);
      v30.m128_i8[8] = 1;
      v31 = v27;
      LODWORD(v33) = *(_QWORD *)(v25 + 64);
      HIDWORD(v33) = a6;
      v29.m128_f32[3] = a2;
      v30.m128_u64[0] = __PAIR64__(LODWORD(a3), LODWORD(a4));
      v32 = v28;
      return sub_180081920(v24, &v29, 0LL);
    }
  }
  return result;
}
