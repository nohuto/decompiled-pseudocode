/*
 * XREFs of ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800BBF9C
 * Callers:
 *     ?UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z @ 0x1800BBA64 (-UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Foundation::Numerics::invert(
        Windows::Foundation::Numerics *this,
        const struct Windows::Foundation::Numerics::float4x4 *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  float v3; // xmm1_4
  float v4; // xmm11_4
  float v5; // xmm13_4
  float v6; // xmm15_4
  float v7; // xmm14_4
  float v8; // xmm9_4
  float v9; // xmm8_4
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  __m128i si128; // xmm0
  bool result; // al
  float v21; // xmm6_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm9_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm5_4
  float v32; // xmm7_4
  float v33; // xmm15_4
  float v34; // xmm14_4
  float v35; // [rsp+0h] [rbp-D8h]
  float v36; // [rsp+4h] [rbp-D4h]
  float v37; // [rsp+8h] [rbp-D0h]
  float v38; // [rsp+Ch] [rbp-CCh]
  float v39; // [rsp+10h] [rbp-C8h]
  float v40; // [rsp+14h] [rbp-C4h]
  float v41; // [rsp+18h] [rbp-C0h]
  float v42; // [rsp+1Ch] [rbp-BCh]
  float v43; // [rsp+20h] [rbp-B8h]
  float v44; // [rsp+28h] [rbp-B0h]
  float v45; // [rsp+E0h] [rbp+8h]
  float v46; // [rsp+F0h] [rbp+18h]
  float v47; // [rsp+F8h] [rbp+20h]

  v3 = *((float *)this + 11);
  v35 = *(float *)this;
  v47 = *((float *)this + 1);
  v45 = *((float *)this + 2);
  v46 = *((float *)this + 3);
  v4 = *((float *)this + 15);
  v5 = *((float *)this + 13);
  v6 = *((float *)this + 10);
  v7 = *((float *)this + 9);
  v43 = *((float *)this + 12);
  v8 = (float)(v4 * v6) - (float)(*((float *)this + 14) * v3);
  v44 = *((float *)this + 8);
  v38 = v4;
  v9 = (float)(v4 * v7) - (float)(v5 * v3);
  v39 = *((float *)this + 14);
  v10 = (float)(v39 * v7) - (float)(v5 * v6);
  v41 = v5;
  v11 = (float)(v4 * v44) - (float)(v43 * v3);
  v42 = *((float *)this + 4);
  v40 = *((float *)this + 5);
  v36 = *((float *)this + 6);
  v12 = (float)(v39 * v44) - (float)(v43 * v6);
  v37 = *((float *)this + 7);
  v13 = (float)(v5 * v44) - (float)(v43 * v7);
  v14 = (float)((float)(v8 * v40) - (float)(v9 * v36)) + (float)(v10 * v37);
  LODWORD(v15) = COERCE_UNSIGNED_INT((float)((float)(v8 * v42) - (float)(v11 * v36)) + (float)(v12 * v37)) ^ _xmm;
  v16 = (float)((float)(v9 * v42) - (float)(v11 * v40)) + (float)(v13 * v37);
  LODWORD(v17) = COERCE_UNSIGNED_INT((float)((float)(v10 * v42) - (float)(v12 * v40)) + (float)(v13 * v36)) ^ _xmm;
  v18 = (float)((float)((float)(v15 * v47) + (float)(v14 * *(float *)this)) + (float)(v16 * v45)) + (float)(v17 * v46);
  if ( COERCE_FLOAT(LODWORD(v18) & _xmm) >= 0.00000011920929 )
  {
    v21 = 1.0 / v18;
    *(float *)a2 = (float)(1.0 / v18) * v14;
    *((float *)a2 + 8) = (float)(1.0 / v18) * v16;
    *((float *)a2 + 4) = (float)(1.0 / v18) * v15;
    *((float *)a2 + 12) = (float)(1.0 / v18) * v17;
    *((float *)a2 + 1) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v8 * v47) - (float)(v9 * v45)) + (float)(v10 * v46)) ^ _xmm)
                       * (float)(1.0 / v18);
    *((float *)a2 + 5) = (float)((float)((float)(v8 * v35) - (float)(v11 * v45)) + (float)(v12 * v46))
                       * (float)(1.0 / v18);
    *((float *)a2 + 9) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 * v35) - (float)(v11 * v47)) + (float)(v13 * v46)) ^ _xmm)
                       * (float)(1.0 / v18);
    v22 = (float)(v38 * v36) - (float)(v39 * v37);
    *((float *)a2 + 13) = (float)((float)((float)(v10 * v35) - (float)(v12 * v47)) + (float)(v13 * v45))
                        * (float)(1.0 / v18);
    v23 = (float)(v38 * v40) - (float)(v41 * v37);
    v24 = (float)(v39 * v40) - (float)(v41 * v36);
    v25 = (float)(v38 * v42) - (float)(v43 * v37);
    v26 = (float)(v41 * v42) - (float)(v43 * v40);
    v27 = (float)(v39 * v42) - (float)(v43 * v36);
    v28 = (float)((float)(v22 * v47) - (float)(v23 * v45)) + (float)(v24 * v46);
    *((float *)a2 + 6) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v22 * v35) - (float)(v25 * v45)) + (float)(v27 * v46)) ^ _xmm)
                       * v21;
    *((float *)a2 + 10) = (float)((float)((float)(v23 * v35) - (float)(v25 * v47)) + (float)(v26 * v46)) * v21;
    *((float *)a2 + 14) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v24 * v35) - (float)(v27 * v47)) + (float)(v26 * v45)) ^ _xmm)
                        * v21;
    v29 = (float)(v3 * v36) - (float)(v6 * v37);
    *((float *)a2 + 2) = v28 * v21;
    v30 = (float)(v3 * v40) - (float)(v7 * v37);
    v31 = (float)(v6 * v40) - (float)(v7 * v36);
    v32 = (float)(v3 * v42) - (float)(v44 * v37);
    v33 = (float)(v6 * v42) - (float)(v44 * v36);
    v34 = (float)(v7 * v42) - (float)(v44 * v40);
    result = 1;
    *((float *)a2 + 3) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v29 * v47) - (float)(v30 * v45)) + (float)(v31 * v46)) ^ _xmm)
                       * v21;
    *((float *)a2 + 15) = (float)((float)((float)(v31 * v35) - (float)(v33 * v47)) + (float)(v34 * v45)) * v21;
    *((float *)a2 + 11) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v30 * v35) - (float)(v32 * v47)) + (float)(v34 * v46)) ^ _xmm)
                        * v21;
    *((float *)a2 + 7) = (float)((float)((float)(v29 * v35) - (float)(v32 * v45)) + (float)(v33 * v46)) * v21;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    result = 0;
    *(__m128i *)a2 = si128;
    *((__m128i *)a2 + 1) = si128;
    *((__m128i *)a2 + 2) = si128;
    *((__m128i *)a2 + 3) = si128;
  }
  return result;
}
