/*
 * XREFs of ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAUD2D_POINT_3F@@@Z @ 0x18002B530
 * Callers:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::Transform3DRectToPerspective(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm5_4
  float v4; // xmm6_4
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm13_4
  float v8; // xmm14_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm0_4
  float v12; // xmm10_4
  float v13; // xmm13_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  unsigned __int32 v17; // xmm6_4
  char v18; // r11
  char result; // al
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm11_4
  float v24; // xmm0_4
  float v25; // xmm10_4
  float v26; // xmm9_4
  float v27; // xmm8_4
  float v28; // xmm1_4
  float v29; // xmm11_4
  float v30; // xmm4_4
  float v31; // xmm10_4
  float v32; // xmm14_4
  float v33; // xmm13_4
  float v34; // xmm12_4
  float v35; // xmm2_4
  float v36; // xmm11_4
  float v37; // xmm10_4
  float v38; // xmm9_4
  float v39; // xmm8_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  float v55; // xmm0_4
  char v56; // r10
  char v57; // r9
  int v58; // xmm1_4
  float v59; // [rsp+0h] [rbp-C8h]
  float v60; // [rsp+8h] [rbp-C0h]
  float v61; // [rsp+Ch] [rbp-BCh]
  float v62; // [rsp+10h] [rbp-B8h]
  float v63; // [rsp+14h] [rbp-B4h]
  float v64; // [rsp+1Ch] [rbp-ACh]
  float v65; // [rsp+D8h] [rbp+10h]
  float v66; // [rsp+E8h] [rbp+20h]

  v3 = *(float *)(a1 + 36);
  v4 = *(float *)(a1 + 32);
  v5 = *(float *)a1 * *a2;
  v6 = *(float *)(a1 + 4) * *a2;
  v7 = a2[3];
  v8 = *(float *)(a1 + 8) * *a2;
  v9 = a2[1];
  v66 = *(float *)(a1 + 20) * v9;
  v62 = *(float *)(a1 + 16) * v9;
  v10 = *(float *)(a1 + 24) * v9;
  v11 = a2[4];
  v65 = *(float *)(a1 + 40) * v11;
  v12 = v7 * *(float *)(a1 + 16);
  v13 = v7 * *(float *)(a1 + 24);
  v14 = a2[3] * *(float *)(a1 + 20);
  v15 = a2[2];
  v60 = v15 * *(float *)a1;
  v61 = v15 * *(float *)(a1 + 4);
  v16 = a2[5];
  v59 = v15 * *(float *)(a1 + 8);
  v63 = v16 * v4;
  v64 = v16 * *(float *)(a1 + 40);
  *a3 = (float)((float)(v62 + v5) + (float)(v4 * v11)) + *(float *)(a1 + 48);
  a3[1] = (float)((float)(v66 + v6) + (float)(v3 * v11)) + *(float *)(a1 + 52);
  a3[2] = (float)((float)(v10 + v8) + v65) + *(float *)(a1 + 56);
  a3[3] = (float)((float)(v12 + v5) + (float)(v4 * v11)) + *(float *)(a1 + 48);
  a3[4] = (float)((float)(v14 + v6) + (float)(v3 * v11)) + *(float *)(a1 + 52);
  a3[5] = (float)((float)(v13 + v8) + v65) + *(float *)(a1 + 56);
  a3[6] = (float)((float)(v60 + v12) + (float)(v4 * v11)) + *(float *)(a1 + 48);
  a3[7] = (float)((float)(v61 + v14) + (float)(v3 * v11)) + *(float *)(a1 + 52);
  a3[8] = (float)((float)(v59 + v13) + v65) + *(float *)(a1 + 56);
  a3[9] = (float)((float)(v60 + v62) + (float)(v4 * v11)) + *(float *)(a1 + 48);
  a3[10] = (float)((float)(v61 + v66) + (float)(v3 * v11)) + *(float *)(a1 + 52);
  a3[11] = (float)((float)(v59 + v10) + v65) + *(float *)(a1 + 56);
  a3[12] = (float)((float)(v62 + v5) + (float)(v16 * v4)) + *(float *)(a1 + 48);
  a3[13] = (float)((float)(v66 + v6) + (float)(v16 * v3)) + *(float *)(a1 + 52);
  a3[14] = (float)((float)(v10 + v8) + v64) + *(float *)(a1 + 56);
  a3[15] = (float)((float)(v12 + v5) + (float)(v16 * v4)) + *(float *)(a1 + 48);
  a3[16] = (float)((float)(v14 + v6) + (float)(v16 * v3)) + *(float *)(a1 + 52);
  v17 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  a3[17] = (float)((float)(v13 + v8) + v64) + *(float *)(a1 + 56);
  a3[18] = (float)((float)(v60 + v12) + v63) + *(float *)(a1 + 48);
  a3[19] = (float)((float)(v61 + v14) + (float)(v16 * v3)) + *(float *)(a1 + 52);
  a3[20] = (float)((float)(v59 + v13) + v64) + *(float *)(a1 + 56);
  a3[21] = (float)((float)(v60 + v62) + v63) + *(float *)(a1 + 48);
  a3[22] = (float)((float)(v61 + v66) + (float)(v16 * v3)) + *(float *)(a1 + 52);
  a3[23] = (float)((float)(v59 + v10) + v64) + *(float *)(a1 + 56);
  v18 = *(_BYTE *)(a1 + 65);
  result = (char)(4 * v18) >> 6;
  if ( result == 1
    || (result >= 0
      ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v17) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v17) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v17))
                      - 1.0) & v17) >= 0.000081380211
       ? (v56 = 0, v57 = 16)
       : (v56 = 1, v57 = -16),
         v58 = *(_DWORD *)(a1 + 44) & v17,
         *(_BYTE *)(a1 + 65) = v57 ^ (v18 ^ v57) & 0xCF,
         result = v56 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v58 * 61440.0) - 0.0) & v17) < 0.000081380211))
      : (result = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & v17) * 61440.0) - 0.0) & v17) < 0.000081380211),
        !result) )
  {
    v20 = *(float *)(a1 + 60);
    v21 = *(float *)(a1 + 12);
    v22 = v21 * a2[2];
    v23 = *(float *)(a1 + 28) * a2[1];
    v24 = v21 * *a2;
    v25 = *(float *)(a1 + 28) * a2[3];
    v26 = v25 + v22;
    v27 = v23 + v22;
    v28 = *(float *)(a1 + 44) * a2[4];
    v29 = v23 + v24;
    v30 = *(float *)(a1 + 44) * a2[5];
    v31 = v25 + v24;
    v32 = (float)(v29 + v28) + v20;
    v33 = (float)(v31 + v28) + v20;
    v34 = (float)(v26 + v28) + v20;
    v35 = (float)(v27 + v28) + v20;
    v36 = (float)(v29 + v30) + v20;
    v37 = (float)(v31 + v30) + v20;
    v38 = (float)(v26 + v30) + v20;
    v39 = (float)(v27 + v30) + v20;
    if ( v32 < 0.000081380211
      || v33 < 0.000081380211
      || v34 < 0.000081380211
      || v35 < 0.000081380211
      || v36 < 0.000081380211
      || v37 < 0.000081380211
      || v38 < 0.000081380211
      || v39 < 0.000081380211 )
    {
      if ( v32 >= -0.000081380211
        || v33 >= -0.000081380211
        || v34 >= -0.000081380211
        || v35 >= -0.000081380211
        || v36 >= -0.000081380211
        || v37 >= -0.000081380211
        || v38 >= -0.000081380211
        || v39 >= -0.000081380211 )
      {
        a3[15] = -3.4028235e38;
        a3[12] = -3.4028235e38;
        a3[3] = -3.4028235e38;
        *a3 = -3.4028235e38;
        a3[21] = 3.4028235e38;
        a3[18] = 3.4028235e38;
        a3[9] = 3.4028235e38;
        a3[6] = 3.4028235e38;
        a3[22] = -3.4028235e38;
        a3[13] = -3.4028235e38;
        a3[10] = -3.4028235e38;
        a3[1] = -3.4028235e38;
        a3[19] = 3.4028235e38;
        a3[16] = 3.4028235e38;
        a3[7] = 3.4028235e38;
        a3[4] = 3.4028235e38;
        a3[11] = -3.4028235e38;
        a3[8] = -3.4028235e38;
        a3[5] = -3.4028235e38;
        a3[2] = -3.4028235e38;
        a3[23] = 3.4028235e38;
        a3[20] = 3.4028235e38;
        a3[17] = 3.4028235e38;
        a3[14] = 3.4028235e38;
      }
      else
      {
        result = 0;
        *(_QWORD *)(a3 + 15) = 0LL;
        *((_QWORD *)a3 + 6) = 0LL;
        *(_QWORD *)(a3 + 3) = 0LL;
        *(_QWORD *)a3 = 0LL;
        *(_QWORD *)(a3 + 21) = 0LL;
        *((_QWORD *)a3 + 9) = 0LL;
        *(_QWORD *)(a3 + 9) = 0LL;
        *((_QWORD *)a3 + 3) = 0LL;
        a3[11] = 0.0;
        a3[8] = 0.0;
        a3[5] = 0.0;
        a3[2] = 0.0;
        a3[23] = 0.0;
        a3[20] = 0.0;
        a3[17] = 0.0;
        a3[14] = 0.0;
      }
    }
    else
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 - 1.0) & v17) >= 0.000081380211 )
      {
        v40 = a3[1] / v32;
        *a3 = *a3 / v32;
        v41 = a3[2] / v32;
        a3[1] = v40;
        a3[2] = v41;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v33 - 1.0) & v17) >= 0.000081380211 )
      {
        v42 = a3[4] / v33;
        a3[3] = a3[3] / v33;
        v43 = a3[5] / v33;
        a3[4] = v42;
        a3[5] = v43;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v34 - 1.0) & v17) >= 0.000081380211 )
      {
        v44 = a3[7] / v34;
        a3[6] = a3[6] / v34;
        v45 = a3[8] / v34;
        a3[7] = v44;
        a3[8] = v45;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v35 - 1.0) & v17) >= 0.000081380211 )
      {
        v46 = a3[10] / v35;
        a3[9] = a3[9] / v35;
        v47 = a3[11] / v35;
        a3[10] = v46;
        a3[11] = v47;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v36 - 1.0) & v17) >= 0.000081380211 )
      {
        v48 = a3[13] / v36;
        a3[12] = a3[12] / v36;
        v49 = a3[14] / v36;
        a3[13] = v48;
        a3[14] = v49;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v37 - 1.0) & v17) >= 0.000081380211 )
      {
        v50 = a3[16] / v37;
        a3[15] = a3[15] / v37;
        v51 = a3[17] / v37;
        a3[16] = v50;
        a3[17] = v51;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 - 1.0) & v17) >= 0.000081380211 )
      {
        v52 = a3[19] / v38;
        a3[18] = a3[18] / v38;
        v53 = a3[20] / v38;
        a3[19] = v52;
        a3[20] = v53;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v39 - 1.0) & v17) >= 0.000081380211 )
      {
        v54 = a3[22] / v39;
        a3[21] = a3[21] / v39;
        v55 = a3[23] / v39;
        a3[22] = v54;
        a3[23] = v55;
      }
    }
  }
  return result;
}
