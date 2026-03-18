/*
 * XREFs of ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401CFB00
 * Callers:
 *     ?InverseTransformRect@@YA?AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401CFC08 (-InverseTransformRect@@YA-AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1401CFEB4 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1401D02FC (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 *     ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x140216E04 (-TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFON.c)
 *     _lambda_d5bddfc2fe24e4274cd124852b066150_::operator() @ 0x1402206EC (_lambda_d5bddfc2fe24e4274cd124852b066150_--operator().c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140224AD4 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InverseTransformPoint(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm5_4
  float v4; // xmm3_4
  float v5; // xmm6_4
  float v6; // xmm9_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int64 result; // rax

  v3 = a3[7];
  v4 = *a2;
  *(_QWORD *)a1 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v5 = a3[3];
  v6 = a2[1];
  v7 = (float)(v3 * v6) - a3[5];
  v8 = (float)(v6 * v5) - a3[1];
  v9 = (float)(v5 * v4) - *a3;
  v10 = (float)(v3 * v4) - a3[4];
  if ( (float)(v7 * v9) == (float)(v8 * v10) )
  {
    v11 = FLOAT_3_4028235e38;
    v12 = FLOAT_3_4028235e38;
  }
  else
  {
    v13 = (float)(v7 * v9) - (float)(v8 * v10);
    v14 = a3[15];
    v15 = (float)(v14 * v6) - a3[13];
    v16 = (float)(v14 * v4) - a3[12];
    v11 = (float)((float)(v16 * v8) - (float)(v15 * v9)) / v13;
    v12 = (float)((float)(v15 * v10) - (float)(v16 * v7)) / v13;
  }
  *(float *)a1 = v12;
  result = a1;
  *(float *)(a1 + 4) = v11;
  return result;
}
