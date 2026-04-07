/*
 * XREFs of ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180022260
 * Callers:
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180016880 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x180022160 (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180060AFC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180022470 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x18002288C (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x1800228C8 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 *     ?D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x180022900 (-D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18007E84C (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetCurrentTransform(CVisual *this, struct D2DMatrix *a2, __int64 a3)
{
  char v3; // si
  char v4; // r14
  char v7; // r8
  __int32 v8; // xmm2_4
  unsigned __int8 v9; // bl
  float v10; // xmm0_4
  bool v11; // r9
  float v13; // xmm4_4
  float *v14; // r12
  float *v15; // r15
  _BYTE v16[64]; // [rsp+20h] [rbp-68h] BYREF

  LOBYTE(a3) = 0;
  v3 = 0;
  v4 = 0;
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    (*(void (__fastcall **)(CVisual *, struct D2DMatrix *, __int64))(*(_QWORD *)this + 136LL))(this, a2, a3);
    v7 = 1;
  }
  else
  {
    D2DMatrixIdentity(a2);
  }
  COERCE_FLOAT(v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 26) - 1.0) & v8) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 27) - 1.0) & v8) > 0.0000011920929 )
  {
    v3 = 1;
    v7 = 1;
  }
  v9 = v7;
  LODWORD(v10) = COERCE_UNSIGNED_INT((float)*((double *)this + 12) - 0.0) & v8;
  if ( v10 > 0.0000011920929 )
    v9 = 1;
  v11 = v10 > 0.0000011920929;
  if ( v3 || v10 > 0.0000011920929 )
  {
    v13 = *((float *)this + 22);
    v14 = (float *)((char *)this + 88);
    v15 = (float *)((char *)this + 92);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - 0.0) & v8) <= 0.0000011920929 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*v15 - 0.0) & v8) <= 0.0000011920929 )
        goto LABEL_15;
      v14 = (float *)((char *)this + 88);
    }
    D2DMatrixTranslation(
      (struct D2DMatrix *)v16,
      COERCE_FLOAT(LODWORD(v13) ^ _xmm),
      COERCE_FLOAT(*(_DWORD *)v15 ^ _xmm),
      1.0);
    D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v16);
    v4 = 1;
LABEL_15:
    if ( v3 )
    {
      D2DMatrixScaling((struct D2DMatrix *)v16, *((float *)this + 26), *((float *)this + 27), 1.0);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v16);
    }
    if ( v11 )
    {
      D2DMatrixRotationZ((struct D2DMatrix *)v16, *((double *)this + 12) * 0.01745329238474369);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v16);
    }
    if ( v4 )
    {
      D2DMatrixTranslation((struct D2DMatrix *)v16, *v14, *v15, 1.0);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v16);
    }
  }
  return v9;
}
