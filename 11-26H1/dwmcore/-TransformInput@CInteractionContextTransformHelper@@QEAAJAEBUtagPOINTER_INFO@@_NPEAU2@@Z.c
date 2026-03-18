/*
 * XREFs of ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x180036C84
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z @ 0x1801E1120 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@A.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::TransformInput(
        CInteractionContextTransformHelper *this,
        const struct tagPOINTER_INFO *a2,
        __int64 a3,
        struct tagPOINTER_INFO *a4)
{
  char v4; // r8
  int *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4

  *(_OWORD *)a4 = *(_OWORD *)a2;
  *((_OWORD *)a4 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a4 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a4 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a4 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a4 + 5) = *((_OWORD *)a2 + 5);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    v7 = v4 != 0 ? 0x48 : 0;
    v8 = (float)v5[11];
    v9 = (float)v5[10];
    v10 = (float)(v8 * *(float *)(v7 + v6 + 80)) + (float)(v9 * *(float *)(v7 + v6 + 72));
    v11 = (float)((float)(v9 * *(float *)(v7 + v6 + 76)) + (float)(v8 * *(float *)(v7 + v6 + 84)))
        + *(float *)(v7 + v6 + 92);
    v5[10] = (int)(float)(v10 + *(float *)(v7 + v6 + 88));
    v5[11] = (int)v11;
    v12 = (float)v5[15];
    v13 = (float)v5[14];
    v14 = (float)((float)(v13 * *(float *)(v7 + v6 + 76)) + (float)(v12 * *(float *)(v7 + v6 + 84)))
        + *(float *)(v7 + v6 + 92);
    v5[14] = (int)(float)((float)((float)(v12 * *(float *)(v7 + v6 + 80)) + (float)(v13 * *(float *)(v7 + v6 + 72)))
                        + *(float *)(v7 + v6 + 88));
    v5[15] = (int)v14;
  }
  return 0LL;
}
