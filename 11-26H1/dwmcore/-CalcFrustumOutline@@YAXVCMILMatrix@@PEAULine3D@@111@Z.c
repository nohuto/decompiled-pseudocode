/*
 * XREFs of ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1800CFDCC
 * Callers:
 *     ?CalcEyePointOrVector@CLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1802644C8 (-CalcEyePointOrVector@CLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z @ 0x1800D0184 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     log10f_0 @ 0x1802B9738 (log10f_0.c)
 *     powf_0 @ 0x1802B975C (powf_0.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

float *__fastcall CalcFrustumOutline(CMILMatrix *a1, float *a2, float *a3, float *a4, float *a5)
{
  float *v5; // rbx
  int v6; // xmm1_4
  int v10; // xmm0_4
  char v12; // r14
  int v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  __int64 v16; // rsi
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float *v20; // rax
  float v21; // xmm3_4
  __int64 v22; // rcx
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm5_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // xmm0_4
  float v41; // xmm5_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm4_4
  float *result; // rax
  float v47; // xmm0_4
  float v48; // xmm6_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm6_4
  _DWORD v52[4]; // [rsp+28h] [rbp-E0h] BYREF
  float *v53; // [rsp+38h] [rbp-D0h]
  _OWORD v54[8]; // [rsp+48h] [rbp-C0h] BYREF
  float v55[3]; // [rsp+C8h] [rbp-40h] BYREF
  float v56; // [rsp+D4h] [rbp-34h]
  float v57; // [rsp+D8h] [rbp-30h]
  float v58; // [rsp+DCh] [rbp-2Ch]
  float v59; // [rsp+E0h] [rbp-28h]
  float v60; // [rsp+E4h] [rbp-24h]
  float v61; // [rsp+E8h] [rbp-20h]
  float v62; // [rsp+ECh] [rbp-1Ch]
  float v63; // [rsp+F0h] [rbp-18h]
  float v64; // [rsp+F4h] [rbp-14h]
  float v65; // [rsp+F8h] [rbp-10h]
  float v66; // [rsp+FCh] [rbp-Ch]
  float v67; // [rsp+100h] [rbp-8h]
  float v68; // [rsp+104h] [rbp-4h]
  float v69; // [rsp+108h] [rbp+0h]
  float v70; // [rsp+10Ch] [rbp+4h]
  float v71; // [rsp+110h] [rbp+8h]
  float v72; // [rsp+114h] [rbp+Ch]
  float v73; // [rsp+118h] [rbp+10h]
  float v74; // [rsp+11Ch] [rbp+14h]
  float v75; // [rsp+120h] [rbp+18h]
  float v76; // [rsp+124h] [rbp+1Ch]
  float v77; // [rsp+128h] [rbp+20h]
  float v78; // [rsp+12Ch] [rbp+24h]
  float v79; // [rsp+130h] [rbp+28h]
  float v80; // [rsp+134h] [rbp+2Ch]
  float v81; // [rsp+138h] [rbp+30h]
  float v82; // [rsp+13Ch] [rbp+34h]
  float v83; // [rsp+140h] [rbp+38h]
  float v84; // [rsp+144h] [rbp+3Ch]

  v5 = (float *)v52;
  v6 = *((_DWORD *)a1 + 7);
  v52[0] = *((_DWORD *)a1 + 3);
  v10 = *((_DWORD *)a1 + 11);
  v52[1] = v6;
  v12 = 0;
  v13 = *((_DWORD *)a1 + 15);
  v14 = 0.0;
  v52[2] = v10;
  v15 = 0.0;
  v52[3] = v13;
  v16 = 4LL;
  v53 = a5;
  do
  {
    if ( *v5 == 0.0 )
      goto LABEL_3;
    v50 = log10f_0(COERCE_FLOAT(*(_DWORD *)v5 & _xmm));
    v51 = v50 / log10f_0(2.0);
    *v5 = v51;
    if ( !v12 )
    {
      v12 = 1;
      v14 = v51;
LABEL_9:
      v15 = v51;
      goto LABEL_3;
    }
    if ( v51 <= v14 )
    {
      v51 = fminf(v51, v15);
      goto LABEL_9;
    }
    v14 = v51;
LABEL_3:
    ++v5;
    --v16;
  }
  while ( v16 );
  v17 = sqrtf_0(v14 - v15);
  v18 = floorf_0(v17);
  v19 = powf_0(2.0, v18);
  v20 = (float *)v54 + 1;
  v54[0] = _mm_load_si128((const __m128i *)&_xmm);
  v21 = v19;
  v22 = 8LL;
  v54[2] = _mm_load_si128((const __m128i *)&_xmm);
  v54[4] = _mm_load_si128((const __m128i *)&_xmm);
  v54[1] = _mm_load_si128((const __m128i *)&_xmm);
  v54[5] = _mm_load_si128((const __m128i *)&_xmm);
  v54[6] = _mm_load_si128((const __m128i *)&_xmm);
  v54[3] = _mm_load_si128((const __m128i *)&_xmm);
  v54[7] = _mm_load_si128((const __m128i *)&_xmm);
  do
  {
    v23 = v21 * *v20;
    *(v20 - 1) = v21 * *(v20 - 1);
    v24 = v21 * v20[1];
    *v20 = v23;
    v20 += 4;
    *(v20 - 3) = v24;
    --v22;
  }
  while ( v22 );
  CMILMatrix::Transform(a1, (const struct D2D_POINT_4F *)v54, (struct D2D_POINT_4F *)v55, 8u);
  v25 = (float)(1.0 / v72) * v71;
  v26 = (float)(1.0 / v56) * v55[0];
  v27 = (float)(1.0 / v56) * v55[1];
  v28 = (float)(1.0 / v72) * v70;
  v29 = (float)((float)(1.0 / v72) * v69) - v26;
  v30 = (float)(1.0 / v56) * v55[2];
  *a2 = v26;
  a2[1] = v27;
  a2[2] = v30;
  a2[3] = v29;
  a2[4] = v28 - v27;
  a2[5] = v25 - v30;
  v31 = (float)(1.0 / v76) * v75;
  v32 = (float)(1.0 / v60) * v57;
  v33 = (float)(1.0 / v60) * v58;
  v34 = (float)(1.0 / v76) * v74;
  v35 = (float)(1.0 / v60) * v59;
  v36 = (float)((float)(1.0 / v76) * v73) - v32;
  *a3 = v32;
  a3[1] = v33;
  a3[2] = v35;
  a3[3] = v36;
  a3[4] = v34 - v33;
  a3[5] = v31 - v35;
  v37 = (float)(1.0 / v80) * v79;
  v38 = (float)(1.0 / v64) * v61;
  v39 = (float)(1.0 / v64) * v62;
  v40 = (float)(1.0 / v80) * v78;
  v41 = (float)(1.0 / v64) * v63;
  v42 = (float)((float)(1.0 / v80) * v77) - v38;
  *a4 = v38;
  a4[1] = v39;
  a4[2] = v41;
  a4[3] = v42;
  a4[4] = v40 - v39;
  a4[5] = v37 - v41;
  v43 = (float)(1.0 / v68) * v65;
  v44 = (float)(1.0 / v68) * v66;
  v45 = (float)(1.0 / v68) * v67;
  result = v53;
  v47 = (float)(1.0 / v84) * v82;
  v48 = (float)(1.0 / v84) * v83;
  v49 = (float)((float)(1.0 / v84) * v81) - v43;
  *v53 = v43;
  result[1] = v44;
  result[2] = v45;
  result[3] = v49;
  result[4] = v47 - v44;
  result[5] = v48 - v45;
  return result;
}
