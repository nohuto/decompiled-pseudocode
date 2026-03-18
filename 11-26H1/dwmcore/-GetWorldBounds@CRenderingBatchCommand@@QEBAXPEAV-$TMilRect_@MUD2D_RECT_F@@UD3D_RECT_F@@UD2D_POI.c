/*
 * XREFs of ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CDE50
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CDD20 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800CF010 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderingBatchCommand::GetWorldBounds(__int64 a1, __int64 a2)
{
  int v4; // ecx
  float *v5; // rcx
  __int64 v6; // rdx
  FLOAT v7; // eax
  __int64 v8; // rax
  float *v9; // rcx
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  char v14; // cl
  unsigned __int32 v15; // xmm4_4
  float v16; // xmm10_4
  float v17; // xmm9_4
  char v18; // cl
  float v19; // xmm7_4
  float v20; // xmm5_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  __int64 v23; // r12
  char IsTranslateAndScaleIgnore; // al
  float v25; // xmm0_4
  float v26; // xmm6_4
  unsigned int v27; // esi
  __int64 v28; // r13
  float v29; // xmm0_4
  int v30; // ecx
  __int64 v31; // r8
  unsigned __int64 v32; // r14
  __int64 v33; // r15
  char v34; // cl
  float x; // xmm0_4
  unsigned __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm6_4
  float v41; // xmm7_4
  float v42; // xmm8_4
  float v43; // xmm9_4
  float v44; // xmm0_4
  float v45; // xmm4_4
  unsigned int v46; // ecx
  unsigned __int64 v47; // rax
  float *v48; // rbx
  CMILMatrix *v49; // rcx
  float v50; // xmm6_4
  float v51; // xmm8_4
  float v52; // xmm7_4
  float v53; // xmm9_4
  float v54; // xmm0_4
  float v55; // xmm0_4
  unsigned int v56; // ecx
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rax
  float v60; // xmm2_4
  float v61; // xmm3_4
  char v62; // cl
  __int64 v63; // rax
  unsigned int v64; // edx
  unsigned __int64 v65; // rcx
  float v66; // xmm3_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm0_4
  float v70; // xmm2_4
  float v71; // xmm3_4
  float Y[4]; // [rsp+20h] [rbp-89h] BYREF
  struct D2D_RECT_F v73; // [rsp+30h] [rbp-79h] BYREF
  struct D2D_POINT_2F v74[4]; // [rsp+40h] [rbp-69h] BYREF

  v4 = *(_DWORD *)a1 - 4;
  if ( !v4 )
  {
    v5 = *(float **)(a1 + 96);
    v6 = *(int *)v5;
    if ( (_DWORD)v6 )
    {
      v73.left = v5[1];
      v73.right = v5[2];
      v7 = v5[3];
      v73.bottom = v5[2 * v6 + 1];
      v73.top = v7;
      *(__m128 *)a2 = _mm_mul_ps(_mm_cvtepi32_ps((__m128i)v73), (__m128)_xmm);
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
    return;
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v4 != 1 )
  {
    v9 = *(float **)(v8 + 16);
    v10 = v9[14];
    v11 = v9[15];
    v12 = v9[16];
    v13 = v9[17];
    v14 = *(_BYTE *)(a1 + 80);
    v73.left = v10;
    v73.top = v11;
    v73.right = v12;
    v73.bottom = v13;
    if ( (char)(4 * v14) >> 6 == 1 )
    {
      v15 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v16 = FLOAT_1_0;
      v17 = *(float *)&FLOAT_0_000081380211;
    }
    else
    {
      if ( (char)(4 * v14) >> 6 < 0 )
      {
LABEL_7:
        *(float *)a2 = v10 + *(float *)(a1 + 64);
        *(float *)(a2 + 4) = v11 + *(float *)(a1 + 68);
        *(float *)(a2 + 8) = v12 + *(float *)(a1 + 64);
        *(float *)(a2 + 12) = v13 + *(float *)(a1 + 68);
        return;
      }
      IsTranslateAndScaleIgnore = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1 + 16);
      v15 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v16 = FLOAT_1_0;
      v17 = *(float *)&FLOAT_0_000081380211;
      if ( IsTranslateAndScaleIgnore
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 1.0) & v15) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 1.0) & v15) < 0.000081380211 )
      {
        *(_BYTE *)(a1 + 80) = *(_BYTE *)(a1 + 80) & 0xCF ^ 0x30;
        goto LABEL_7;
      }
      v14 = *(_BYTE *)(a1 + 80) & 0xCF ^ 0x10;
      *(_BYTE *)(a1 + 80) = v14;
    }
    v18 = v14 >> 6;
    if ( v18 > 0 )
      goto LABEL_36;
    if ( v18 < 0 )
    {
LABEL_13:
      v19 = (float)(v10 * *(float *)(a1 + 16)) + *(float *)(a1 + 64);
      *(float *)a2 = v19;
      v20 = (float)(v11 * *(float *)(a1 + 36)) + *(float *)(a1 + 68);
      *(float *)(a2 + 4) = v20;
      v21 = (float)(v12 * *(float *)(a1 + 16)) + *(float *)(a1 + 64);
      *(float *)(a2 + 8) = v21;
      v22 = (float)(v13 * *(float *)(a1 + 36)) + *(float *)(a1 + 68);
      *(float *)(a2 + 12) = v22;
      if ( *(float *)(a1 + 16) <= 0.0 || *(float *)(a1 + 36) <= 0.0 )
      {
        if ( v19 > v21 )
        {
          *(float *)a2 = v21;
          *(float *)(a2 + 8) = v19;
        }
        if ( v20 > v22 )
        {
          *(float *)(a2 + 4) = v22;
          *(float *)(a2 + 12) = v20;
        }
      }
      return;
    }
    v34 = *(_BYTE *)(a1 + 81);
    if ( (char)(4 * v34) >> 6 != 1 )
    {
      if ( (char)(4 * v34) >> 6 < 0 )
      {
LABEL_34:
        if ( v17 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 0.0) & v15)
          && v17 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & v15) )
        {
          *(_BYTE *)(a1 + 80) |= 0xC0u;
          goto LABEL_13;
        }
        goto LABEL_35;
      }
      v62 = v34 & 0xCF;
      if ( v17 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & v15) * 61440.0)
                                              + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v15) * 61440.0))
                                      + COERCE_FLOAT(*(_DWORD *)(a1 + 76) & v15))
                              - v16) & v15) )
      {
        *(_BYTE *)(a1 + 81) = v62 ^ 0x30;
        goto LABEL_34;
      }
      *(_BYTE *)(a1 + 81) = v62 ^ 0x10;
    }
LABEL_35:
    *(_BYTE *)(a1 + 80) &= 0x3Fu;
    *(_BYTE *)(a1 + 80) |= 0x40u;
LABEL_36:
    CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)(a1 + 16), &v73, v74);
    x = v74[0].x;
    v36 = 1LL;
    v37 = v74[0].y;
    v38 = v74[0].x;
    *(FLOAT *)a2 = v74[0].x;
    v39 = v37;
    *(float *)(a2 + 4) = v37;
    *(float *)(a2 + 8) = v38;
    *(float *)(a2 + 12) = v37;
    do
    {
      x = fminf(x, v74[v36].x);
      *(float *)a2 = x;
      v37 = fminf(v37, v74[v36].y);
      *(float *)(a2 + 4) = v37;
      v38 = fmaxf(v38, v74[v36].x);
      *(float *)(a2 + 8) = v38;
      v39 = fmaxf(v39, v74[v36++].y);
      *(float *)(a2 + 12) = v39;
    }
    while ( v36 < 4 );
    return;
  }
  v23 = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)v23 && *(float *)(a1 + 104) == *(float *)(v8 + 100) && *(float *)(a1 + 108) == *(float *)(v8 + 104) )
  {
    v73 = *(struct D2D_RECT_F *)(*(_QWORD *)(v8 + 16) + 56LL);
    CMILMatrix::Transform2DBoundsHelper<0>(a1 + 16, &v73, (float *)a2);
    return;
  }
  v25 = *(float *)(a1 + 108);
  v26 = *(float *)(a1 + 104);
  if ( v26 >= v25 )
  {
    v40 = FLOAT_3_4028235e38;
    v41 = FLOAT_N3_4028235e38;
    v42 = FLOAT_3_4028235e38;
    v43 = FLOAT_N3_4028235e38;
  }
  else
  {
    v27 = 0;
    v28 = *(_QWORD *)(*(_QWORD *)(v8 + 88) + 8 * v23 + 40);
    Y[0] = 0.0;
    v29 = modff(v25, Y);
    v30 = (int)Y[0];
    if ( COERCE_FLOAT(LODWORD(v29) & _xmm) < 0.000081380211 )
      LOWORD(v30) = v30 - 1;
    v31 = (unsigned __int16)v30 - (unsigned __int16)(int)v26 + 1;
    v32 = 2 * v31 + 2;
    v33 = *(_QWORD *)(v28 + 40) + 8LL * (unsigned __int16)(2 * (int)v26);
    if ( !v33 && 2 * v31 != -2 || !*(_QWORD *)(v28 + 48) && 6 * v31 )
      goto LABEL_31;
    v54 = *(float *)(a1 + 104);
    Y[0] = 0.0;
    v55 = modff(v54, Y);
    v40 = FLOAT_3_4028235e38;
    v41 = FLOAT_N3_4028235e38;
    v42 = FLOAT_3_4028235e38;
    v43 = FLOAT_N3_4028235e38;
    if ( v55 <= 0.000081380211 )
    {
      while ( v27 < v32 )
      {
        v40 = fminf(v40, *(float *)(v33 + 8LL * v27));
        v42 = fminf(v42, *(float *)(v33 + 8LL * v27 + 4));
        v41 = fmaxf(v41, *(float *)(v33 + 8LL * v27));
        v43 = fmaxf(v43, *(float *)(v33 + 8LL * v27++ + 4));
        if ( v27 >= 2 )
          goto LABEL_43;
      }
LABEL_31:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    do
    {
      v58 = v27;
      if ( v27 >= v32 )
        goto LABEL_31;
      v59 = v27 + 2;
      if ( v59 >= v32 )
        goto LABEL_31;
      ++v27;
      v60 = (float)(v55 * *(float *)(v33 + 8 * v59 + 4)) + (float)((float)(1.0 - v55) * *(float *)(v33 + 8 * v58 + 4));
      v61 = (float)((float)(1.0 - v55) * *(float *)(v33 + 8 * v58)) + (float)(v55 * *(float *)(v33 + 8 * v59));
      v42 = fminf(v42, v60);
      v43 = fmaxf(v43, v60);
      v40 = fminf(v40, v61);
      v41 = fmaxf(v41, v61);
    }
    while ( v27 < 2 );
LABEL_43:
    if ( (_DWORD)v23 != 1 )
    {
      v56 = 2;
      if ( v32 - 2 > 2 )
      {
        v57 = 2LL;
        while ( v57 < v32 )
        {
          v40 = fminf(v40, *(float *)(v33 + 8 * v57));
          v42 = fminf(v42, *(float *)(v33 + 8 * v57 + 4));
          v41 = fmaxf(v41, *(float *)(v33 + 8 * v57));
          v43 = fmaxf(v43, *(float *)(v33 + 8 * v57 + 4));
          v57 = ++v56;
          if ( v56 >= v32 - 2 )
            goto LABEL_44;
        }
        goto LABEL_31;
      }
    }
LABEL_44:
    v44 = *(float *)(a1 + 108);
    Y[0] = 0.0;
    v45 = modff(v44, Y);
    if ( v45 > 0.000081380211 )
    {
      v63 = (unsigned int)(v32 - 4);
      v64 = v63 + 2;
      v65 = (unsigned int)(v63 + 2);
      if ( v65 < v32 )
      {
        while ( (unsigned int)v63 < v32 && v65 < v32 )
        {
          ++v64;
          v66 = v45 * *(float *)(v33 + 8 * v65);
          v67 = v45 * *(float *)(v33 + 8 * v65 + 4);
          v65 = v64;
          v68 = (float)(1.0 - v45) * *(float *)(v33 + 8 * v63 + 4);
          v69 = (float)(1.0 - v45) * *(float *)(v33 + 8 * v63);
          v63 = (unsigned int)(v63 + 1);
          v70 = v67 + v68;
          v71 = v66 + v69;
          v42 = fminf(v42, v70);
          v43 = fmaxf(v43, v70);
          v40 = fminf(v40, v71);
          v41 = fmaxf(v41, v71);
          if ( v64 >= v32 )
            goto LABEL_47;
        }
        goto LABEL_31;
      }
    }
    else
    {
      v46 = v32 - 2;
      v47 = (unsigned int)(v32 - 2);
      if ( v47 < v32 )
      {
        do
        {
          v40 = fminf(v40, *(float *)(v33 + 8 * v47));
          v42 = fminf(v42, *(float *)(v33 + 8 * v47 + 4));
          v41 = fmaxf(v41, *(float *)(v33 + 8 * v47));
          v43 = fmaxf(v43, *(float *)(v33 + 8 * v47 + 4));
          v47 = ++v46;
        }
        while ( v46 < v32 );
      }
    }
  }
LABEL_47:
  v48 = (float *)(a1 + 16);
  v73.left = v40;
  v73.top = v42;
  v73.right = v41;
  v73.bottom = v43;
  if ( CMILMatrix::IsTranslateIgnoreZ<1>((__int64)v48) )
  {
    *(float *)a2 = v40 + v48[12];
    *(float *)(a2 + 4) = v42 + v48[13];
    *(float *)(a2 + 8) = v41 + v48[12];
    *(float *)(a2 + 12) = v43 + v48[13];
  }
  else if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v48) )
  {
    v50 = (float)(v40 * *v48) + v48[12];
    *(float *)a2 = v50;
    v51 = (float)(v42 * v48[5]) + v48[13];
    *(float *)(a2 + 4) = v51;
    v52 = (float)(v41 * *v48) + v48[12];
    *(float *)(a2 + 8) = v52;
    v53 = (float)(v43 * v48[5]) + v48[13];
    *(float *)(a2 + 12) = v53;
    if ( *v48 <= 0.0 || v48[5] <= 0.0 )
    {
      if ( v50 > v52 )
      {
        *(float *)a2 = v52;
        *(float *)(a2 + 8) = v50;
      }
      if ( v51 > v53 )
      {
        *(float *)(a2 + 4) = v53;
        *(float *)(a2 + 12) = v51;
      }
    }
  }
  else
  {
    CMILMatrix::Transform2DRectToPerspective(v49, &v73, v74);
    *(_QWORD *)&v73.left = 4LL;
    *(_QWORD *)&v73.right = v74;
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
      a2,
      &v73);
  }
}
