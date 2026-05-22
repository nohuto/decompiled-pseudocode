/*
 * XREFs of ?ScreenRectToRelative@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z @ 0x180139154
 * Callers:
 *     ?ScreenRectToRelative@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x180139340 (-ScreenRectToRelative@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?ScreenPointToRelative@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x180081ED8 (-ScreenPointToRelative@CInputTransform@@QEBA-AUTransformedPoint@@AEBU2@@Z.c)
 */

__int64 __fastcall CInputTransform::ScreenRectToRelative(float *a1, __int64 a2, float *a3)
{
  float v4; // xmm7_4
  float v5; // xmm9_4
  float v6; // xmm8_4
  float v7; // xmm6_4
  float *v8; // rax
  float v9; // xmm10_4
  float v10; // xmm11_4
  float *v11; // rcx
  float *v12; // rcx
  float *v13; // rcx
  float *v14; // rcx
  float *v15; // rax
  __int32 v16; // xmm4_4
  float *v17; // r9
  float *v18; // r11
  float *v19; // r10
  float v20; // xmm5_4
  float v21; // xmm3_4
  __int64 result; // rax
  _BYTE v23[8]; // [rsp+28h] [rbp-19h] BYREF
  _BYTE v24[64]; // [rsp+30h] [rbp-11h] BYREF
  float v25; // [rsp+B0h] [rbp+6Fh] BYREF
  float v26; // [rsp+B4h] [rbp+73h]
  char v27; // [rsp+B8h] [rbp+77h] BYREF
  char v28; // [rsp+C0h] [rbp+7Fh] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v4 = a3[2];
  v5 = *a3;
  v6 = a3[3];
  v7 = a3[1];
  v25 = (float)(v4 * 0.5) + *a3;
  v26 = (float)(v6 * 0.5) + v7;
  v8 = (float *)CInputTransform::ScreenPointToRelative(a1, (__int64)&v27, &v25);
  v25 = v5;
  v26 = v7;
  v9 = *v8;
  v10 = v8[1];
  CInputTransform::ScreenPointToRelative(v11, (__int64)&v27, &v25);
  v25 = v4 + v5;
  CInputTransform::ScreenPointToRelative(v12, (__int64)&v28, &v25);
  v26 = v6 + v7;
  CInputTransform::ScreenPointToRelative(v13, (__int64)v23, &v25);
  v25 = v5;
  v15 = (float *)CInputTransform::ScreenPointToRelative(v14, (__int64)v24, &v25);
  COERCE_FLOAT(v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v20 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - *v17) & v16)
                              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - *v18) & v16))
                      + COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - *v19) & v16))
              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - *v15) & v16))
      * 0.25;
  v21 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - v17[1]) & v16)
                              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - v18[1]) & v16))
                      + COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - v19[1]) & v16))
              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - v15[1]) & v16))
      * 0.25;
  result = a2;
  *(float *)a2 = v9 - v20;
  *(float *)(a2 + 4) = v10 - v21;
  *(float *)(a2 + 12) = v21 + v21;
  *(float *)(a2 + 8) = v20 + v20;
  return result;
}
