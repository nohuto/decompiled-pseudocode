/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802ABCC0 (-GetTransform@CDxHandleBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18005F788 (-IsWellOrdered@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005FDD0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1BF0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B38B0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18016CEE0 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  __int64 v6; // r14
  int *v7; // rdi
  float v8; // xmm2_4
  float v9; // xmm1_4
  int v10; // r12d
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // r13d
  int v13; // eax
  char v14; // cl
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm5_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm6_4
  float v21; // xmm2_4
  float v22; // xmm7_4
  __m128i si128; // xmm9
  unsigned __int32 v24; // xmm14_4
  char v26; // cl
  char v27; // r8
  float v28; // xmm6_4
  char v29; // dl
  char v30; // al
  __m128 v31; // xmm2
  __m128 v32; // xmm3
  __m128 v33; // xmm10
  __m128 v34; // xmm6
  __m128 v35; // xmm11
  __m128 v36; // xmm5
  __m128 v37; // xmm3
  __m128 v38; // xmm1
  __m128 v39; // xmm10
  int *v40; // r12
  bool v41; // cl
  int *v42; // r9
  int v43; // eax
  int v44; // ecx
  int v45; // edx
  int v46; // r8d
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm7_4
  char v50; // al
  char v51; // cl
  float v52; // xmm7_4
  float v53; // xmm5_4
  char v54; // al
  char v55; // cl
  char v56; // cl
  char v57; // cl
  char v58; // al
  __m128 v59; // xmm1
  int v60; // eax
  __int128 v61; // xmm0
  float v62; // xmm4_4
  float v63; // xmm5_4
  float v64; // xmm7_4
  __m128 v65; // xmm1
  int v66; // eax
  __m128 v67; // xmm0
  __int128 v68; // xmm1
  char v69; // cl
  float v70; // xmm0_4
  float v71; // xmm3_4
  float v72; // xmm1_4
  float v73; // xmm2_4
  char v74; // al
  float v75; // xmm3_4
  float v76; // xmm2_4
  float v77; // xmm4_4
  float v78; // xmm4_4
  float v79; // xmm5_4
  float v80; // xmm7_4
  char v81; // cl
  char v82; // al
  float v83; // xmm7_4
  float v84; // xmm5_4
  float v85; // xmm3_4
  float v86; // xmm7_4
  float v87; // xmm8_4
  float v88; // xmm1_4
  float v89; // xmm9_4
  float v90; // xmm0_4
  float v91; // xmm2_4
  float v92; // xmm6_4
  float v93; // xmm5_4
  float v94; // xmm11_4
  float v95; // xmm1_4
  char v96; // al
  float v97; // xmm2_4
  float v98; // xmm3_4
  float v99; // xmm1_4
  float v100; // xmm0_4
  float v101; // xmm0_4
  float v102; // xmm2_4
  float v103; // xmm1_4
  float v104; // xmm8_4
  float v105; // xmm6_4
  float v106; // xmm3_4
  float v107; // xmm1_4
  float v108; // xmm0_4
  float v109; // xmm8_4
  float v110; // xmm0_4
  float v111; // xmm1_4
  float v112; // xmm3_4
  char v113; // dl
  char v114; // cl
  int v115; // xmm0_4
  char v116; // dl
  char v117; // al
  int v118; // xmm0_4
  float v119; // xmm2_4
  float v120; // xmm3_4
  float v121; // xmm0_4
  float v122; // xmm1_4
  float v123; // xmm2_4
  float v124; // xmm0_4
  float v125; // xmm1_4
  float v126; // xmm3_4
  float v127; // xmm2_4
  float v128; // xmm0_4
  float v129; // xmm1_4
  float v130; // xmm3_4
  float v131; // xmm0_4
  float v132; // xmm1_4
  float v133; // xmm3_4
  char v134; // dl
  char v135; // al
  int v136; // xmm0_4
  char v137; // al
  char v138; // r8
  char v139; // dl
  float v140; // xmm2_4
  float v141; // xmm3_4
  float v142; // xmm0_4
  float v143; // xmm1_4
  float v144; // xmm2_4
  float v145; // xmm0_4
  float v146; // xmm1_4
  float v147; // xmm3_4
  float v148; // xmm2_4
  float v149; // xmm0_4
  float v150; // xmm1_4
  float v151; // xmm3_4
  float v152; // xmm0_4
  float v153; // xmm1_4
  float v154; // xmm3_4
  char v155; // cl
  char v156; // r9
  char v157; // al
  char v158; // r8
  float v159; // xmm5_4
  char v160; // cl
  char v161; // cl
  char v162; // al
  char v163; // cl
  char v164; // cl
  char v165; // cl
  __m128 v166; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v167; // [rsp+38h] [rbp-D0h]
  __m128 v168; // [rsp+48h] [rbp-C0h]
  _BYTE v169[20]; // [rsp+58h] [rbp-B0h]
  int v170; // [rsp+78h] [rbp-90h] BYREF
  int v171; // [rsp+7Ch] [rbp-8Ch]

  if ( *(_QWORD *)(a1 + 296) )
  {
    if ( !*(_BYTE *)(a1 + 313) )
      return CBitmapRealization::GetTransform();
    v6 = a1 - 80;
    if ( *(_BYTE *)(a1 - 80 + 320) )
    {
      v7 = (int *)(a1 + 224);
      goto LABEL_5;
    }
    v40 = (int *)(v6 + 156);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 48LL))(a1 - 80, &v170);
    v41 = 0;
    if ( *(_DWORD *)(v6 + 300) == 2 )
    {
      if ( *(_DWORD *)(v6 + 164) - *(_DWORD *)(v6 + 156) > 0 )
        v41 = *(_DWORD *)(v6 + 168) - *(_DWORD *)(v6 + 160) > 0;
      v7 = (int *)(v6 + 304);
      v42 = (int *)(v6 + 304);
      if ( v41 )
        goto LABEL_45;
    }
    else
    {
      if ( TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsWellOrdered((_DWORD *)(v6 + 156))
        && ((unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty()
         || *v40 >= 0 && *(int *)(v6 + 160) >= 0 && *(_DWORD *)(v6 + 164) <= v170 && *(_DWORD *)(v6 + 168) <= v171) )
      {
        v7 = (int *)(a1 + 224);
        v42 = v7;
LABEL_45:
        v43 = *(_DWORD *)(v6 + 168);
        v44 = *(_DWORD *)(v6 + 164);
        v45 = *(_DWORD *)(v6 + 160);
        v46 = *v40;
LABEL_46:
        *v42 = v46;
        v7[1] = v45;
        v7[2] = v44;
        v7[3] = v43;
        *(_BYTE *)(v6 + 320) = 1;
LABEL_5:
        v8 = (float)*v7;
        v9 = (float)v7[1];
        *(_QWORD *)a2 = 1065353216LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_DWORD *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 20) = 1065353216LL;
        *(_QWORD *)(a2 + 28) = 0LL;
        *(_DWORD *)(a2 + 36) = 0;
        *(_QWORD *)(a2 + 40) = 1065353216LL;
        *(_DWORD *)(a2 + 48) = LODWORD(v8) ^ _xmm;
        *(_QWORD *)(a2 + 52) = LODWORD(v9) ^ (unsigned int)_xmm;
        *(_DWORD *)(a2 + 60) = 1065353216;
        *(_BYTE *)(a2 + 65) &= 0xE9u;
        *(_BYTE *)(a2 + 65) |= 0x29u;
        *(_BYTE *)(a2 + 64) = -88;
        v10 = v7[2] - *v7;
        v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL);
        v12 = v7[3] - v7[1];
        *(_DWORD *)&v169[16] = 0;
        v13 = v11(v6);
        if ( v13 == 1 )
        {
LABEL_14:
          v17 = *(float *)(v6 + 176);
          v18 = *(float *)(v6 + 180);
          v19 = *(float *)(v6 + 184);
          v20 = *(float *)(v6 + 188);
          v21 = *(float *)(v6 + 192);
          v22 = *(float *)(v6 + 196);
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v24 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
          *(_QWORD *)&v169[12] = 0x28083F800000LL;
          v166 = (__m128)__PAIR64__(LODWORD(v18), LODWORD(v17));
          v167 = (__m128)__PAIR64__(LODWORD(v20), LODWORD(v19));
          *(float *)v169 = v21;
          *(float *)&v169[4] = v22;
          v168 = (__m128)si128;
          *(_DWORD *)&v169[8] = 0;
          if ( v18 == 0.0 && v19 == 0.0 )
          {
            v169[16] = -120;
            if ( v17 == 1.0 && v20 == 1.0 )
            {
              v169[16] = -88;
              if ( v21 == 0.0 && v22 == 0.0 )
                goto LABEL_57;
            }
          }
          v26 = *(_BYTE *)(a2 + 64);
          if ( (char)(v26 << 6) >> 6 == 1 )
          {
            v28 = *(float *)&FLOAT_0_000081380211;
            goto LABEL_35;
          }
          if ( (char)(v26 << 6) >> 6 < 0 )
          {
LABEL_75:
            v59 = v167;
            v60 = *(_DWORD *)&v169[16];
            *(__m128 *)a2 = v166;
            v61 = *(_OWORD *)v169;
            *(__m128 *)(a2 + 16) = v59;
            *(__m128i *)(a2 + 32) = si128;
            *(_OWORD *)(a2 + 48) = v61;
            *(_DWORD *)(a2 + 64) = v60;
LABEL_57:
            if ( a3 )
            {
              *a3 = (float)*v7;
              a3[1] = (float)v7[1];
              a3[2] = (float)v7[2];
              a3[3] = (float)v7[3];
            }
            v54 = (char)(*(_BYTE *)(a2 + 64) << 6) >> 6;
            if ( v54 == 1 )
              return 1;
            if ( v54 < 0 && v54 == -2 )
              return 0;
            v55 = *(_BYTE *)(a2 + 65);
            if ( (char)(16 * v55) >> 6 != 1 )
            {
              if ( (char)(16 * v55) >> 6 != 0xFE )
              {
                v56 = (char)(4 * v55) >> 6;
                if ( v56 > 0 )
                  return 1;
                if ( v56 == -2 )
                {
                  v58 = (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 44) & v24) * 61440.0) == 0.0;
                }
                else
                {
                  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v24) * 61440.0)
                                     + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v24) * 61440.0))
                             + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v24)) == 1.0 )
                  {
                    v57 = 1;
                    *(_BYTE *)(a2 + 65) = *(_BYTE *)(a2 + 65) & 0xCF ^ 0x20;
                  }
                  else
                  {
                    v57 = 0;
                  }
                  v58 = v57 & ((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 44) & v24) * 61440.0) == 0.0);
                }
                if ( !v58 || *(float *)(a2 + 32) != 0.0 || *(float *)(a2 + 36) != 0.0 )
                  return 1;
                *(_BYTE *)(a2 + 65) = *(_BYTE *)(a2 + 65) & 0xF3 ^ 8;
              }
              if ( (char)(16 * *(_BYTE *)(a2 + 64)) >> 6 != 1 )
              {
                if ( (char)(16 * *(_BYTE *)(a2 + 64)) >> 6 != 0xFE )
                {
                  v165 = *(_BYTE *)(a2 + 65);
                  if ( (char)(4 * v165) >> 6 == 1 )
                    return 1;
                  if ( (char)(4 * v165) >> 6 != 0xFE )
                  {
                    if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v24) * 61440.0)
                                       + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v24) * 61440.0))
                               + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v24)) != 1.0 )
                      return 1;
                    *(_BYTE *)(a2 + 65) = v165 & 0xCF ^ 0x20;
                  }
                  if ( *(float *)(a2 + 8) != 0.0 || *(float *)(a2 + 24) != 0.0 )
                    return 1;
                  *(_BYTE *)(a2 + 64) = *(_BYTE *)(a2 + 64) & 0xF3 ^ 8;
                }
                v161 = *(_BYTE *)(a2 + 64);
                v162 = (char)(4 * v161) >> 6;
                if ( v162 != 1 )
                {
                  if ( v162 >= 0 || v162 != -2 )
                  {
                    v163 = v161 >> 6;
                    if ( v163 > 0 )
                      return 1;
                    if ( v163 >= 0 || v163 != -2 )
                    {
                      v164 = *(_BYTE *)(a2 + 65);
                      if ( (char)(4 * v164) >> 6 == 1 )
                        return 1;
                      if ( (char)(4 * v164) >> 6 != 0xFE )
                      {
                        if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v24) * 61440.0)
                                           + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v24) * 61440.0))
                                   + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v24)) != 1.0 )
                          return 1;
                        *(_BYTE *)(a2 + 65) = v164 & 0xCF ^ 0x20;
                      }
                      if ( *(float *)(a2 + 4) != 0.0 || *(float *)(a2 + 16) != 0.0 )
                        return 1;
                      *(_BYTE *)(a2 + 64) = *(_BYTE *)(a2 + 64) & 0x3F | 0x80;
                    }
                    if ( *(float *)a2 != 1.0 || *(float *)(a2 + 20) != 1.0 )
                      return 1;
                    *(_BYTE *)(a2 + 64) = *(_BYTE *)(a2 + 64) & 0xCF ^ 0x20;
                  }
                  if ( *(float *)(a2 + 40) == 1.0
                    && *(float *)(a2 + 48) == 0.0
                    && *(float *)(a2 + 52) == 0.0
                    && *(float *)(a2 + 56) == 0.0 )
                  {
                    *(_BYTE *)(a2 + 64) = *(_BYTE *)(a2 + 64) & 0xFC ^ 2;
                    return 0;
                  }
                }
              }
            }
            return 1;
          }
          v27 = *(_BYTE *)(a2 + 65);
          v28 = *(float *)&FLOAT_0_000081380211;
          if ( (v27 & 8) == 0 && 16 * (v27 & 0xFC) != 0 )
            goto LABEL_32;
          v29 = *(_BYTE *)(a2 + 64);
          if ( (v27 & 8) == 0 )
          {
            v137 = *(_BYTE *)(a2 + 65);
            if ( (char)(4 * v27) >> 6 == 1
              || ((char)(4 * v27) >> 6 >= 0
                ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v24) * 61440.0)
                                                + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v24) * 61440.0))
                                        + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v24))
                                - 1.0) & v24) >= 0.000081380211
                 ? (v156 = 0, v157 = 16)
                 : (v156 = 1, v157 = -16),
                   v138 = v157 ^ (v157 ^ v27) & 0xCF,
                   v139 = v156 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 44) & v24)
                                                                         * 61440.0) - 0.0) & v24) < 0.000081380211))
                : (v138 = *(_BYTE *)(a2 + 65),
                   v139 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 44) & v24) * 61440.0) - 0.0) & v24) < 0.000081380211),
                  (v137 = v138, !v139)
               || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a2 + 32) - 0.0) & v24) >= 0.000081380211
               || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a2 + 36) - 0.0) & v24) >= 0.000081380211) )
            {
              *(_BYTE *)(a2 + 65) = v137 & 0xF3 ^ 4;
              goto LABEL_32;
            }
            v29 = *(_BYTE *)(a2 + 64);
            v27 = v138 & 0xF3 ^ 0xC;
            *(_BYTE *)(a2 + 65) = v27;
          }
          if ( (char)(16 * v26) >> 6 != 1 )
          {
            if ( (char)(16 * v26) >> 6 >= 0 )
            {
              if ( (char)(4 * v27) >> 6 == 1 )
                goto LABEL_140;
              if ( (char)(4 * v27) >> 6 >= 0 )
              {
                v158 = v27 & 0xCF;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                    (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v24) * 61440.0)
                                                  + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v24) * 61440.0))
                                          + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v24))
                                  - 1.0) & v24) >= 0.000081380211 )
                {
                  v160 = v26 & 0xF3 ^ 4;
                  *(_BYTE *)(a2 + 65) = v158 ^ 0x10;
                  *(_BYTE *)(a2 + 64) = v160;
                  v30 = v160;
                  goto LABEL_30;
                }
                *(_BYTE *)(a2 + 65) = v158 ^ 0x30;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a2 + 8) - 0.0) & v24) >= 0.000081380211
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a2 + 24) - 0.0) & v24) >= 0.000081380211 )
              {
LABEL_140:
                v155 = v26 & 0xF3 ^ 4;
                *(_BYTE *)(a2 + 64) = v155;
                v30 = v155;
                goto LABEL_30;
              }
              v29 = v26 & 0xF3 ^ 0xC;
              *(_BYTE *)(a2 + 64) = v29;
            }
            if ( (char)(4 * v29) >> 6 != 1 )
            {
              if ( (char)(4 * v29) >> 6 >= 0 )
              {
                if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a2)
                  || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - 1.0) & v24) >= 0.000081380211
                  || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a2 + 20) - 1.0) & v24) >= 0.000081380211 )
                {
                  v30 = *(_BYTE *)(a2 + 64) & 0xCF ^ 0x10;
                  goto LABEL_30;
                }
                v29 = *(_BYTE *)(a2 + 64) & 0xCF ^ 0x30;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a2 + 40) - 1.0) & v24) < 0.000081380211 )
              {
                v30 = v29;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a2 + 48) - 0.0) & v24) < 0.000081380211
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a2 + 52) - 0.0) & v24) < 0.000081380211 )
                {
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a2 + 56) - 0.0) & v24) >= 0.000081380211 )
                  {
                    *(_BYTE *)(a2 + 64) = v29 & 0xFC ^ 1;
LABEL_35:
                    if ( !(unsigned __int8)CMILMatrix::IsIdentity<1>(&v166) )
                    {
                      if ( CMILMatrix::IsTranslate<1>((__int64)&v166) )
                      {
                        v47 = *(float *)v169;
                        v48 = *(float *)&v169[8];
                        v49 = *(float *)&v169[4];
                        if ( v28 <= COERCE_FLOAT(*(_DWORD *)v169 & v24)
                          || v28 <= COERCE_FLOAT(*(_DWORD *)&v169[4] & v24)
                          || v28 <= COERCE_FLOAT(*(_DWORD *)&v169[8] & v24) )
                        {
                          v50 = *(_BYTE *)(a2 + 65);
                          if ( (char)(4 * v50) >> 6 == 1
                            || ((char)(4 * v50) >> 6 >= 0
                              ? (v28 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                       (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v24)
                                                                             * 61440.0)
                                                                     + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v24)
                                                                             * 61440.0))
                                                             + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v24))
                                                     - 1.0) & v24)
                               ? (v113 = 0, v114 = 16)
                               : (v113 = 1, v114 = -16),
                                 v115 = *(_DWORD *)(a2 + 44) & v24,
                                 v50 = v114 ^ (v114 ^ v50) & 0xCF,
                                 *(_BYTE *)(a2 + 65) = v50,
                                 v51 = v113 & (v28 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v115 * 61440.0) - 0.0) & v24)))
                              : (v51 = v28 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                            (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 44) & v24) * 61440.0)
                                                          - 0.0) & v24)),
                                !v51) )
                          {
                            v119 = *(float *)(a2 + 12);
                            v120 = *(float *)(a2 + 28);
                            v121 = v119 * v47;
                            *(_BYTE *)(a2 + 65) = v50 & 0xF3;
                            v122 = (float)(v119 * v49) + *(float *)(a2 + 4);
                            v123 = (float)(v119 * v48) + *(float *)(a2 + 8);
                            *(float *)a2 = v121 + *(float *)a2;
                            *(float *)(a2 + 4) = v122;
                            v124 = (float)(v120 * v47) + *(float *)(a2 + 16);
                            v125 = (float)(v120 * v49) + *(float *)(a2 + 20);
                            *(float *)(a2 + 8) = v123;
                            v126 = (float)(v120 * v48) + *(float *)(a2 + 24);
                            v127 = *(float *)(a2 + 44);
                            *(float *)(a2 + 16) = v124;
                            *(float *)(a2 + 20) = v125;
                            v128 = (float)(v127 * v47) + *(float *)(a2 + 32);
                            *(float *)(a2 + 24) = v126;
                            v129 = (float)(v127 * v49) + *(float *)(a2 + 36);
                            v130 = *(float *)(a2 + 60);
                            *(float *)(a2 + 32) = v128;
                            *(float *)(a2 + 36) = v129;
                            v131 = (float)(v130 * v47) + *(float *)(a2 + 48);
                            v132 = (float)(v130 * v49) + *(float *)(a2 + 52);
                            *(float *)(a2 + 40) = (float)(v127 * v48) + *(float *)(a2 + 40);
                            v133 = (float)(v130 * v48) + *(float *)(a2 + 56);
                            *(float *)(a2 + 48) = v131;
                            *(float *)(a2 + 52) = v132;
                            *(float *)(a2 + 56) = v133;
                          }
                          else
                          {
                            v52 = v49 + *(float *)(a2 + 52);
                            v53 = v48 + *(float *)(a2 + 56);
                            *(float *)(a2 + 48) = v47 + *(float *)(a2 + 48);
                            *(float *)(a2 + 52) = v52;
                            *(float *)(a2 + 56) = v53;
                          }
                          *(_BYTE *)(a2 + 64) &= 0xFCu;
                        }
                      }
                      else if ( CMILMatrix::IsTranslate<1>(a2) )
                      {
                        v62 = *(float *)(a2 + 48);
                        v63 = *(float *)(a2 + 52);
                        v64 = *(float *)(a2 + 56);
                        v65 = v167;
                        v66 = *(_DWORD *)&v169[16];
                        *(__m128 *)a2 = v166;
                        v67 = v168;
                        *(__m128 *)(a2 + 16) = v65;
                        v68 = *(_OWORD *)v169;
                        *(__m128 *)(a2 + 32) = v67;
                        *(_OWORD *)(a2 + 48) = v68;
                        *(_DWORD *)(a2 + 64) = v66;
                        if ( v28 <= COERCE_FLOAT(LODWORD(v62) & v24)
                          || v28 <= COERCE_FLOAT(LODWORD(v63) & v24)
                          || v28 <= COERCE_FLOAT(LODWORD(v64) & v24) )
                        {
                          v69 = *(_BYTE *)(a2 + 65);
                          v70 = v62 * *(float *)(a2 + 8);
                          v71 = (float)((float)(v63 * *(float *)(a2 + 20)) + (float)(v62 * *(float *)(a2 + 4)))
                              + (float)(v64 * *(float *)(a2 + 36));
                          v72 = v64 * *(float *)(a2 + 40);
                          *(float *)(a2 + 48) = (float)((float)((float)(v63 * *(float *)(a2 + 16))
                                                              + (float)(v62 * *(float *)a2))
                                                      + (float)(v64 * *(float *)(a2 + 32)))
                                              + *(float *)(a2 + 48);
                          v73 = (float)(v63 * *(float *)(a2 + 24)) + v70;
                          *(float *)(a2 + 52) = v71 + *(float *)(a2 + 52);
                          *(float *)(a2 + 56) = (float)(v73 + v72) + *(float *)(a2 + 56);
                          if ( (char)(4 * v69) >> 6 == 1
                            || ((char)(4 * v69) >> 6 >= 0
                              ? (v28 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                       (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v24)
                                                                             * 61440.0)
                                                                     + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v24)
                                                                             * 61440.0))
                                                             + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v24))
                                                     - 1.0) & v24)
                               ? (v116 = 0, v117 = 16)
                               : (v116 = 1, v117 = -16),
                                 v118 = *(_DWORD *)(a2 + 44) & v24,
                                 *(_BYTE *)(a2 + 65) = v117 ^ (v117 ^ v69) & 0xCF,
                                 v74 = v116 & (v28 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v118 * 61440.0) - 0.0) & v24)))
                              : (v74 = v28 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                            (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 44) & v24) * 61440.0)
                                                          - 0.0) & v24)),
                                !v74) )
                          {
                            v159 = v63 * *(float *)(a2 + 28);
                            *(_DWORD *)(a2 + 64) = 0;
                            *(float *)(a2 + 60) = (float)((float)(v159 + (float)(v62 * *(float *)(a2 + 12)))
                                                        + (float)(v64 * *(float *)(a2 + 44)))
                                                + *(float *)(a2 + 60);
                          }
                          else
                          {
                            *(_BYTE *)(a2 + 64) &= 0xFCu;
                          }
                        }
                      }
                      else if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(&v166) )
                      {
                        v75 = v166.m128_f32[0];
                        v76 = v168.m128_f32[2];
                        v77 = v167.m128_f32[1];
                        if ( v28 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v166.m128_f32[0] - 1.0) & v24)
                          || v28 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v167.m128_f32[1] - 1.0) & v24)
                          || v28 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v168.m128_f32[2] - 1.0) & v24) )
                        {
                          *(float *)a2 = v166.m128_f32[0] * *(float *)a2;
                          *(float *)(a2 + 16) = v75 * *(float *)(a2 + 16);
                          *(float *)(a2 + 32) = v75 * *(float *)(a2 + 32);
                          *(float *)(a2 + 48) = v75 * *(float *)(a2 + 48);
                          *(float *)(a2 + 4) = v77 * *(float *)(a2 + 4);
                          *(float *)(a2 + 20) = v77 * *(float *)(a2 + 20);
                          *(float *)(a2 + 36) = v77 * *(float *)(a2 + 36);
                          *(float *)(a2 + 52) = v77 * *(float *)(a2 + 52);
                          if ( v28 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v76 - 1.0) & v24) )
                          {
                            *(float *)(a2 + 8) = v76 * *(float *)(a2 + 8);
                            *(float *)(a2 + 24) = v76 * *(float *)(a2 + 24);
                            *(float *)(a2 + 40) = v76 * *(float *)(a2 + 40);
                            *(float *)(a2 + 56) = v76 * *(float *)(a2 + 56);
                          }
                          *(_BYTE *)(a2 + 64) &= 0xCCu;
                        }
                        v78 = *(float *)v169;
                        v79 = *(float *)&v169[8];
                        v80 = *(float *)&v169[4];
                        if ( v28 <= COERCE_FLOAT(*(_DWORD *)v169 & v24)
                          || v28 <= COERCE_FLOAT(*(_DWORD *)&v169[4] & v24)
                          || v28 <= COERCE_FLOAT(*(_DWORD *)&v169[8] & v24) )
                        {
                          v81 = *(_BYTE *)(a2 + 65);
                          if ( (char)(4 * v81) >> 6 == 1
                            || ((char)(4 * v81) >> 6 >= 0
                              ? (v28 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                       (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v24)
                                                                             * 61440.0)
                                                                     + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v24)
                                                                             * 61440.0))
                                                             + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v24))
                                                     - 1.0) & v24)
                               ? (v134 = 0, v135 = 16)
                               : (v134 = 1, v135 = -16),
                                 v136 = *(_DWORD *)(a2 + 44) & v24,
                                 v81 = v135 ^ (v135 ^ v81) & 0xCF,
                                 *(_BYTE *)(a2 + 65) = v81,
                                 v82 = v134 & (v28 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v136 * 61440.0) - 0.0) & v24)))
                              : (v82 = v28 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                            (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 44) & v24) * 61440.0)
                                                          - 0.0) & v24)),
                                !v82) )
                          {
                            v140 = *(float *)(a2 + 12);
                            v141 = *(float *)(a2 + 28);
                            v142 = v140 * v78;
                            *(_BYTE *)(a2 + 65) = v81 & 0xF3;
                            v143 = (float)(v140 * v80) + *(float *)(a2 + 4);
                            v144 = (float)(v140 * v79) + *(float *)(a2 + 8);
                            *(float *)a2 = v142 + *(float *)a2;
                            *(float *)(a2 + 4) = v143;
                            v145 = (float)(v141 * v78) + *(float *)(a2 + 16);
                            v146 = (float)(v141 * v80) + *(float *)(a2 + 20);
                            *(float *)(a2 + 8) = v144;
                            v147 = (float)(v141 * v79) + *(float *)(a2 + 24);
                            v148 = *(float *)(a2 + 44);
                            *(float *)(a2 + 16) = v145;
                            *(float *)(a2 + 20) = v146;
                            v149 = (float)(v148 * v78) + *(float *)(a2 + 32);
                            *(float *)(a2 + 24) = v147;
                            v150 = (float)(v148 * v80) + *(float *)(a2 + 36);
                            v151 = *(float *)(a2 + 60);
                            *(float *)(a2 + 32) = v149;
                            *(float *)(a2 + 36) = v150;
                            v152 = (float)(v151 * v78) + *(float *)(a2 + 48);
                            v153 = (float)(v151 * v80) + *(float *)(a2 + 52);
                            *(float *)(a2 + 40) = (float)(v148 * v79) + *(float *)(a2 + 40);
                            v154 = (float)(v151 * v79) + *(float *)(a2 + 56);
                            *(float *)(a2 + 48) = v152;
                            *(float *)(a2 + 52) = v153;
                            *(float *)(a2 + 56) = v154;
                          }
                          else
                          {
                            v83 = v80 + *(float *)(a2 + 52);
                            v84 = v79 + *(float *)(a2 + 56);
                            *(float *)(a2 + 48) = v78 + *(float *)(a2 + 48);
                            *(float *)(a2 + 52) = v83;
                            *(float *)(a2 + 56) = v84;
                          }
                          *(_BYTE *)(a2 + 64) &= 0xFCu;
                        }
                      }
                      else if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a2)
                             && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v166) )
                      {
                        v85 = *(float *)a2;
                        v86 = v166.m128_f32[0];
                        v87 = v167.m128_f32[0];
                        v88 = v166.m128_f32[0];
                        v89 = v166.m128_f32[1];
                        v90 = v167.m128_f32[0] * *(float *)(a2 + 4);
                        v91 = v166.m128_f32[1];
                        *(_QWORD *)(a2 + 60) = 1065353216LL;
                        v92 = *(float *)(a2 + 20);
                        v93 = *(float *)(a2 + 16);
                        v94 = *(float *)(a2 + 48);
                        v95 = v88 * v85;
                        v96 = *(_BYTE *)(a2 + 65) & 0xC3 | 0x28;
                        *(_QWORD *)(a2 + 8) = 0LL;
                        v97 = v91 * v85;
                        *(_QWORD *)(a2 + 24) = 0LL;
                        v98 = v167.m128_f32[1];
                        v99 = v95 + v90;
                        v100 = v167.m128_f32[1];
                        *(_QWORD *)(a2 + 32) = 0LL;
                        v101 = v100 * *(float *)(a2 + 4);
                        *(_DWORD *)(a2 + 44) = 0;
                        *(_BYTE *)(a2 + 64) = 8;
                        *(float *)a2 = v99;
                        v102 = v97 + v101;
                        v103 = v92 * v87;
                        *(_BYTE *)(a2 + 65) = v96;
                        v104 = v87 * *(float *)(a2 + 52);
                        v105 = v92 * v98;
                        v106 = v98 * *(float *)(a2 + 52);
                        *(float *)(a2 + 16) = v103 + (float)(v86 * v93);
                        v107 = v168.m128_f32[2];
                        v108 = v168.m128_f32[2];
                        *(float *)(a2 + 4) = v102;
                        v109 = (float)(v104 + (float)(v86 * v94)) + *(float *)v169;
                        v110 = v108 * *(float *)(a2 + 40);
                        v111 = (float)(v107 * *(float *)(a2 + 56)) + *(float *)&v169[8];
                        *(float *)(a2 + 20) = v105 + (float)(v89 * v93);
                        *(float *)(a2 + 48) = v109;
                        v112 = (float)(v106 + (float)(v89 * v94)) + *(float *)&v169[4];
                        *(float *)(a2 + 40) = v110;
                        *(float *)(a2 + 56) = v111;
                        *(float *)(a2 + 52) = v112;
                      }
                      else
                      {
                        v31 = *(__m128 *)(a2 + 32);
                        v32 = *(__m128 *)(a2 + 48);
                        v33 = *(__m128 *)(a2 + 16);
                        v34 = v168;
                        v35 = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), *(__m128 *)v169),
                                  _mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v167)),
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v168),
                                  _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v166)));
                        v36 = _mm_add_ps(
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v32, v32, 255), *(__m128 *)v169),
                                  _mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v167)),
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v32, v32, 170), v168),
                                  _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v166)));
                        v37 = _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v33, v33, 255), *(__m128 *)v169),
                                _mm_mul_ps(_mm_shuffle_ps(v33, v33, 85), v167));
                        v38 = _mm_shuffle_ps(v33, v33, 170);
                        v39 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v166);
                        *(__m128 *)a2 = _mm_add_ps(
                                          _mm_add_ps(
                                            _mm_mul_ps(
                                              _mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 255),
                                              *(__m128 *)v169),
                                            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 85), v167)),
                                          _mm_add_ps(
                                            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 170), v168),
                                            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)a2, *(__m128 *)a2, 0), v166)));
                        *(__m128 *)(a2 + 16) = _mm_add_ps(v37, _mm_add_ps(_mm_mul_ps(v38, v34), v39));
                        *(__m128 *)(a2 + 32) = v35;
                        *(__m128 *)(a2 + 48) = v36;
                        *(_DWORD *)(a2 + 64) = 0;
                      }
                    }
                    goto LABEL_57;
                  }
                  goto LABEL_75;
                }
