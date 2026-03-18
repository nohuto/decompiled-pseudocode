/*
 * XREFs of ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18008D530
 * Callers:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?FindBestMandatoryMergePair@?$CRectangleCollection@$07@@QEAAXPEAI0@Z @ 0x180057B80 (-FindBestMandatoryMergePair@-$CRectangleCollection@$07@@QEAAXPEAI0@Z.c)
 *     ?Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A2A4 (-Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008D260 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F5F0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CRectangleCollection<8>::EnsureWeights(__int64 a1)
{
  _DWORD *v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // r10d
  __m128 *v4; // r11
  float *v5; // r9
  unsigned int v6; // ebx
  __m128 v7; // xmm2
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  int v11; // ecx
  float v12; // xmm5_4
  float v13; // xmm6_4
  BOOL v14; // eax
  __m128 v15; // xmm6
  float v16; // xmm4_4
  float v17; // xmm9_4
  float v18; // xmm5_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm8_4
  float v23; // xmm10_4
  float v24; // xmm7_4
  float v25; // xmm2_4
  float v26; // xmm2_4
  __int64 v27; // rax
  __m128 v28; // [rsp+20h] [rbp-78h]

  v1 = (_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 436) )
  {
    v2 = 1;
    *(_BYTE *)(a1 + 436) = 0;
    if ( *(_DWORD *)a1 > 1u )
    {
      while ( 1 )
      {
        v3 = 0;
        if ( v2 )
          break;
LABEL_34:
        if ( ++v2 >= *v1 )
          return;
      }
      v4 = (__m128 *)(v1 + 1);
      v5 = (float *)&v1[4 * v2];
      v6 = (v2 * (v2 - 1)) >> 1;
      while ( 1 )
      {
        v7 = *v4;
        v8 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
        if ( v8 <= COERCE_FLOAT(*v4) )
        {
          LODWORD(v9) = HIDWORD(*(unsigned __int128 *)v4);
          LODWORD(v10) = HIDWORD(v4->m128_u64[0]);
        }
        else
        {
          v9 = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
          v10 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
          if ( v9 > v10 )
          {
            v11 = 0;
            goto LABEL_9;
          }
        }
        v11 = 1;
LABEL_9:
        v12 = v5[1];
        v13 = v5[3];
        v14 = v13 <= v12 || v5[4] <= v5[2];
        if ( v11 )
        {
          if ( v14 || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues() )
          {
            v9 = 0.0;
            v8 = 0.0;
            v10 = 0.0;
            v7.m128_i32[0] = 0;
          }
          else
          {
            v7 = *(__m128 *)(v5 + 1);
            LODWORD(v9) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
            LODWORD(v8) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
            LODWORD(v10) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
          }
        }
        else if ( !v14 )
        {
          if ( v7.m128_f32[0] > v12 )
            v7.m128_f32[0] = v5[1];
          if ( v10 > v5[2] )
            v10 = v5[2];
          if ( v13 > v8 )
            v8 = v5[3];
          if ( v5[4] > v9 )
            v9 = v5[4];
        }
        v15 = *v4;
        v28 = *v4;
        v16 = (float)(v8 - v7.m128_f32[0]) * (float)(v9 - v10);
        if ( v12 > COERCE_FLOAT(*v4) )
          v15.m128_f32[0] = v12;
        LODWORD(v17) = HIDWORD(v4->m128_u64[0]);
        v18 = v5[2];
        v19 = v17;
        if ( v18 > v28.m128_f32[1] )
        {
          v17 = v5[2];
          v19 = v17;
        }
        LODWORD(v20) = v4->m128_u64[1];
        v21 = v5[3];
        v22 = v20;
        v23 = v20;
        if ( v28.m128_f32[2] > v21 )
        {
          v20 = v5[3];
          v22 = v20;
          v23 = v20;
        }
        v24 = v5[4];
        LODWORD(v25) = HIDWORD(*(unsigned __int128 *)v4);
        if ( v28.m128_f32[3] > v24 )
        {
          v25 = v5[4];
          v22 = v23;
        }
        if ( v20 <= v15.m128_f32[0] || v25 <= v19 )
        {
          v17 = 0.0;
          v15.m128_i32[0] = 0;
          v25 = 0.0;
          v22 = 0.0;
        }
        v26 = (float)((float)((float)((float)(v25 - v17) * (float)(v22 - v15.m128_f32[0])) + v16)
                    - (float)((float)(v4->m128_f32[3] - v4->m128_f32[1]) * (float)(v4->m128_f32[2] - v4->m128_f32[0])))
            - (float)((float)(v24 - v18) * (float)(v21 - v5[1]));
        if ( v26 < 0.0 )
        {
          v26 = 0.0;
          if ( v16 == 0.0 )
            v16 = FLOAT_1_0;
        }
        v27 = v6 + v3;
        ++v4;
        *(float *)&v1[2 * v27 + 37] = v26;
        ++v3;
        *(float *)&v1[2 * v27 + 38] = v26 / v16;
        if ( v3 >= v2 )
          goto LABEL_34;
      }
    }
  }
}
