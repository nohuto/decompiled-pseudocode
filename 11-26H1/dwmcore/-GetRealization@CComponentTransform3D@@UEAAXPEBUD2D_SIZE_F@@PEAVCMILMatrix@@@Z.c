/*
 * XREFs of ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18015E520
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z @ 0x18015F3C4 (-make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@M@Z.c)
 */

void __fastcall CComponentTransform3D::GetRealization(
        CComponentTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v5; // xmm5_4
  float v6; // xmm4_4
  char v7; // si
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  unsigned __int32 v11; // xmm12_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  char v17; // cl
  _BYTE *v18; // rdx
  char v19; // al
  float v20; // xmm6_4
  float v21; // xmm5_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  char v27; // cl
  _BYTE *v28; // rdx
  char v29; // al
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm4_4
  char v37; // cl
  _BYTE *v38; // rdx
  char v39; // al
  float v40; // xmm4_4
  float v41; // xmm7_4
  char v42; // r8
  char v43; // al
  int v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm7_4
  float v48; // xmm8_4
  float v49; // xmm10_4
  float v50; // xmm9_4
  float v51; // xmm1_4
  float v52; // xmm6_4
  float v53; // xmm4_4
  float v54; // xmm10_4
  float v55; // xmm11_4
  float v56; // xmm5_4
  float v57; // xmm0_4
  float v58; // xmm2_4
  float v59; // xmm3_4
  float v60; // xmm0_4
  float v61; // xmm1_4
  float v62; // xmm2_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  float v65; // xmm3_4
  float v66; // xmm2_4
  float v67; // xmm0_4
  float v68; // xmm1_4
  float v69; // xmm3_4
  float v70; // xmm0_4
  float v71; // xmm1_4
  float v72; // xmm3_4
  char v73; // r8
  char v74; // al
  int v75; // xmm0_4
  float v76; // xmm2_4
  float v77; // xmm3_4
  float v78; // xmm0_4
  float v79; // xmm1_4
  float v80; // xmm2_4
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm2_4
  float v85; // xmm0_4
  float v86; // xmm1_4
  float v87; // xmm3_4
  float v88; // xmm0_4
  float v89; // xmm1_4
  float v90; // xmm3_4
  char v91; // r8
  char v92; // al
  int v93; // xmm0_4
  float v94; // xmm2_4
  float v95; // xmm3_4
  float v96; // xmm0_4
  float v97; // xmm1_4
  float v98; // xmm2_4
  float v99; // xmm0_4
  float v100; // xmm1_4
  float v101; // xmm3_4
  float v102; // xmm2_4
  float v103; // xmm0_4
  float v104; // xmm1_4
  float v105; // xmm3_4
  float v106; // xmm0_4
  float v107; // xmm1_4
  float v108; // xmm3_4
  __m128 v109; // xmm4
  __m128 v110; // xmm4
  __m128 v111; // xmm3
  __m128 v112; // xmm1
  __m128 v113; // xmm4
  _OWORD *float4x4_from_axis_angle; // rax
  __int128 v115; // xmm1
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  unsigned __int64 v118; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int32 v119; // [rsp+28h] [rbp-D8h]
  float v120[12]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A0h]
  int v122; // [rsp+70h] [rbp-90h]
  _OWORD v123[4]; // [rsp+80h] [rbp-80h] BYREF
  int v124; // [rsp+C0h] [rbp-40h]

  if ( *((_BYTE *)this + 300) )
  {
    CComponentTransform3D::GetScaleRotationTranslationRealization(this, a3);
  }
  else
  {
    v5 = 0.0;
    v6 = 0.0;
    if ( a2 )
    {
      v5 = *((float *)this + 40) * a2->width;
      v6 = *((float *)this + 41) * a2->height;
    }
    v7 = 0;
    v8 = *(_OWORD *)((char *)this + 252);
    v9 = *(_OWORD *)((char *)this + 268);
    v10 = *(_OWORD *)((char *)this + 284);
    v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v12 = FLOAT_61440_0;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 236);
    *((_OWORD *)a3 + 1) = v8;
    *((_OWORD *)a3 + 2) = v9;
    *((_OWORD *)a3 + 3) = v10;
    *((_DWORD *)a3 + 16) = 0;
    v13 = *((float *)this + 42);
    if ( v13 != 0.0 || *((float *)this + 43) != 0.0 || *((float *)this + 44) != 0.0 || v5 != 0.0 || v6 != 0.0 )
    {
      LODWORD(v34) = *((_DWORD *)this + 44) ^ _xmm;
      LODWORD(v35) = COERCE_UNSIGNED_INT(v13 + v5) ^ _xmm;
      LODWORD(v36) = COERCE_UNSIGNED_INT(v6 + *((float *)this + 43)) ^ _xmm;
      if ( COERCE_FLOAT(LODWORD(v35) & v11) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v36) & v11) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v34) & v11) >= 0.000081380211 )
      {
        v37 = *((_BYTE *)a3 + 65);
        v38 = (char *)a3 + 65;
        if ( (char)(4 * v37) >> 6 == 1 )
          goto LABEL_68;
        if ( (char)(4 * v37) >> 6 >= 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a3 + 7) & v11) * 61440.0)
                                            + (float)(COERCE_FLOAT(*((_DWORD *)a3 + 3) & v11) * 61440.0))
                                    + COERCE_FLOAT(*((_DWORD *)a3 + 15) & v11))
                            - 1.0) & v11) >= 0.000081380211 )
          {
            v73 = 0;
            v74 = 16;
          }
          else
          {
            v73 = 1;
            v74 = -16;
          }
          v75 = *((_DWORD *)a3 + 11) & v11;
          v37 = v74 ^ (v74 ^ v37) & 0xCF;
          *v38 = v37;
          v38 = (char *)a3 + 65;
          v39 = v73 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v75 * 61440.0) - 0.0) & v11) < 0.000081380211);
        }
        else
        {
          v39 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a3 + 11) & v11) * 61440.0) - 0.0) & v11) < 0.000081380211;
        }
        if ( !v39 )
        {
LABEL_68:
          v76 = *((float *)a3 + 3);
          v77 = *((float *)a3 + 7);
          v78 = v76 * v35;
          *v38 = v37 & 0xF3;
          v79 = (float)(v76 * v36) + *((float *)a3 + 1);
          v80 = (float)(v76 * v34) + *((float *)a3 + 2);
          *(float *)a3 = v78 + *(float *)a3;
          *((float *)a3 + 1) = v79;
          v81 = (float)(v77 * v35) + *((float *)a3 + 4);
          v82 = (float)(v77 * v36) + *((float *)a3 + 5);
          *((float *)a3 + 2) = v80;
          v83 = (float)(v77 * v34) + *((float *)a3 + 6);
          v84 = *((float *)a3 + 11);
          *((float *)a3 + 4) = v81;
          *((float *)a3 + 5) = v82;
          v85 = (float)(v84 * v35) + *((float *)a3 + 8);
          *((float *)a3 + 6) = v83;
          v86 = (float)(v84 * v36) + *((float *)a3 + 9);
          v87 = *((float *)a3 + 15);
          *((float *)a3 + 8) = v85;
          *((float *)a3 + 9) = v86;
          v88 = (float)(v87 * v35) + *((float *)a3 + 12);
          v89 = (float)(v87 * v36) + *((float *)a3 + 13);
          *((float *)a3 + 10) = (float)(v84 * v34) + *((float *)a3 + 10);
          v90 = (float)(v87 * v34) + *((float *)a3 + 14);
          *((float *)a3 + 12) = v88;
          *((float *)a3 + 13) = v89;
          *((float *)a3 + 14) = v90;
        }
        else
        {
          v40 = v36 + *((float *)a3 + 13);
          v41 = v34 + *((float *)a3 + 14);
          *((float *)a3 + 12) = v35 + *((float *)a3 + 12);
          *((float *)a3 + 13) = v40;
          *((float *)a3 + 14) = v41;
        }
        *((_BYTE *)a3 + 64) &= 0xFCu;
      }
      v7 = 1;
    }
    v14 = *((float *)this + 45);
    if ( COERCE_FLOAT(LODWORD(v14) & v11) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 46) & v11) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 47) & v11) >= 0.0000011920929 )
    {
      v15 = *((float *)this + 47);
      v16 = *((float *)this + 46);
      if ( COERCE_FLOAT(LODWORD(v14) & v11) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v16) & v11) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v15) & v11) >= 0.000081380211 )
      {
        v17 = *((_BYTE *)a3 + 65);
        v18 = (char *)a3 + 65;
        if ( (char)(4 * v17) >> 6 == 1 )
          goto LABEL_76;
        if ( (char)(4 * v17) >> 6 >= 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a3 + 7) & v11) * 61440.0)
                                            + (float)(COERCE_FLOAT(*((_DWORD *)a3 + 3) & v11) * 61440.0))
                                    + COERCE_FLOAT(*((_DWORD *)a3 + 15) & v11))
                            - 1.0) & v11) >= 0.000081380211 )
          {
            v91 = 0;
            v92 = 16;
          }
          else
          {
            v91 = 1;
            v92 = -16;
          }
          v93 = *((_DWORD *)a3 + 11) & v11;
          v17 = v92 ^ (v92 ^ v17) & 0xCF;
          *v18 = v17;
          v18 = (char *)a3 + 65;
          v19 = v91 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v93 * 61440.0) - 0.0) & v11) < 0.000081380211);
        }
        else
        {
          v19 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a3 + 11) & v11) * 61440.0) - 0.0) & v11) < 0.000081380211;
        }
        if ( !v19 )
        {
LABEL_76:
          v94 = *((float *)a3 + 3);
          v95 = *((float *)a3 + 7);
          v96 = v94 * v14;
          *v18 = v17 & 0xF3;
          v97 = (float)(v94 * v16) + *((float *)a3 + 1);
          v98 = (float)(v94 * v15) + *((float *)a3 + 2);
          *(float *)a3 = v96 + *(float *)a3;
          *((float *)a3 + 1) = v97;
          v99 = (float)(v95 * v14) + *((float *)a3 + 4);
          v100 = (float)(v95 * v16) + *((float *)a3 + 5);
          *((float *)a3 + 2) = v98;
          v101 = (float)(v95 * v15) + *((float *)a3 + 6);
          v102 = *((float *)a3 + 11);
          *((float *)a3 + 4) = v99;
          *((float *)a3 + 5) = v100;
          v103 = (float)(v102 * v14) + *((float *)a3 + 8);
          *((float *)a3 + 6) = v101;
          v104 = (float)(v102 * v16) + *((float *)a3 + 9);
          v105 = *((float *)a3 + 15);
          *((float *)a3 + 8) = v103;
          *((float *)a3 + 9) = v104;
          v106 = (float)(v105 * v14) + *((float *)a3 + 12);
          v107 = (float)(v105 * v16) + *((float *)a3 + 13);
          *((float *)a3 + 10) = (float)(v102 * v15) + *((float *)a3 + 10);
          v108 = (float)(v105 * v15) + *((float *)a3 + 14);
          *((float *)a3 + 12) = v106;
          *((float *)a3 + 13) = v107;
          *((float *)a3 + 14) = v108;
        }
        else
        {
          v20 = v16 + *((float *)a3 + 13);
          v21 = v15 + *((float *)a3 + 14);
          *((float *)a3 + 12) = v14 + *((float *)a3 + 12);
          *((float *)a3 + 13) = v20;
          *((float *)a3 + 14) = v21;
        }
        *((_BYTE *)a3 + 64) &= 0xFCu;
      }
    }
    v22 = *((float *)this + 51);
    if ( v22 != 1.0 || *((float *)this + 52) != 1.0 || *((float *)this + 53) != 1.0 )
    {
      v32 = *((float *)this + 53);
      v33 = *((float *)this + 52);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - 1.0) & v11) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v33 - 1.0) & v11) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 - 1.0) & v11) >= 0.000081380211 )
      {
        *(float *)a3 = v22 * *(float *)a3;
        *((float *)a3 + 4) = v22 * *((float *)a3 + 4);
        *((float *)a3 + 8) = v22 * *((float *)a3 + 8);
        *((float *)a3 + 12) = v22 * *((float *)a3 + 12);
        *((float *)a3 + 1) = v33 * *((float *)a3 + 1);
        *((float *)a3 + 5) = v33 * *((float *)a3 + 5);
        *((float *)a3 + 9) = v33 * *((float *)a3 + 9);
        *((float *)a3 + 13) = v33 * *((float *)a3 + 13);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 - 1.0) & v11) >= 0.000081380211 )
        {
          *((float *)a3 + 2) = v32 * *((float *)a3 + 2);
          *((float *)a3 + 6) = v32 * *((float *)a3 + 6);
          *((float *)a3 + 10) = v32 * *((float *)a3 + 10);
          *((float *)a3 + 14) = v32 * *((float *)a3 + 14);
        }
        *((_BYTE *)a3 + 64) &= 0xCCu;
      }
    }
    if ( *((float *)this + 58) != 0.0 )
    {
      v109 = 0LL;
      v109.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 48), (__m128)*((unsigned int *)this + 49)).m128_u64[0];
      v110 = _mm_movelh_ps(v109, (__m128)*((unsigned int *)this + 50));
      v111 = _mm_mul_ps(v110, v110);
      v112 = _mm_shuffle_ps(v111, v111, 102);
      v111.m128_f32[0] = (float)(v111.m128_f32[0] + v112.m128_f32[0]) + _mm_shuffle_ps(v112, v112, 85).m128_f32[0];
      v113 = _mm_div_ps(v110, _mm_sqrt_ps(_mm_shuffle_ps(v111, v111, 0)));
      v118 = v113.m128_u64[0];
      v119 = _mm_shuffle_ps(v113, v113, 170).m128_u32[0];
      float4x4_from_axis_angle = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_from_axis_angle(v120, &v118);
      v124 = 0;
      v115 = float4x4_from_axis_angle[1];
      v123[0] = *float4x4_from_axis_angle;
      v116 = float4x4_from_axis_angle[2];
      v123[1] = v115;
      v117 = float4x4_from_axis_angle[3];
      v123[2] = v116;
      v123[3] = v117;
      CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v123);
    }
    v23 = *((float *)this + 54);
    if ( v23 != 0.0 || *((float *)this + 55) != 0.0 || *((float *)this + 56) != 0.0 || *((float *)this + 57) != 1.0 )
    {
      v45 = *((float *)this + 55);
      v46 = *((float *)this + 57);
      v47 = v45 * v45;
      v120[3] = 0.0;
      v48 = v23 * v45;
      v120[7] = 0.0;
      v49 = *((float *)this + 56);
      v50 = v46 * v45;
      v120[11] = 0.0;
      v51 = v46 * v49;
      v122 = 0;
      v52 = v49 * v49;
      v53 = v23 * v49;
      v54 = v49 * v45;
      v55 = v23 * v23;
      v56 = v53 - (float)(v46 * v45);
      v57 = v23 * v46;
      v120[2] = v56 + v56;
      v120[1] = (float)(v51 + v48) + (float)(v51 + v48);
      v120[4] = (float)(v48 - v51) + (float)(v48 - v51);
      v120[6] = (float)(v57 + v54) + (float)(v57 + v54);
      v120[8] = (float)(v50 + v53) + (float)(v50 + v53);
      v120[9] = (float)(v54 - v57) + (float)(v54 - v57);
      v120[0] = 1.0 - (float)((float)(v52 + v47) + (float)(v52 + v47));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v120[5] = 1.0 - (float)((float)(v55 + v52) + (float)(v55 + v52));
      v120[10] = 1.0 - (float)((float)(v55 + v47) + (float)(v55 + v47));
      CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v120);
      v12 = FLOAT_61440_0;
    }
    if ( v7 )
    {
      v24 = *((float *)this + 42);
      v25 = *((float *)this + 44);
      v26 = *((float *)this + 43);
      if ( COERCE_FLOAT(LODWORD(v24) & v11) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v26) & v11) >= 0.000081380211
        || COERCE_FLOAT(LODWORD(v25) & v11) >= 0.000081380211 )
      {
        v27 = *((_BYTE *)a3 + 65);
        v28 = (char *)a3 + 65;
        if ( (char)(4 * v27) >> 6 == 1 )
          goto LABEL_57;
        if ( (char)(4 * v27) >> 6 >= 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a3 + 7) & v11) * v12)
                                            + (float)(COERCE_FLOAT(*((_DWORD *)a3 + 3) & v11) * v12))
                                    + COERCE_FLOAT(*((_DWORD *)a3 + 15) & v11))
                            - 1.0) & v11) >= 0.000081380211 )
          {
            v42 = 0;
            v43 = 16;
          }
          else
          {
            v42 = 1;
            v43 = -16;
          }
          v44 = *((_DWORD *)a3 + 11) & v11;
          v27 = v43 ^ (v43 ^ v27) & 0xCF;
          *v28 = v27;
          v28 = (char *)a3 + 65;
          v29 = v42 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v44 * v12) - 0.0) & v11) < 0.000081380211);
        }
        else
        {
          v29 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a3 + 11) & v11) * v12) - 0.0) & v11) < 0.000081380211;
        }
        if ( !v29 )
        {
LABEL_57:
          v58 = *((float *)a3 + 3);
          v59 = *((float *)a3 + 7);
          v60 = v58 * v24;
          *v28 = v27 & 0xF3;
          v61 = (float)(v58 * v26) + *((float *)a3 + 1);
          v62 = (float)(v58 * v25) + *((float *)a3 + 2);
          *(float *)a3 = v60 + *(float *)a3;
          *((float *)a3 + 1) = v61;
          v63 = (float)(v59 * v24) + *((float *)a3 + 4);
          v64 = (float)(v59 * v26) + *((float *)a3 + 5);
          *((float *)a3 + 2) = v62;
          v65 = (float)(v59 * v25) + *((float *)a3 + 6);
          v66 = *((float *)a3 + 11);
          *((float *)a3 + 4) = v63;
          *((float *)a3 + 5) = v64;
          v67 = (float)(v66 * v24) + *((float *)a3 + 8);
          *((float *)a3 + 6) = v65;
          v68 = (float)(v66 * v26) + *((float *)a3 + 9);
          v69 = *((float *)a3 + 15);
          *((float *)a3 + 8) = v67;
          *((float *)a3 + 9) = v68;
          v70 = (float)(v69 * v24) + *((float *)a3 + 12);
          v71 = (float)(v69 * v26) + *((float *)a3 + 13);
          *((float *)a3 + 10) = (float)(v66 * v25) + *((float *)a3 + 10);
          v72 = (float)(v69 * v25) + *((float *)a3 + 14);
          *((float *)a3 + 12) = v70;
          *((float *)a3 + 13) = v71;
          *((float *)a3 + 14) = v72;
        }
        else
        {
          v30 = v26 + *((float *)a3 + 13);
          v31 = v25 + *((float *)a3 + 14);
          *((float *)a3 + 12) = v24 + *((float *)a3 + 12);
          *((float *)a3 + 13) = v30;
          *((float *)a3 + 14) = v31;
        }
        *((_BYTE *)a3 + 64) &= 0xFCu;
      }
    }
  }
}