LABEL_30:
                *(_BYTE *)(a2 + 64) = v30 & 0xFC ^ 1;
                goto LABEL_35;
              }
            }
LABEL_33:
            v30 = v29;
            goto LABEL_30;
          }
LABEL_32:
          v29 = *(_BYTE *)(a2 + 64);
          goto LABEL_33;
        }
        v166 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        v167 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        v169[16] = -86;
        v14 = v169[17] & 0xC0 | 0x29;
        v169[17] = v14;
        v168 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        *(__m128i *)v169 = _mm_load_si128((const __m128i *)&_xmm);
        switch ( v13 )
        {
          case 4:
            v166.m128_u64[0] = 0x3F80000080000000LL;
            v15 = 0.0;
            v16 = (float)v12;
            v167.m128_u64[0] = 3212836864LL;
            v168.m128_i32[0] = 0x80000000;
            *(_DWORD *)v169 = 0x80000000;
            break;
          case 2:
            v166.m128_u64[0] = 0xBF80000000000000uLL;
            v15 = (float)v10;
            v16 = 0.0;
            v167.m128_u64[0] = 0x800000003F800000uLL;
            v168.m128_i32[1] = 0x80000000;
            *(_DWORD *)&v169[4] = 0x80000000;
            break;
          case 3:
            CMILMatrix::Scale((CMILMatrix *)&v166, -1.0, -1.0, 1.0);
            v15 = (float)v12;
            v16 = (float)v10;
LABEL_12:
            CMILMatrix::Translate((CMILMatrix *)&v166, v16, v15);
            goto LABEL_13;
          default:
LABEL_13:
            CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)&v166);
            goto LABEL_14;
        }
        v169[16] = 8;
        v169[17] = v14 & 0xFC;
        goto LABEL_12;
      }
      v7 = (int *)(a1 + 224);
      v42 = v7;
    }
    v43 = v171;
    v45 = 0;
    v44 = v170;
    v46 = 0;
    goto LABEL_46;
  }
  if ( a3 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  CMILMatrix::SetToIdentity((CMILMatrix *)a2);
  return 0;
}
