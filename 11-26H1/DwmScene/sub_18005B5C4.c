/*
 * XREFs of sub_18005B5C4 @ 0x18005B5C4
 * Callers:
 *     sub_1800592A0 @ 0x1800592A0 (sub_1800592A0.c)
 *     sub_180059370 @ 0x180059370 (sub_180059370.c)
 *     sub_1800593B4 @ 0x1800593B4 (sub_1800593B4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001896C @ 0x18001896C (sub_18001896C.c)
 *     sub_18001955C @ 0x18001955C (sub_18001955C.c)
 *     sub_18002657C @ 0x18002657C (sub_18002657C.c)
 *     sub_18003B3D4 @ 0x18003B3D4 (sub_18003B3D4.c)
 *     sub_18003B444 @ 0x18003B444 (sub_18003B444.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 *     sub_18005934C @ 0x18005934C (sub_18005934C.c)
 *     sub_1800594A8 @ 0x1800594A8 (sub_1800594A8.c)
 *     sub_180059600 @ 0x180059600 (sub_180059600.c)
 */

char __fastcall sub_18005B5C4(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  float v4; // xmm3_4
  int v5; // xmm2_4
  float v6; // xmm0_4
  __int64 v7; // r8
  float v8; // xmm4_4
  int v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  __m128 v14; // xmm5
  __m128 v15; // xmm3
  __m128 v16; // xmm2
  __m128 v17; // xmm5
  double v18; // xmm0_8
  __m128 v19; // xmm2
  __m128 v20; // xmm2
  __int128 *v21; // rax
  _OWORD *v22; // r9
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v29; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int32 v30; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int128 v35[4]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v36[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[64]; // [rsp+D0h] [rbp-30h] BYREF
  int v38; // [rsp+120h] [rbp+20h] BYREF
  float v39; // [rsp+124h] [rbp+24h]

  if ( (*(_BYTE *)(a1 + 544) & 4) != 0 && !sub_180059600(a1, 4) )
  {
    v2 = *sub_180042248(a1, &v33);
    if ( v34 )
      sub_180010EC8(v34);
    if ( !v2 )
      goto LABEL_16;
    v3 = *(_QWORD *)(a1 + 136);
    v4 = 0.0;
    *(_QWORD *)(a1 + 1596) = 0LL;
    *(_QWORD *)(a1 + 1604) = 0LL;
    if ( v3 )
    {
      sub_18002657C(v3, &v38);
      v5 = v38;
      v4 = v39;
      *(_DWORD *)(a1 + 1596) = v38;
      *(float *)(a1 + 1600) = v4;
      *(_DWORD *)(a1 + 1604) = v5;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 152) )
      {
LABEL_12:
        if ( *(_DWORD *)(a1 + 360) )
        {
          v8 = 1.0;
          v4 = 1.0;
        }
        else
        {
          v8 = *(float *)(a1 + 1604);
        }
        v9 = *(_DWORD *)(a1 + 392);
        v31 = 0LL;
        v10 = v4 * *(float *)(a1 + 348);
        v29 = 0LL;
        v11 = v8 * *(float *)(a1 + 344);
        v33 = 0LL;
        *(float *)(a1 + 1576) = v10;
        *(_DWORD *)(a1 + 1580) = v9;
        *(float *)(a1 + 1572) = v11;
        v12 = v4 * *(float *)(a1 + 356);
        v13 = v8 * *(float *)(a1 + 352);
        *(_DWORD *)(a1 + 1592) = *(_DWORD *)(a1 + 396);
        *(float *)(a1 + 1588) = v12;
        *(float *)(a1 + 1584) = v13;
        v14 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 1584), (__m128)*(unsigned int *)(a1 + 1592));
        v15 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 1572), (__m128)*(unsigned int *)(a1 + 1580));
        v16 = _mm_add_ps(v15, v14);
        v17 = _mm_sub_ps(v14, v15);
        v18 = *(double *)v16.m128_u64;
        v30 = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
        v19 = 0LL;
        *(double *)v19.m128_u64 = v18;
        LODWORD(v34) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        v31 = _mm_mul_ps(_mm_movelh_ps(v19, (__m128)v30), (__m128)xmmword_1801915F0).m128_u64[0];
        v20 = 0LL;
        v20.m128_u64[0] = v17.m128_u64[0];
        v20.m128_u64[0] = _mm_mul_ps(_mm_movelh_ps(v20, (__m128)(unsigned int)v34), (__m128)xmmword_1801915F0).m128_u64[0];
        *(float *)&v18 = *(float *)(a1 + 396) - *(float *)(a1 + 392);
        v32 = *(_DWORD *)(a1 + 392);
        LODWORD(v29) = v20.m128_i32[0];
        v30 = LODWORD(v18);
        *((float *)&v29 + 1) = v20.m128_f32[1] * -1.0;
        sub_18003B444((__int64)v36, &v31);
        v21 = (__int128 *)sub_18003B3D4((__int64)v37, (unsigned int *)&v29);
        sub_18001896C((__int64)v35, v21, v22);
        sub_18001955C(v35, (__int64)v36);
        v23 = v35[1];
        *(_OWORD *)(a1 + 1252) = v35[0];
        v24 = v35[2];
        *(_OWORD *)(a1 + 1268) = v23;
        v25 = v35[3];
        *(_OWORD *)(a1 + 1284) = v24;
        v26 = v36[0];
        *(_OWORD *)(a1 + 1300) = v25;
        v27 = v36[1];
        *(_OWORD *)(a1 + 1444) = v26;
        *(_OWORD *)(a1 + 1476) = v36[2];
        *(_OWORD *)(a1 + 1460) = v27;
        *(_OWORD *)(a1 + 1492) = v36[3];
LABEL_16:
        *(_DWORD *)(a1 + 544) &= ~4u;
        return 1;
      }
      v6 = (float)(int)sub_1800594A8(*(_QWORD *)(a1 + 152));
      *(float *)(a1 + 1596) = v6;
      v4 = (float)(int)sub_18005934C(v7);
      *(float *)(a1 + 1600) = v4;
      *(float *)(a1 + 1604) = v6;
    }
    *(float *)(a1 + 1608) = v4;
    goto LABEL_12;
  }
  return 0;
}
