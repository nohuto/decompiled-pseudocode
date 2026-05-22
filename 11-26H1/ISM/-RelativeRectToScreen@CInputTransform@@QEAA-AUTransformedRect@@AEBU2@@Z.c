/*
 * XREFs of ?RelativeRectToScreen@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z @ 0x180138EE8
 * Callers:
 *     ?RelativeRectToScreen@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1801390C4 (-RelativeRectToScreen@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?RelativePointToScreen@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x1800E2D00 (-RelativePointToScreen@CInputTransform@@QEBA-AUTransformedPoint@@AEBU2@@Z.c)
 */

__int64 __fastcall CInputTransform::RelativeRectToScreen(float *a1, __int64 a2, float *a3)
{
  float v4; // xmm6_4
  float v5; // xmm8_4
  float v6; // xmm7_4
  float v7; // xmm5_4
  float *v8; // rax
  float v9; // xmm5_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float *v12; // rcx
  float *v13; // rcx
  float v14; // xmm5_4
  float *v15; // rcx
  float *v16; // rcx
  float *v17; // rax
  __int32 v18; // xmm4_4
  float *v19; // r11
  float *v20; // r9
  float *v21; // r10
  float v22; // xmm5_4
  float v23; // xmm3_4
  __int64 result; // rax
  float v25; // [rsp+20h] [rbp-60h] BYREF
  float v26[14]; // [rsp+28h] [rbp-58h] BYREF
  float v27; // [rsp+98h] [rbp+18h] BYREF
  float v28; // [rsp+9Ch] [rbp+1Ch]
  float v29; // [rsp+A0h] [rbp+20h] BYREF
  float v30; // [rsp+A8h] [rbp+28h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v4 = a3[2];
  v5 = *a3;
  v6 = a3[3];
  v7 = a3[1];
  v27 = (float)(v4 * 0.5) + *a3;
  v28 = (float)(v6 * 0.5) + v7;
  v8 = CInputTransform::RelativePointToScreen(a1, &v29, &v27);
  v27 = v5;
  v28 = v9;
  v10 = *v8;
  v11 = v8[1];
  CInputTransform::RelativePointToScreen(v12, &v29, &v27);
  v27 = v4 + v5;
  CInputTransform::RelativePointToScreen(v13, &v30, &v27);
  v28 = v6 + v14;
  CInputTransform::RelativePointToScreen(v15, &v25, &v27);
  v27 = v5;
  v17 = CInputTransform::RelativePointToScreen(v16, v26, &v27);
  COERCE_FLOAT(v18 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v22 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - *v20) & v18)
                              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - *v19) & v18))
                      + COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - *v21) & v18))
              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - *v17) & v18))
      * 0.25;
  v23 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v20[1]) & v18)
                              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v19[1]) & v18))
                      + COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v21[1]) & v18))
              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v17[1]) & v18))
      * 0.25;
  result = a2;
  *(float *)a2 = v10 - v22;
  *(float *)(a2 + 4) = v11 - v23;
  *(float *)(a2 + 8) = v22 + v22;
  *(float *)(a2 + 12) = v23 + v23;
  return result;
}
