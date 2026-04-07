/*
 * XREFs of ?CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z @ 0x180018B08
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180018D00 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x180017C10 (-D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x18001843C (-D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180018480 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x1800188B8 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x1800189C4 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 */

void __fastcall CTopLevelWindow3D::CreateTransformMatrix(
        CSecondaryWindowRepresentation **this,
        struct D2DMatrix *a2,
        const struct D2D_POINT_3F *a3,
        const struct D2D_POINT_3F *a4,
        const struct D2D_POINT_3F *a5,
        const struct D2D_POINT_3F *a6,
        const struct D2D_POINT_3F *a7)
{
  float *v10; // r9
  const struct D2DMatrix *v11; // rdx
  int v12; // edx
  int v13; // eax
  int v14; // ebx
  int v15; // r9d
  int v16; // r10d
  float v17; // xmm4_4
  int v18; // r11d
  float v19; // xmm5_4
  struct tagRECT v20; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v21[64]; // [rsp+30h] [rbp-40h] BYREF

  D2DMatrixTranslation(
    a2,
    COERCE_FLOAT(*(_DWORD *)a3 ^ _xmm),
    COERCE_FLOAT(*((_DWORD *)a3 + 1) ^ _xmm),
    COERCE_FLOAT(*((_DWORD *)a3 + 2) ^ _xmm));
  D2DMatrixRotationYawPitchRoll((struct D2DMatrix *)v21, v10[1] * 0.017453292, *v10 * 0.017453292, v10[2] * 0.017453292);
  D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v21);
  D2DMatrixTranslation(
    (struct D2DMatrix *)v21,
    *(float *)a3 - *(float *)a6,
    *((float *)a3 + 1) - *((float *)a6 + 1),
    *((float *)a3 + 2) - *((float *)a6 + 2));
  D2DMatrixMultiply(a2, v11, (const struct D2DMatrix *)v21);
  CSecondaryWindowRepresentation::GetRelativeWindowRect(this[37], &v20);
  v12 = 0;
  v13 = 0;
  v14 = *((_DWORD *)this + 68);
  if ( v20.right - v20.left >= 0 )
    v13 = v20.right - v20.left;
  if ( v20.bottom - v20.top >= 0 )
    v12 = v20.bottom - v20.top;
  D2DMatrixScaling(
    (struct D2DMatrix *)v21,
    (float)v13 * *(float *)a7,
    (float)v12 * *((float *)a7 + 1),
    *((float *)a7 + 2));
  D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v21);
  D2DMatrixTranslation(
    (struct D2DMatrix *)v21,
    (float)((float)(v14 + v18) + *(float *)a5) + (float)(v19 * *(float *)a6),
    (float)((float)(v16 + v15) + *((float *)a5 + 1)) + (float)(v17 * *((float *)a6 + 1)),
    *((float *)a5 + 2) + *((float *)a6 + 2));
  D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v21);
}
