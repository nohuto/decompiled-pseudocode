/*
 * XREFs of ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x180106D68
 * Callers:
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x180106B40 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@PEAUINTERACTION_VELOCITY@@1121@Z @ 0x180106FC0 (-HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@P.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformOutput(
        CInteractionContextTransformHelper *this,
        const struct INTERACTION_CHANGESET *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        bool a6,
        struct INTERACTION_CHANGESET *a7)
{
  char v7; // r8
  __int128 v8; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  struct INTERACTION_CHANGESET *v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  int v18; // r9d
  const struct tagRECT *v19; // r10
  const struct tagRECT *v20; // r11
  float v21; // xmm1_4
  float *v22; // rax
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm3_4
  float v27; // xmm3_4
  float v28; // xmm3_4

  v7 = 1;
  v8 = *((_OWORD *)a2 + 1);
  *(_OWORD *)a7 = *(_OWORD *)a2;
  v10 = *((_OWORD *)a2 + 2);
  *((_OWORD *)a7 + 1) = v8;
  v11 = *((_OWORD *)a2 + 3);
  *((_OWORD *)a7 + 2) = v10;
  v12 = *((_OWORD *)a2 + 4);
  *((_OWORD *)a7 + 3) = v11;
  v13 = *((_OWORD *)a2 + 5);
  *((_OWORD *)a7 + 4) = v12;
  v14 = *((_OWORD *)a2 + 6);
  *((_OWORD *)a7 + 5) = v13;
  *((_OWORD *)a7 + 6) = v14;
  if ( (*((_BYTE *)a2 + 84) & 1) != 0 )
    *((_QWORD *)this + 21) = 0LL;
  if ( (*((_DWORD *)a7 + 21) & 2) != 0 )
  {
    v15 = a7;
  }
  else
  {
    v15 = 0LL;
    v7 = 0;
  }
  v16 = ((unsigned __int64)a7 + 32) & -(__int64)(v7 != 0);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    v22 = (float *)((char *)this + (a6 ? 120LL : 48LL));
    if ( v18 )
    {
      if ( v15 )
      {
        v23 = *((float *)v15 + 1);
        v24 = (float)((float)(*(float *)v15 * *((float *)this + 25)) + (float)(v23 * *((float *)this + 27)))
            + *((float *)this + 29);
        *(float *)v15 = (float)((float)(*(float *)v15 * *((float *)this + 24)) + (float)(v23 * *((float *)this + 26)))
                      + *((float *)this + 28);
        *((float *)v15 + 1) = v24;
        v25 = (float)((float)(*(float *)v16 * *((float *)this + 24))
                    + (float)(*(float *)(v16 + 4) * *((float *)this + 26)))
            + *((float *)this + 28);
        *(float *)(v16 + 4) = (float)((float)(*(float *)(v16 + 4) * *((float *)this + 27))
                                    + (float)(*(float *)v16 * *((float *)this + 25)))
                            + *((float *)this + 29);
        *(float *)v16 = v25;
        if ( a5 != 5 )
        {
          v26 = (float)((float)(*((float *)v15 + 5) * v22[2]) + (float)(*((float *)v15 + 4) * *v22)) + v22[4];
          *((float *)v15 + 5) = (float)((float)(*((float *)v15 + 5) * v22[3]) + (float)(*((float *)v15 + 4) * v22[1]))
                              + v22[5];
          *((float *)v15 + 4) = v26;
        }
      }
    }
    if ( (*((_BYTE *)a7 + 84) & 4) != 0 )
    {
      if ( v17 )
      {
        v27 = (float)((float)(*(float *)(v17 + 4) * *((float *)this + 26))
                    + (float)(*(float *)v17 * *((float *)this + 24)))
            + *((float *)this + 28);
        *(float *)(v17 + 4) = (float)((float)(*(float *)(v17 + 4) * *((float *)this + 27))
                                    + (float)(*(float *)v17 * *((float *)this + 25)))
                            + *((float *)this + 29);
        *(float *)v17 = v27;
        if ( a5 != 5 )
        {
          v28 = (float)((float)(*(float *)(v17 + 20) * v22[2]) + (float)(*(float *)(v17 + 16) * *v22)) + v22[4];
          *(float *)(v17 + 20) = (float)((float)(*(float *)(v17 + 20) * v22[3]) + (float)(*(float *)(v17 + 16) * v22[1]))
                               + v22[5];
          *(float *)(v17 + 16) = v28;
        }
      }
    }
  }
  CInteractionContextTransformHelper::HimetricToScreen(
    v20,
    v19,
    v15,
    (struct INTERACTION_VELOCITY *)v16,
    (struct INTERACTION_UPDATE *)v17,
    v15,
    (struct INTERACTION_VELOCITY *)v16,
    (struct INTERACTION_UPDATE *)v17);
  if ( (*((_BYTE *)a7 + 84) & 2) != 0 && v15 )
  {
    v21 = *((float *)v15 + 7);
    if ( v21 != 0.0 )
      *((double *)this + 21) = (float)((float)(*((float *)v15 + 6) - 1.0) / v21);
    if ( v16 )
      *(float *)(v16 + 8) = *(float *)(v16 + 12) * *((double *)this + 21);
  }
}
