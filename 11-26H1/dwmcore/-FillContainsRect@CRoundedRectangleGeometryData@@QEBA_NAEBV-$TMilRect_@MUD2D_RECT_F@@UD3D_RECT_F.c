/*
 * XREFs of ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD210
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CCC30 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD210 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD210 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CDD20 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800CF010 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x180106A08 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall CRoundedRectangleGeometryData::FillContainsRect(__int64 a1, const struct D2D_RECT_F *a2, __int64 a3)
{
  float v6; // xmm10_4
  float v7; // xmm12_4
  float v8; // xmm11_4
  float v9; // xmm8_4
  struct D2D_RECT_F v10; // xmm0
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  __m128 v15; // xmm3
  float bottom; // xmm5_4
  float right; // xmm7_4
  float top; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  char v23; // dl
  __int64 v24; // r8
  float v25; // xmm2_4
  float v26; // xmm9_4
  float *v27; // rcx
  float v28; // xmm13_4
  float v29; // xmm1_4
  float v30; // xmm14_4
  float v31; // xmm15_4
  float v32; // xmm6_4
  float v33; // xmm11_4
  float v34; // xmm0_4
  float v35; // xmm10_4
  float v36; // xmm6_4
  float v37; // xmm12_4
  float v38; // xmm8_4
  float v39; // xmm2_4
  FLOAT v40; // xmm1_4
  FLOAT v41; // xmm0_4
  FLOAT left; // xmm2_4
  FLOAT v43; // xmm1_4
  __int64 i; // rcx
  __int64 v45; // rax
  __int64 j; // rax
  float v47; // xmm1_4
  float v48; // xmm0_4
  char v50; // cl
  unsigned int v51; // xmm3_4
  unsigned int v52; // xmm1_4
  FLOAT v53; // xmm2_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  CMILMatrix *v56; // rcx
  char v57; // r10
  float v58; // xmm14_4
  float v59; // xmm0_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  float v62; // xmm0_4
  char v63; // dl
  CMILMatrix *v64; // rcx
  float v65; // xmm2_4
  float v66; // xmm7_4
  float v67; // xmm4_4
  float v68; // xmm3_4
  float v69; // xmm5_4
  float v70; // xmm1_4
  float v71; // xmm5_4
  char v72; // dl
  float x; // xmm0_4
  unsigned __int64 v74; // rcx
  float y; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm3_4
  struct D2D_RECT_F v78; // [rsp+28h] [rbp-E0h] BYREF
  float v79; // [rsp+38h] [rbp-D0h]
  float v80; // [rsp+3Ch] [rbp-CCh]
  float v81; // [rsp+40h] [rbp-C8h]
  float v82; // [rsp+44h] [rbp-C4h]
  float v83; // [rsp+48h] [rbp-C0h]
  float v84; // [rsp+4Ch] [rbp-BCh]
  float v85; // [rsp+50h] [rbp-B8h]
  float v86; // [rsp+54h] [rbp-B4h]
  struct D2D_POINT_2F v87; // [rsp+58h] [rbp-B0h] BYREF
  float v88; // [rsp+60h] [rbp-A8h]
  int v89; // [rsp+64h] [rbp-A4h]
  float v90; // [rsp+68h] [rbp-A0h]
  float v91; // [rsp+6Ch] [rbp-9Ch]
  int v92; // [rsp+70h] [rbp-98h]
  float v93; // [rsp+74h] [rbp-94h]
  struct D2D_POINT_2F v94; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_POINT_2F *v95; // [rsp+80h] [rbp-88h]
  FLOAT v96; // [rsp+88h] [rbp-80h]
  FLOAT v97; // [rsp+8Ch] [rbp-7Ch]
  FLOAT v98; // [rsp+90h] [rbp-78h]
  FLOAT v99; // [rsp+94h] [rbp-74h]

  if ( !a3 )
    goto LABEL_2;
  v50 = *(_BYTE *)(a3 + 64);
  if ( v50 >> 6 != 1 )
  {
    if ( v50 >> 6 < 0 )
      goto LABEL_51;
    v63 = *(_BYTE *)(a3 + 65);
    if ( (char)(4 * v63) >> 6 != 1 )
    {
      if ( (char)(4 * v63) >> 6 < 0 )
      {
LABEL_81:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 4) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 16) - 0.0) & _xmm) < 0.000081380211 )
        {
          *(_BYTE *)(a3 + 64) = v50 | 0xC0;
LABEL_51:
          if ( (char)(4 * *(_BYTE *)(a3 + 64)) >> 6 != 1 )
          {
            if ( (char)(4 * *(_BYTE *)(a3 + 64)) >> 6 < 0 )
            {
LABEL_53:
              *(float *)&v51 = *(float *)(a3 + 48) + a2->right;
              *(float *)&v52 = *(float *)(a3 + 52) + a2->top;
              v53 = *(float *)(a3 + 52) + a2->bottom;
              v78.left = *(float *)(a3 + 48) + a2->left;
              *(_QWORD *)&v78.top = __PAIR64__(v51, v52);
              v78.bottom = v53;
              return CRoundedRectangleGeometryData::FillContainsRect(a1, &v78, 0LL);
            }
            if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3)
              && v71 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a3 - 1.0) & _xmm)
              && v71 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 20) - 1.0) & _xmm) )
            {
              *(_BYTE *)(a3 + 64) = *(_BYTE *)(a3 + 64) & 0xCF ^ 0x30;
              goto LABEL_53;
            }
            *(_BYTE *)(a3 + 64) = *(_BYTE *)(a3 + 64) & 0xCF ^ 0x10;
          }
          if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3) )
          {
            v65 = *(float *)a3;
            v66 = *(float *)(a3 + 20);
            v67 = (float)(*(float *)a3 * a2->left) + *(float *)(a3 + 48);
            v68 = (float)(v66 * a2->top) + *(float *)(a3 + 52);
            v69 = (float)(*(float *)a3 * a2->right) + *(float *)(a3 + 48);
            v70 = (float)(v66 * a2->bottom) + *(float *)(a3 + 52);
            v78.left = v67;
            *(_QWORD *)&v78.top = __PAIR64__(LODWORD(v69), LODWORD(v68));
            v78.bottom = v70;
            if ( v65 <= 0.0 || v66 <= 0.0 )
            {
              if ( v67 > v69 )
              {
                v78.left = v69;
                v78.right = v67;
              }
              if ( v68 > v70 )
              {
                v78.top = v70;
                v78.bottom = v68;
                return CRoundedRectangleGeometryData::FillContainsRect(a1, &v78, 0LL);
              }
            }
          }
          else
          {
            CMILMatrix::Transform2DRectToPerspective(v64, a2, &v87);
            x = v87.x;
            v74 = 1LL;
            y = v87.y;
            v76 = v87.x;
            v77 = v87.y;
            do
            {
              x = fminf(x, *(&v87.x + 2 * v74));
              v78.left = x;
              y = fminf(y, *(&v87.y + 2 * v74));
              v78.top = y;
              v76 = fmaxf(v76, *(&v87.x + 2 * v74));
              v78.right = v76;
              v77 = fmaxf(v77, *(&v87.y + 2 * v74++));
              v78.bottom = v77;
            }
            while ( v74 < 4 );
          }
          return CRoundedRectangleGeometryData::FillContainsRect(a1, &v78, 0LL);
        }
        goto LABEL_82;
      }
      v72 = v63 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 28) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a3 + 12) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a3 + 60) & _xmm))
                        - 1.0) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(a3 + 65) = v72 ^ 0x30;
        goto LABEL_81;
      }
      *(_BYTE *)(a3 + 65) = v72 ^ 0x10;
    }
LABEL_82:
    *(_BYTE *)(a3 + 64) = v50 & 0x3F | 0x40;
  }
  if ( CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a3) )
    goto LABEL_51;
LABEL_2:
  v6 = *(float *)(a1 + 4);
  v7 = *(float *)a1;
  if ( *(_BYTE *)(a1 + 52) )
  {
    v8 = v7 + *(float *)(a1 + 8);
    v9 = v6 + *(float *)(a1 + 12);
  }
  else
  {
    v8 = *(float *)(a1 + 8);
    v9 = *(float *)(a1 + 12);
  }
  v78 = 0LL;
  if ( a3 )
  {
    if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a3) )
    {
      v15.m128_f32[0] = *(float *)(a3 + 48) + a2->left;
      right = *(float *)(a3 + 48) + a2->right;
      top = *(float *)(a3 + 52) + a2->top;
      bottom = *(float *)(a3 + 52) + a2->bottom;
    }
    else
    {
      if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3) )
      {
        CMILMatrix::Transform2DRectToPerspective(v56, a2, &v87);
        v94 = (struct D2D_POINT_2F)4LL;
        v95 = &v87;
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
          &v78,
          &v94);
        bottom = v78.bottom;
        top = v78.top;
        v15.m128_i32[0] = LODWORD(v78.left);
        right = v78.right;
        goto LABEL_20;
      }
      v58 = *(float *)(a3 + 20);
      v15.m128_f32[0] = (float)(*(float *)a3 * a2->left) + *(float *)(a3 + 48);
      right = (float)(*(float *)a3 * a2->right) + *(float *)(a3 + 48);
      top = (float)(v58 * a2->top) + *(float *)(a3 + 52);
      bottom = (float)(v58 * a2->bottom) + *(float *)(a3 + 52);
      v59 = v15.m128_f32[0];
      v60 = right;
      if ( *(float *)a3 <= 0.0 || v58 <= 0.0 )
        goto LABEL_68;
    }
    v60 = right;
    v59 = v15.m128_f32[0];
    v57 = 1;
LABEL_68:
    if ( !v57 )
    {
      if ( v59 > v60 )
      {
        v61 = v15.m128_f32[0];
        v15.m128_f32[0] = right;
        right = v61;
      }
      if ( top > bottom )
      {
        v62 = top;
        top = bottom;
        bottom = v62;
      }
    }
    goto LABEL_20;
  }
  v10 = *a2;
  v78 = *a2;
  if ( v78.left <= -3.4028235e38 )
    v11 = FLOAT_N3_4028235e38;
  else
    v11 = v10.left + -0.015625;
  if ( v78.top <= -3.4028235e38 )
    v12 = FLOAT_N3_4028235e38;
  else
    v12 = v78.top + -0.015625;
  if ( v78.right >= 3.4028235e38 )
    v13 = FLOAT_3_4028235e38;
  else
    v13 = v78.right + 0.015625;
  if ( v78.bottom >= 3.4028235e38 )
    v14 = FLOAT_3_4028235e38;
  else
    v14 = v78.bottom + 0.015625;
  if ( v8 <= v7 || v9 <= v6 || v7 >= v11 && v6 >= v12 && v13 >= v8 && v14 >= v9 )
    return 0;
  v15 = *(__m128 *)a2;
  LODWORD(bottom) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  LODWORD(right) = _mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 170).m128_u32[0];
  LODWORD(top) = _mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 85).m128_u32[0];
LABEL_20:
  v19 = v15.m128_f32[0] + 0.015625;
  v20 = right + -0.015625;
  v21 = top + 0.015625;
  v22 = bottom - 0.015625;
  if ( v20 <= v19 || v22 <= v21 )
  {
    v22 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
    v19 = 0.0;
  }
  if ( v20 > v19 && v22 > v21 && (v19 < v7 || v21 < v6 || v8 < v20 || v9 < v22) )
    return 0;
  v23 = *(_BYTE *)(a1 + 52);
  v24 = a1 + 16;
  v25 = *(float *)(a1 + 16);
  v26 = *(float *)(a1 + 20);
  v27 = (float *)(a1 + 16);
  if ( !v23 )
    v27 = (float *)(a1 + 24);
  v28 = v27[1];
  if ( v23 )
  {
    v29 = *(float *)(a1 + 16);
    v30 = v29;
    v31 = *(float *)(a1 + 20);
  }
  else
  {
    v29 = *(float *)(a1 + 40);
    v24 = a1 + 40;
    v30 = *(float *)(a1 + 32);
    v31 = *(float *)(a1 + 36);
  }
  v32 = v8 - *v27;
  v33 = v8 - v30;
  v86 = v32;
  v78.right = v32;
  v84 = v7 + v25;
  v78.left = v7 + v25;
  v34 = v6 + v26;
  v79 = v33;
  v35 = v6 + v28;
  v83 = v9 - v31;
  v80 = v9 - v31;
  v36 = v29 + v7;
  v78.top = v34;
  v37 = *(float *)(v24 + 4);
  v38 = v9 - v37;
  v78.bottom = v35;
  v85 = v36;
  v81 = v36;
  v82 = v38;
  if ( (v21 < v34 || v21 < v35 || v38 < v22 || v83 < v22) && (v19 < v84 || v19 < v85 || v86 < v20 || v33 < v20) )
  {
    v90 = v30;
    LODWORD(v87.x) = LODWORD(v25) ^ _xmm;
    v39 = *v27;
    v92 = LODWORD(v29) ^ _xmm;
    v40 = a2->top;
    v41 = a2->right;
    v88 = v39;
    left = a2->left;
    v94.y = v40;
    *((FLOAT *)&v95 + 1) = v40;
    v43 = a2->bottom;
    v94.x = left;
    v97 = v43;
    v98 = left;
    v99 = v43;
    LODWORD(v87.y) = LODWORD(v26) ^ _xmm;
    v89 = LODWORD(v28) ^ _xmm;
    v91 = v31;
    v93 = v37;
    *(FLOAT *)&v95 = v41;
    v96 = v41;
    if ( a3 )
      CMILMatrix::Transform((CMILMatrix *)a3, &v94, &v94, 4u);
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      if ( *(_BYTE *)(a1 + 52) )
        v45 = a1;
      else
        v45 = a1 + 8 * i;
      if ( *(float *)(v45 + 16) > 0.0 && *(float *)(v45 + 20) > 0.0 )
      {
        if ( a3 )
        {
          for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
          {
            v47 = (float)(*(&v94.x + 2 * j) - *(&v78.left + 2 * i)) / *(&v87.x + 2 * i);
            if ( v47 > 0.0 )
            {
              v48 = (float)(*(&v94.y + 2 * j) - *(&v78.top + 2 * i)) / *(&v87.y + 2 * i);
              if ( v48 > 0.0 && (float)((float)(v48 * v48) + (float)(v47 * v47)) > 1.0 )
                return 0;
            }
          }
        }
        else
        {
          v54 = (float)(*(&v94.x + 2 * i) - *(&v78.left + 2 * i)) / *(&v87.x + 2 * i);
          if ( v54 > 0.0 )
          {
            v55 = (float)(*(&v94.y + 2 * i) - *(&v78.top + 2 * i)) / *(&v87.y + 2 * i);
            if ( v55 > 0.0 && (float)((float)(v55 * v55) + (float)(v54 * v54)) > 1.0 )
              return 0;
          }
        }
      }
    }
  }
  return 1;
}
