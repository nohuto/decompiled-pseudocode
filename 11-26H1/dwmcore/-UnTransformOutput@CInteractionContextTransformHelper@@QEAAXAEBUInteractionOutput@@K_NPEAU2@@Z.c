/*
 * XREFs of ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z @ 0x1800369B8
 * Callers:
 *     ?GetGlobalMotion@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x1801BB940 (-GetGlobalMotion@CInteractionContextWrapper@@UEAA-AUInteractionMotion@@XZ.c)
 * Callees:
 *     TransformTranslateDelta @ 0x180036A9C (TransformTranslateDelta.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

void __fastcall CInteractionContextTransformHelper::UnTransformOutput(
        CInteractionContextTransformHelper *this,
        const struct InteractionOutput *a2,
        __int64 a3,
        __int64 a4,
        struct InteractionOutput *a5)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // rdx
  int v10; // ecx
  float *v11; // r8
  __int64 v12; // r10
  int v13; // r11d
  float v14; // xmm3_4

  *(_OWORD *)a5 = *(_OWORD *)a2;
  *((_OWORD *)a5 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a5 + 2) = *((_OWORD *)a2 + 2);
  *((_QWORD *)a5 + 6) = *((_QWORD *)a2 + 6);
  *((_DWORD *)a5 + 14) = *((_DWORD *)a2 + 14);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    TransformTranslateDelta(v6, v5, v7, v8 + 8, v8 + 12);
    if ( v13 != 5 )
    {
      v14 = (float)((float)(*(float *)(v9 + 44) * v11[2]) + (float)(*(float *)(v9 + 40) * *v11)) + v11[4];
      *(float *)(v12 + 44) = (float)((float)(*(float *)(v9 + 44) * v11[3]) + (float)(*(float *)(v9 + 40) * v11[1]))
                           + v11[5];
      *(float *)(v12 + 40) = v14;
    }
    TransformTranslateDelta(v10, v9, (_DWORD)v11, v12 + 28, v12 + 28);
  }
}
