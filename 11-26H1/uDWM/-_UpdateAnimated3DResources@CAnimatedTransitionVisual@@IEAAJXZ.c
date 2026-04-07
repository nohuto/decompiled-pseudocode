/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180097910
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008A46C (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800056D8 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180022470 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x18002288C (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x180022900 (-D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x1800547C4 (-D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800BB9FC (-Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800E5BF4 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  int v1; // r8d
  float v3; // xmm1_4
  float v4; // xmm2_4
  struct D2DMatrix *v5; // rdi
  unsigned int v6; // eax
  int v7; // edx
  int v8; // ecx
  __m128i v9; // xmm8
  int v10; // eax
  float v11; // xmm10_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  int v16; // ecx
  int v17; // eax
  float v18; // xmm4_4
  int v19; // ecx
  float v20; // xmm6_4
  float v21; // xmm7_4
  int v22; // ecx
  int v23; // r9d
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  float v29; // xmm6_4
  int v30; // eax
  int v31; // r8d
  float v32; // xmm3_4
  const struct D2DMatrix *v33; // rdx
  float v34; // xmm0_4
  const struct _D3DMATRIX *v35; // rdx
  int v36; // eax
  __int64 v37; // r8
  unsigned int v38; // edi
  float v39; // xmm0_4
  int v40; // eax
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  float v43; // [rsp+40h] [rbp-C8h]
  _QWORD v44[2]; // [rsp+44h] [rbp-C4h] BYREF
  _BYTE v45[64]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v46[160]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((_DWORD *)this + 198);
  v3 = *((float *)this + 178);
  v4 = *((float *)this + 179);
  v5 = (CAnimatedTransitionVisual *)((char *)this + 452);
  v6 = 0;
  if ( *((_DWORD *)this + 200) - v1 >= 0 )
    v6 = *((_DWORD *)this + 200) - v1;
  v7 = *((_DWORD *)this + 199);
  v8 = *((_DWORD *)this + 201) - v7;
  v9 = _mm_cvtsi32_si128(v6);
  v10 = 0;
  if ( v8 >= 0 )
    v10 = v8;
  v11 = _mm_cvtepi32_ps(v9).m128_f32[0];
  v43 = 0.0;
  v12 = v11 * *((float *)this + 175);
  v13 = (float)v10 * *((float *)this + 176);
  v14 = (float)((float)(v11 * v3) + (float)v1) + *((float *)this + 172);
  v15 = (float)((float)((float)v10 * v4) + (float)v7) + *((float *)this + 173);
  D2DMatrixTranslation(v5, COERCE_FLOAT(LODWORD(v3) ^ _xmm), COERCE_FLOAT(LODWORD(v4) ^ _xmm), 0.0);
  v16 = *((_DWORD *)this + 222);
  if ( v16 )
  {
    v17 = *((_DWORD *)this + 223);
    if ( v17 )
    {
      D2DMatrixScaling((struct D2DMatrix *)v45, 1.0 / (float)v16, 1.0 / (float)v17, 1.0);
      D2DMatrixMultiply(v5, (const struct D2DMatrix *)v45, v5);
    }
  }
  D2DMatrixScaling((struct D2DMatrix *)v45, v12, v13, *((float *)this + 177));
  D2DMatrixMultiply(v5, v5, (const struct D2DMatrix *)v45);
  v19 = *((_DWORD *)this + 239);
  v20 = 0.0;
  v21 = 0.0;
  if ( v19 )
  {
    v22 = v19 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        v20 = (float)(v13 * *((float *)this + 185)) + (float)((float)(v18 - v13) * *((float *)this + 179));
        v21 = (float)(v12 * *((float *)this + 184)) + (float)((float)(v18 - v12) * *((float *)this + 178));
      }
      goto LABEL_19;
    }
    v23 = *((_DWORD *)this + 202);
    v24 = *((_DWORD *)this + 204);
    v25 = *((_DWORD *)this + 203);
    v26 = *((_DWORD *)this + 205);
  }
  else
  {
    v23 = *((_DWORD *)this + 198);
    v24 = *((_DWORD *)this + 200);
    v25 = *((_DWORD *)this + 199);
    v26 = *((_DWORD *)this + 201);
  }
  v27 = v26 - v25;
  v28 = 0;
  if ( v27 >= 0 )
    v28 = v27;
  v29 = (float)v28;
  v30 = 0;
  v31 = v24 - v23;
  if ( v31 >= 0 )
    v30 = v31;
  v20 = (float)((float)(v29 * *((float *)this + 185)) + (float)v25)
      - (float)(v15 - (float)((float)((float)(0.5 - *((float *)this + 179)) * v13) + *((float *)this + 179)));
  v21 = (float)((float)((float)v30 * *((float *)this + 184)) + (float)v23)
      - (float)(v14 - (float)((float)((float)(0.5 - *((float *)this + 178)) * v12) + *((float *)this + 178)));
LABEL_19:
  D2DMatrixTranslation((struct D2DMatrix *)v45, *((float *)this + 178) - v21, *((float *)this + 179) - v20, 0.0);
  D2DMatrixMultiply(v5, v5, (const struct D2DMatrix *)v45);
  v32 = *((float *)this + 219);
  if ( v32 != 0.0 )
  {
    D2DMatrixRotationYawPitchRoll((struct D2DMatrix *)v45, 0.0, 0.0, v32 * 0.017453292);
    D2DMatrixMultiply(v5, v5, (const struct D2DMatrix *)v45);
  }
  D2DMatrixRotationYawPitchRoll(
    (struct D2DMatrix *)v46,
    *((float *)this + 182) * 0.017453292,
    *((float *)this + 181) * 0.017453292,
    *((float *)this + 183) * 0.017453292);
  D2DMatrixMultiply(v5, v5, (const struct D2DMatrix *)v46);
  D2DMatrixTranslation((struct D2DMatrix *)v45, v21 + v14, v20 + v15, 0.0);
  D2DMatrixMultiply(v5, v33, (const struct D2DMatrix *)v45);
  HIDWORD(v44[0]) = 1056964608;
  v42 = 0LL;
  v43 = 0.0;
  v44[1] = 1056964608LL;
  D3DXVec3TransformCoord((struct D2DVector3 *)&v42, (const struct D2DVector3 *)((char *)v44 + 4), v5);
  if ( *((_BYTE *)this + 972) )
    v34 = v43;
  else
    v34 = 0.0;
  D2DMatrixTranslation(
    (struct D2DMatrix *)v45,
    0.0,
    0.0,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*((float *)this + 214) + *((float *)this + 174)) + v34) ^ _xmm));
  D2DMatrixMultiply(v5, v5, (const struct D2DMatrix *)v45);
  v36 = CMatrixTransform3dProxy::Update(*((CMatrixTransform3dProxy **)this + 30), v35);
  v38 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x5E6u, 0LL);
  }
  else
  {
    v39 = *((float *)this + 170);
    if ( v39 != *((float *)this + 171) )
    {
      v40 = CEffectGroupProxy::Update(
              *((CEffectGroupProxy **)this + 33),
              v39,
              v37,
              *((const struct CTransform3dGroupProxy **)this + 32));
      v38 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x5EBu, 0LL);
      else
        *((_DWORD *)this + 171) = *((_DWORD *)this + 170);
    }
  }
  return v38;
}
