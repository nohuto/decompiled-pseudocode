/*
 * XREFs of ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x1800701EC
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017040 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800155B8 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x180018404 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180018480 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x1800E9F68 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 */

struct D2DMatrix *__fastcall D2DMatrixTransformation2D(
        struct D2DMatrix *a1,
        const struct D2DVector2 *a2,
        float a3,
        const struct D2DVector2 *a4,
        const struct D2DVector2 *a5,
        float a6,
        const struct D2DVector2 *a7)
{
  float *v9; // rdi
  float *v10; // rsi
  float v11; // xmm1_4
  __int64 v13; // rcx
  int v14; // xmm1_4
  int v15; // xmm0_4
  struct D2DMatrix *v16; // rcx
  const struct D2DMatrix *v17; // rdx
  const struct D2DMatrix *v18; // rdx
  struct D2DMatrix *v19; // rcx
  const struct D2DMatrix *v20; // rdx
  float *v21; // r9
  float v22; // xmm0_4
  _DWORD v23[16]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v24[64]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v25[80]; // [rsp+A8h] [rbp-21h] BYREF

  if ( a4 )
  {
    if ( a3 == 0.0 )
    {
      *((_DWORD *)a1 + 11) = 0;
      v9 = (float *)((char *)a1 + 48);
      *((_QWORD *)a1 + 4) = 0LL;
      v10 = (float *)((char *)a1 + 52);
      *((_QWORD *)a1 + 3) = 0LL;
      *(_QWORD *)((char *)a1 + 12) = 0LL;
      *(_QWORD *)((char *)a1 + 4) = 0LL;
      if ( a2 )
      {
        *(_DWORD *)a1 = *(_DWORD *)a4;
        *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
        *((_DWORD *)a1 + 10) = 1065353216;
        *v9 = (float)(1.0 - *(float *)a4) * *(float *)a2;
        v11 = (float)(1.0 - *((float *)a4 + 1)) * *((float *)a2 + 1);
        *((_DWORD *)a1 + 14) = 0;
        *v10 = v11;
      }
      else
      {
        *((_DWORD *)a1 + 14) = 0;
        *v10 = 0.0;
        *v9 = 0.0;
        *(_DWORD *)a1 = *(_DWORD *)a4;
        *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
        *((_DWORD *)a1 + 10) = 1065353216;
      }
      *((_DWORD *)a1 + 15) = 1065353216;
    }
    else
    {
      v14 = *((_DWORD *)a4 + 1);
      v15 = *(_DWORD *)a4;
      v23[14] = 0;
      v23[13] = 0;
      v23[12] = 0;
      v23[11] = 0;
      v23[9] = 0;
      v23[8] = 0;
      v23[7] = 0;
      v23[6] = 0;
      v23[4] = 0;
      v23[3] = 0;
      v23[2] = 0;
      v23[1] = 0;
      v23[5] = v14;
      v23[0] = v15;
      v23[10] = 1065353216;
      v23[15] = 1065353216;
      D2DMatrixRotationZ((struct D2DMatrix *)v24, a3);
      if ( a2 )
      {
        D2DMatrixTranspose((struct D2DMatrix *)v25, (const struct D2DMatrix *)v24);
        D2DMatrixIdentity(a1);
        v9 = (float *)((char *)a1 + 48);
        v10 = (float *)((char *)a1 + 52);
        *((float *)a1 + 12) = *((float *)a1 + 12) - *(float *)a2;
        *((float *)a1 + 13) = *((float *)a1 + 13) - *((float *)a2 + 1);
        D2DMatrixMultiply(v16, a1, (const struct D2DMatrix *)v25);
        D2DMatrixMultiply(a1, v17, (const struct D2DMatrix *)v23);
        D2DMatrixMultiply(a1, v18, (const struct D2DMatrix *)v24);
        *((float *)a1 + 12) = *(float *)a2 + *((float *)a1 + 12);
        *((float *)a1 + 13) = *((float *)a2 + 1) + *((float *)a1 + 13);
      }
      else
      {
        D2DMatrixTranspose(a1, (const struct D2DMatrix *)v24);
        D2DMatrixMultiply(v19, a1, (const struct D2DMatrix *)v23);
        D2DMatrixMultiply(a1, v20, (const struct D2DMatrix *)v24);
        v9 = (float *)((char *)a1 + 48);
        v10 = (float *)((char *)a1 + 52);
      }
    }
  }
  else
  {
    D2DMatrixIdentity(a1);
    v9 = (float *)(v13 + 48);
    v10 = (float *)(v13 + 52);
  }
  if ( a6 != 0.0 )
  {
    D2DMatrixRotationZ((struct D2DMatrix *)v24, a6);
    if ( a5 )
    {
      *((float *)a1 + 12) = *((float *)a1 + 12) - *(float *)a5;
      *((float *)a1 + 13) = *((float *)a1 + 13) - *((float *)a5 + 1);
      D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v24);
      v22 = *((float *)a1 + 13);
      *((float *)a1 + 12) = *((float *)a1 + 12) + *v21;
      *((float *)a1 + 13) = v22 + v21[1];
    }
    else
    {
      D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v24);
    }
  }
  if ( a7 )
  {
    *v9 = *v9 + *(float *)a7;
    *v10 = *((float *)a7 + 1) + *v10;
  }
  return a1;
}
