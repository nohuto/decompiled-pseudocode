/*
 * XREFs of ?GetProjectionMatrix@ShadowHelpers@@YA?AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z @ 0x1801CFB5C
 * Callers:
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x180212C0C (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCLight@@PEAVCVisual@@PEAVC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ShadowHelpers::GetProjectionMatrix(__int64 a1, float *a2, float *a3, char a4)
{
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  __int64 result; // rax
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm10_4
  float v24; // xmm0_4

  v4 = *a3;
  v5 = a3[1];
  v6 = a3[2];
  v7 = a3[3];
  if ( a4 )
    v8 = FLOAT_1_0;
  else
    v8 = 0.0;
  v9 = v4 * *a2;
  result = a1;
  v11 = v5 * a2[1];
  v12 = v6 * a2[2];
  v13 = v7 * v8;
  LODWORD(v14) = COERCE_UNSIGNED_INT((float)((float)(v11 + v9) + v12) + (float)(v7 * v8)) ^ _xmm;
  v15 = v14 + v9;
  v16 = v4 * a2[1];
  *(float *)a1 = v15;
  v17 = v4 * a2[2];
  *(float *)(a1 + 4) = v16;
  *(float *)(a1 + 8) = v17;
  v18 = v5 * *a2;
  *(float *)(a1 + 20) = v14 + v11;
  v19 = v6 * a2[1];
  *(float *)(a1 + 16) = v18;
  v20 = v5 * a2[2];
  *(float *)(a1 + 36) = v19;
  v21 = v7 * a2[1];
  *(float *)(a1 + 24) = v20;
  *(float *)(a1 + 32) = v6 * *a2;
  *(float *)(a1 + 12) = v4 * v8;
  *(float *)(a1 + 40) = v14 + v12;
  v22 = v7;
  v23 = v7 * a2[2];
  v24 = v22 * *a2;
  *(float *)(a1 + 28) = v5 * v8;
  *(float *)(a1 + 44) = v6 * v8;
  *(float *)(a1 + 56) = v23;
  *(float *)(a1 + 48) = v24;
  *(float *)(a1 + 52) = v21;
  *(float *)(a1 + 60) = v14 + v13;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
