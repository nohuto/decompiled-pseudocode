/*
 * XREFs of ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1801AF7C4
 * Callers:
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18017C16C (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801C8FC8 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x18020D194 (-Inverse@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x18028EA1C (-ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixInverse(struct D2DMatrix *a1, float *a2, const struct D2DMatrix *a3)
{
  float v3; // xmm4_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm15_4
  float v11; // xmm13_4
  float v12; // xmm14_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm6_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm9_4
  float v24; // xmm4_4
  float v25; // xmm10_4
  float v26; // xmm11_4
  float v27; // xmm12_4
  float v28; // xmm13_4
  float v29; // xmm8_4
  float v30; // xmm15_4
  float v31; // xmm8_4
  float v32; // xmm6_4
  float v33; // xmm2_4
  float v34; // xmm6_4
  struct D2DMatrix *result; // rax
  float v36; // [rsp+20h] [rbp-E8h]
  float v37; // [rsp+24h] [rbp-E4h]
  float v38; // [rsp+28h] [rbp-E0h]
  float v39; // [rsp+2Ch] [rbp-DCh]
  float v40; // [rsp+30h] [rbp-D8h]
  float v41; // [rsp+34h] [rbp-D4h]
  float v42; // [rsp+38h] [rbp-D0h]
  float v43; // [rsp+38h] [rbp-D0h]
  float v44; // [rsp+3Ch] [rbp-CCh]
  float v45; // [rsp+44h] [rbp-C4h]
  float v46; // [rsp+4Ch] [rbp-BCh]
  float v47; // [rsp+50h] [rbp-B8h]
  float v48; // [rsp+118h] [rbp+10h]
  float v49; // [rsp+118h] [rbp+10h]
  float v50; // [rsp+120h] [rbp+18h]
  float v51; // [rsp+120h] [rbp+18h]
  float v52; // [rsp+128h] [rbp+20h]
  float v53; // [rsp+128h] [rbp+20h]

  v3 = *((float *)a3 + 4);
  v45 = *((float *)a3 + 8);
  v5 = *((float *)a3 + 6);
  v6 = *((float *)a3 + 7);
  v7 = *((float *)a3 + 10);
  v8 = *((float *)a3 + 11);
  v9 = *((float *)a3 + 14);
  v10 = *((float *)a3 + 5);
  v11 = *((float *)a3 + 1);
  v12 = *((float *)a3 + 9);
  v13 = (float)(v10 * *(float *)a3) - (float)(v3 * v11);
  v42 = *((float *)a3 + 12);
  v14 = (float)(v12 * *(float *)a3) - (float)(v45 * v11);
  v15 = (float)(v12 * v3) - (float)(v45 * v10);
  v50 = (float)(*((float *)a3 + 13) * *(float *)a3) - (float)(v42 * v11);
  v16 = (float)(*((float *)a3 + 13) * v3) - (float)(v42 * v10);
  v17 = *((float *)a3 + 3);
  v48 = *((float *)a3 + 15);
  v52 = (float)(*((float *)a3 + 13) * v45) - (float)(v42 * v12);
  v18 = *((float *)a3 + 2);
  v41 = (float)((float)(v15 * v18) - (float)(v14 * v5)) + (float)(v13 * v7);
  v40 = (float)((float)(v50 * v5) - (float)(v13 * v9)) - (float)(v16 * v18);
  v39 = (float)((float)(v52 * v18) - (float)(v50 * v7)) + (float)(v14 * v9);
  v38 = (float)((float)(v16 * v7) - (float)(v15 * v9)) - (float)(v52 * v5);
  v37 = (float)((float)(v14 * v6) - (float)(v13 * v8)) - (float)(v15 * v17);
  v36 = (float)((float)(v16 * v17) - (float)(v50 * v6)) + (float)(v13 * v48);
  v51 = (float)((float)(v50 * v8) - (float)(v14 * v48)) - (float)(v52 * v17);
  v53 = (float)((float)(v52 * v6) - (float)(v16 * v8)) + (float)(v15 * v48);
  v19 = (float)(v6 * v18) - (float)(v5 * v17);
  v20 = (float)(v8 * v18) - (float)(v7 * v17);
  v21 = (float)(v48 * v18) - (float)(v9 * v17);
  v47 = (float)(v8 * v5) - (float)(v7 * v6);
  v22 = v9 * v6;
  v23 = *((float *)a3 + 4);
  v24 = (float)(v48 * v7) - (float)(v9 * v8);
  v25 = (float)(v48 * v5) - v22;
  v49 = v24;
  v26 = (float)((float)(v20 * v10) - (float)(v19 * v12)) - (float)(v47 * v11);
  v27 = (float)((float)(v25 * v11) - (float)(v21 * v10)) + (float)(v19 * *((float *)a3 + 13));
  v28 = (float)((float)(v21 * v12) - (float)(v20 * *((float *)a3 + 13))) - (float)(v24 * v11);
  v29 = v24 * v10;
  v30 = (float)((float)(v47 * *(float *)a3) - (float)(v20 * v23)) + (float)(v19 * v45);
  v46 = (float)(v29 - (float)(v25 * v12)) + (float)(v47 * *((float *)a3 + 13));
  v31 = v42;
  v32 = v20 * v42;
  v43 = (float)((float)(v21 * v23) - (float)(v19 * v42)) - (float)(v25 * *(float *)a3);
  v44 = (float)((float)(v24 * *(float *)a3) - (float)(v21 * v45)) + v32;
  v33 = (float)((float)((float)(v26 * v31) + (float)(v27 * v45)) + (float)(v28 * v23)) + (float)(v46 * *(float *)a3);
  if ( a2 )
    *a2 = v33;
  if ( v33 == 0.0 )
    return 0LL;
  v34 = 1.0 / v33;
  if ( !_finite((float)(1.0 / v33)) )
    return 0LL;
  result = a1;
  *(float *)a1 = v34 * v46;
  *((float *)a1 + 1) = v34 * v28;
  *((float *)a1 + 2) = v34 * v27;
  *((float *)a1 + 5) = v34 * v44;
  *((float *)a1 + 3) = v34 * v26;
  *((float *)a1 + 7) = v34 * v30;
  *((float *)a1 + 8) = v53 * v34;
  *((float *)a1 + 4) = (float)((float)((float)(v45 * v25) - (float)(v31 * v47)) - (float)(v23 * v49)) * v34;
  *((float *)a1 + 6) = v34 * v43;
  *((float *)a1 + 9) = v51 * v34;
  *((float *)a1 + 10) = v36 * v34;
  *((float *)a1 + 11) = v37 * v34;
  *((float *)a1 + 12) = v38 * v34;
  *((float *)a1 + 13) = v39 * v34;
  *((float *)a1 + 14) = v40 * v34;
  *((float *)a1 + 15) = v41 * v34;
  return result;
}
