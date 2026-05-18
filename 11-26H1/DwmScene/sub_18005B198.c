/*
 * XREFs of sub_18005B198 @ 0x18005B198
 * Callers:
 *     sub_1800593B4 @ 0x1800593B4 (sub_1800593B4.c)
 * Callees:
 *     sub_18001955C @ 0x18001955C (sub_18001955C.c)
 *     sub_18001B968 @ 0x18001B968 (sub_18001B968.c)
 *     sub_180059108 @ 0x180059108 (sub_180059108.c)
 *     sub_180059600 @ 0x180059600 (sub_180059600.c)
 *     sub_18005AE7C @ 0x18005AE7C (sub_18005AE7C.c)
 */

char __fastcall sub_18005B198(__int64 a1)
{
  double v2; // xmm2_8
  int v3; // eax
  float v4; // xmm0_4
  __int64 v5; // xmm3_8
  __int64 v6; // xmm1_8
  double v7; // xmm1_8
  __int128 *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __m128i v12; // xmm0
  bool v13; // zf
  char result; // al
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18[4]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v19; // [rsp+70h] [rbp+17h] BYREF
  __int128 v20; // [rsp+80h] [rbp+27h]
  __int128 v21; // [rsp+90h] [rbp+37h]
  __int128 v22; // [rsp+A0h] [rbp+47h]

  if ( sub_180059600(a1, 2) )
    return 0;
  sub_18005AE7C(a1);
  *(_QWORD *)&v2 = *(unsigned int *)(a1 + 332);
  if ( (*(_BYTE *)(a1 + 544) & 2) == 0 )
    return 0;
  v3 = *(_DWORD *)(a1 + 316);
  switch ( v3 )
  {
    case 1:
      v4 = *(float *)(a1 + 324);
      v5 = 981668463LL;
      if ( v4 < 0.001 )
        v4 = 0.001;
      v6 = *(unsigned int *)(a1 + 320);
LABEL_7:
      if ( *(float *)&v6 >= 0.001 )
        v5 = v6;
      *(_QWORD *)&v7 = *(unsigned int *)(a1 + 328);
      *(float *)&v7 = *(float *)&v7 * 0.017453292;
      v8 = sub_180059108((__int64)&v19, v7, v2, *(double *)&v5, LODWORD(v4));
      v9 = v8[1];
      v10 = v8[2];
      v11 = v8[3];
      v18[0] = *v8;
      break;
    case 2:
      v4 = *(float *)(a1 + 320);
      v5 = 981668463LL;
      if ( v4 < 0.001 )
        v4 = 0.001;
      v6 = *(unsigned int *)(a1 + 324);
      goto LABEL_7;
    case 3:
      v9 = *(unsigned int *)(a1 + 340);
      v11 = *(unsigned int *)(a1 + 324);
      v12 = (__m128i)v9;
      *(float *)v12.m128i_i32 = *(float *)&v9 * *(float *)&v2;
      v10 = *(unsigned int *)(a1 + 320);
LABEL_16:
      *(float *)v12.m128i_i32 = sub_18001B968(*(float *)v12.m128i_i32);
      *(_QWORD *)&v18[0] = v12.m128i_i64[0];
      *((_QWORD *)&v18[0] + 1) = _mm_srli_si128(v12, 8).m128i_u64[0];
      v20 = v9;
      v21 = v10;
      v22 = v11;
      break;
    case 4:
      v9 = *(unsigned int *)(a1 + 340);
      v11 = *(unsigned int *)(a1 + 320);
      v12 = (__m128i)v9;
      *(float *)v12.m128i_i32 = *(float *)&v9 * *(float *)&v2;
      v10 = *(unsigned int *)(a1 + 324);
      goto LABEL_16;
    case 5:
      v9 = *(_OWORD *)(a1 + 948);
      v10 = *(_OWORD *)(a1 + 964);
      v11 = *(_OWORD *)(a1 + 980);
      v18[0] = *(_OWORD *)(a1 + 932);
      break;
    default:
      v9 = xmmword_1800FA790;
      v10 = xmmword_1800FA7A0;
      v11 = xmmword_1800FA7B0;
      v18[0] = 0x3F800000uLL;
      break;
  }
  v13 = *(_DWORD *)(a1 + 316) == 5;
  v18[3] = v11;
  v18[2] = v10;
  v18[1] = v9;
  if ( !v13 )
  {
    *(_OWORD *)(a1 + 932) = v18[0];
    *(_OWORD *)(a1 + 948) = v9;
    *(_OWORD *)(a1 + 964) = v10;
    *(_OWORD *)(a1 + 980) = v11;
  }
  sub_18001955C(v18, (__int64)&v19);
  result = 1;
  v15 = v20;
  *(_OWORD *)(a1 + 1124) = v19;
  v16 = v21;
  *(_OWORD *)(a1 + 1140) = v15;
  v17 = v22;
  *(_OWORD *)(a1 + 1156) = v16;
  *(_OWORD *)(a1 + 1172) = v17;
  *(_DWORD *)(a1 + 544) &= ~2u;
  return result;
}
