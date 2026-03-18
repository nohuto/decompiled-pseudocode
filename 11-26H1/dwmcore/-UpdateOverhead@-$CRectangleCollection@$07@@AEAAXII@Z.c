/*
 * XREFs of ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x18005AB30
 * Callers:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Merge@CTreeDirty@@AEAAXII@Z @ 0x18005953C (-Merge@CTreeDirty@@AEAAXII@Z.c)
 *     ?Merge@?$CRectangleCollection@$07@@QEAA_NII@Z @ 0x180059864 (-Merge@-$CRectangleCollection@$07@@QEAA_NII@Z.c)
 *     ?Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A2A4 (-Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalcOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x18005B3F0 (-CalcOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 */

__int64 __fastcall CRectangleCollection<8>::UpdateOverhead(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // edi
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __m128 *v8; // r8
  float *v9; // rdx
  unsigned int v10; // r9d
  __m128 v11; // xmm2
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  int v15; // ecx
  float v16; // xmm5_4
  float v17; // xmm6_4
  BOOL v18; // eax
  __m128 v19; // xmm7
  float v20; // xmm3_4
  float v21; // xmm9_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm2_4
  float v27; // xmm10_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  unsigned int i; // edi
  unsigned int v32; // edi
  __int64 v33; // r8
  __m128 v34; // xmm2
  __int64 v35; // rdx
  __m128 *v36; // rcx
  float v37; // xmm1_4
  float v38; // xmm4_4
  float v39; // xmm6_4
  int v40; // eax
  float v41; // xmm3_4
  float v42; // xmm5_4
  BOOL v43; // r9d
  float v44; // xmm4_4
  __m128 v45; // xmm1
  float v46; // xmm8_4
  float v47; // xmm7_4
  float v48; // xmm9_4
  float v49; // xmm0_4
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm10_4
  float v53; // xmm5_4
  float v54; // xmm6_4
  float v55; // xmm2_4
  unsigned int v56; // eax
  __m128 v57; // [rsp+20h] [rbp-78h]
  __m128 v58; // [rsp+20h] [rbp-78h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0;
  v6 = *a1;
  v7 = a2;
  if ( a3 < *a1 )
    v6 = a3;
  if ( a2 )
  {
    v8 = (__m128 *)(a1 + 1);
    v9 = (float *)&a1[4 * a2];
    v10 = (unsigned int)(v7 * (v7 - 1)) >> 1;
    do
    {
      v11 = *v8;
      v12 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
      if ( v12 <= COERCE_FLOAT(*v8) )
      {
        LODWORD(v13) = HIDWORD(*(unsigned __int128 *)v8);
        LODWORD(v14) = HIDWORD(v8->m128_u64[0]);
      }
      else
      {
        v13 = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
        v14 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
        if ( v13 > v14 )
        {
          v15 = 0;
          goto LABEL_8;
        }
      }
      v15 = 1;
LABEL_8:
      v16 = v9[1];
      v17 = v9[3];
      v18 = v17 <= v16 || v9[4] <= v9[2];
      if ( v15 )
      {
        if ( v18
          || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues(
                                 v9 + 1,
                                 v9,
                                 v8) )
        {
          v13 = 0.0;
          v12 = 0.0;
          v14 = 0.0;
          v11.m128_i32[0] = 0;
        }
        else
        {
          v11 = *(__m128 *)(v9 + 1);
          LODWORD(v13) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
          LODWORD(v12) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
          LODWORD(v14) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
        }
      }
      else if ( !v18 )
      {
        if ( v11.m128_f32[0] > v16 )
          v11.m128_f32[0] = v9[1];
        if ( v14 > v9[2] )
          v14 = v9[2];
        if ( v17 > v12 )
          v12 = v9[3];
        if ( v9[4] > v13 )
          v13 = v9[4];
      }
      v19 = *v8;
      v57 = *v8;
      v20 = (float)(v13 - v14) * (float)(v12 - v11.m128_f32[0]);
      if ( v16 > COERCE_FLOAT(*v8) )
        v19.m128_f32[0] = v16;
      LODWORD(v21) = HIDWORD(v8->m128_u64[0]);
      v22 = v9[2];
      v23 = v21;
      if ( v22 > v57.m128_f32[1] )
      {
        v21 = v9[2];
        v23 = v21;
      }
      LODWORD(v24) = v8->m128_u64[1];
      v25 = v9[3];
      v26 = v24;
      v27 = v24;
      if ( v57.m128_f32[2] > v25 )
      {
        v24 = v9[3];
        v26 = v24;
        v27 = v24;
      }
      v28 = v9[4];
      LODWORD(v29) = HIDWORD(*(unsigned __int128 *)v8);
      if ( v57.m128_f32[3] > v28 )
      {
        v29 = v9[4];
        v26 = v27;
      }
      if ( v24 <= v19.m128_f32[0] || v29 <= v23 )
      {
        v21 = 0.0;
        v19.m128_i32[0] = 0;
        v29 = 0.0;
        v26 = 0.0;
      }
      v30 = (float)((float)((float)((float)(v26 - v19.m128_f32[0]) * (float)(v29 - v21)) + v20)
                  - (float)((float)(v8->m128_f32[3] - v8->m128_f32[1]) * (float)(v8->m128_f32[2] - v8->m128_f32[0])))
          - (float)((float)(v28 - v22) * (float)(v25 - v9[1]));
      if ( v30 < 0.0 )
      {
        v30 = 0.0;
        if ( v20 == 0.0 )
          v20 = FLOAT_1_0;
      }
      result = v10 + v4;
      ++v8;
      *(float *)&a1[2 * result + 37] = v30;
      ++v4;
      *(float *)&a1[2 * result + 38] = v30 / v20;
    }
    while ( v4 < (unsigned int)v7 );
  }
  for ( i = v4 + 1; i < v6; ++i )
    result = CRectangleCollection<8>::CalcOverhead(a1, (unsigned int)v7, i);
  v32 = i + 1;
  if ( v32 < *a1 )
  {
    v33 = 2 * v7;
    do
    {
      v34 = *(__m128 *)&a1[2 * v33 + 1];
      v35 = 4LL * v32;
      v36 = (__m128 *)&a1[v35 + 1];
      v37 = _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
      if ( v37 <= v34.m128_f32[0] )
      {
        v38 = v34.m128_f32[3];
        v39 = v34.m128_f32[1];
      }
      else
      {
        v38 = _mm_shuffle_ps(v34, v34, 255).m128_f32[0];
        v39 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0];
        if ( v38 > v39 )
        {
          v40 = 0;
          goto LABEL_39;
        }
      }
      v40 = 1;
LABEL_39:
      v41 = v36->m128_f32[0];
      v42 = *(float *)&a1[v35 + 3];
      v43 = v42 <= v36->m128_f32[0] || *(float *)&a1[v35 + 4] <= *(float *)&a1[v35 + 2];
      if ( v40 )
      {
        if ( v43
          || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues(
                                 v36,
                                 v35 * 4,
                                 v33) )
        {
          v38 = 0.0;
          v37 = 0.0;
          v39 = 0.0;
          v34.m128_i32[0] = 0;
        }
        else
        {
          v34 = *v36;
          LODWORD(v38) = _mm_shuffle_ps(v34, v34, 255).m128_u32[0];
          LODWORD(v37) = _mm_shuffle_ps(*v36, *v36, 170).m128_u32[0];
          LODWORD(v39) = _mm_shuffle_ps(*v36, *v36, 85).m128_u32[0];
        }
      }
      else if ( !v43 )
      {
        if ( v34.m128_f32[0] > v41 )
          v34.m128_i32[0] = v36->m128_i32[0];
        if ( v39 > *(float *)&a1[v35 + 2] )
          v39 = *(float *)&a1[v35 + 2];
        if ( v42 > v37 )
          v37 = *(float *)&a1[v35 + 3];
        if ( *(float *)&a1[v35 + 4] > v38 )
          v38 = *(float *)&a1[v35 + 4];
      }
      v44 = (float)(v38 - v39) * (float)(v37 - v34.m128_f32[0]);
      v45 = *(__m128 *)&a1[2 * v33 + 1];
      v58 = v45;
      if ( v41 > v45.m128_f32[0] )
        v45.m128_f32[0] = v41;
      v46 = v58.m128_f32[1];
      v47 = *(float *)&a1[v35 + 2];
      v48 = v58.m128_f32[1];
      if ( v47 > v58.m128_f32[1] )
      {
        v46 = *(float *)&a1[v35 + 2];
        v48 = v46;
      }
      v49 = v58.m128_f32[2];
      v50 = v42;
      v51 = v58.m128_f32[2];
      v52 = v58.m128_f32[2];
      if ( v58.m128_f32[2] > v42 )
      {
        v49 = v42;
        v51 = v42;
        v52 = v42;
      }
      v53 = *(float *)&a1[v35 + 4];
      v54 = v58.m128_f32[3];
      if ( v58.m128_f32[3] > v53 )
      {
        v54 = *(float *)&a1[v35 + 4];
        v51 = v52;
      }
      if ( v49 <= v45.m128_f32[0] || v54 <= v48 )
      {
        v46 = 0.0;
        v45.m128_i32[0] = 0;
        v54 = 0.0;
        v51 = 0.0;
      }
      v55 = (float)((float)((float)((float)(v51 - v45.m128_f32[0]) * (float)(v54 - v46)) + v44)
                  - (float)((float)(*(float *)&a1[2 * v33 + 4] - *(float *)&a1[2 * v33 + 2])
                          * (float)(*(float *)&a1[2 * v33 + 3] - *(float *)&a1[2 * v33 + 1])))
          - (float)((float)(v53 - v47) * (float)(v50 - v36->m128_f32[0]));
      if ( v55 < 0.0 )
      {
        v55 = 0.0;
        if ( v44 == 0.0 )
          v44 = FLOAT_1_0;
      }
      v56 = v32 * (v32 - 1);
      ++v32;
      result = (unsigned int)v7 + (v56 >> 1);
      *(float *)&a1[2 * result + 37] = v55;
      *(float *)&a1[2 * result + 38] = v55 / v44;
    }
    while ( v32 < *a1 );
  }
  return result;
}
