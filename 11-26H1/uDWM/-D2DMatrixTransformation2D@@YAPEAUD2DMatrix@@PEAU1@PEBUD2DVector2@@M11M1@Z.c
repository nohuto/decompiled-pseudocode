/*
 * XREFs of ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180060E50
 * Callers:
 *     ?UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096EB8 (-UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180022470 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x1800228C8 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18007E84C (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x1800E5B6C (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
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
  int v14; // xmm0_4
  struct D2DMatrix *v15; // rcx
  const struct D2DMatrix *v16; // rdx
  struct D2DMatrix *v17; // rcx
  const struct D2DMatrix *v18; // rdx
  struct D2DMatrix *v19; // rcx
  struct D2DMatrix *v20; // rcx
  const struct D2DMatrix *v21; // rdx
  struct D2DMatrix *v22; // rcx
  float *v23; // r9
  float v24; // xmm0_4
  _QWORD v25[3]; // [rsp+24h] [rbp-A5h] BYREF
  int v26; // [rsp+3Ch] [rbp-8Dh]
  __int64 v27; // [rsp+40h] [rbp-89h]
  __int64 v28; // [rsp+48h] [rbp-81h]
  int v29; // [rsp+50h] [rbp-79h]
  __int64 v30; // [rsp+54h] [rbp-75h]
  __int64 v31; // [rsp+5Ch] [rbp-6Dh]
  int v32; // [rsp+64h] [rbp-65h]
  _BYTE v33[64]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v34[80]; // [rsp+A8h] [rbp-21h] BYREF

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
      v14 = *(_DWORD *)a4;
      v26 = *((_DWORD *)a4 + 1);
      HIDWORD(v25[0]) = v14;
      v31 = 0LL;
      v30 = 0LL;
      v28 = 0LL;
      v27 = 0LL;
      v25[2] = 0LL;
      v25[1] = 0LL;
      v29 = 1065353216;
      v32 = 1065353216;
      D2DMatrixRotationZ((struct D2DMatrix *)v33, a3);
      if ( a2 )
      {
        D2DMatrixTranspose((struct D2DMatrix *)v34, (const struct D2DMatrix *)v33);
        D2DMatrixIdentity(a1);
        v9 = (float *)((char *)a1 + 48);
        v10 = (float *)((char *)a1 + 52);
        *((float *)a1 + 12) = *((float *)a1 + 12) - *(float *)a2;
        *((float *)a1 + 13) = *((float *)a1 + 13) - *((float *)a2 + 1);
        D2DMatrixMultiply(v15, a1, (const struct D2DMatrix *)v34);
        D2DMatrixMultiply(v17, v16, (const struct D2DMatrix *)((char *)v25 + 4));
        D2DMatrixMultiply(v19, v18, (const struct D2DMatrix *)v33);
        *((float *)a1 + 12) = *(float *)a2 + *((float *)a1 + 12);
        *((float *)a1 + 13) = *((float *)a2 + 1) + *((float *)a1 + 13);
      }
      else
      {
        D2DMatrixTranspose(a1, (const struct D2DMatrix *)v33);
        D2DMatrixMultiply(v20, a1, (const struct D2DMatrix *)((char *)v25 + 4));
        D2DMatrixMultiply(v22, v21, (const struct D2DMatrix *)v33);
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
    D2DMatrixRotationZ((struct D2DMatrix *)v33, a6);
    if ( a5 )
    {
      *((float *)a1 + 12) = *((float *)a1 + 12) - *(float *)a5;
      *((float *)a1 + 13) = *((float *)a1 + 13) - *((float *)a5 + 1);
      D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v33);
      v24 = *((float *)a1 + 13);
      *((float *)a1 + 12) = *v23 + *((float *)a1 + 12);
      *((float *)a1 + 13) = v24 + v23[1];
    }
    else
    {
      D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v33);
    }
  }
  if ( a7 )
  {
    *v9 = *(float *)a7 + *v9;
    *v10 = *((float *)a7 + 1) + *v10;
  }
  return a1;
}
