/*
 * XREFs of ?ScreenPointToRelative@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x180081ED8
 * Callers:
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x18008F9A4 (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x180097698 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ScreenRectToRelative@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z @ 0x180139154 (-ScreenRectToRelative@CInputTransform@@QEAA-AUTransformedRect@@AEBU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTransform::ScreenPointToRelative(float *a1, __int64 a2, float *a3)
{
  float v3; // xmm5_4
  float v4; // xmm6_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  __int64 result; // rax

  v3 = a1[7];
  v4 = a1[3] * *a3;
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v5 = v4 - *a1;
  v6 = (float)(a3[1] * a1[3]) - a1[1];
  v7 = (float)(v3 * a3[1]) - a1[5];
  v8 = (float)(v3 * *a3) - a1[4];
  if ( (float)(v7 * v5) == (float)(v6 * v8) )
  {
    v9 = FLOAT_3_4028235e38;
    v10 = FLOAT_3_4028235e38;
  }
  else
  {
    v11 = (float)(v7 * v5) - (float)(v6 * v8);
    v12 = a1[15];
    v13 = (float)(v12 * a3[1]) - a1[13];
    v14 = (float)(v12 * *a3) - a1[12];
    v15 = v14 * v6;
    v16 = v13 * v5;
    v10 = (float)((float)(v13 * v8) - (float)(v14 * v7)) / v11;
    v9 = (float)(v15 - v16) / v11;
  }
  *(float *)a2 = v10;
  result = a2;
  *(float *)(a2 + 4) = v9;
  return result;
}
