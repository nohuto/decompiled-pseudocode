/*
 * XREFs of ?CalcEyePointOrVector@CLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1802644C8
 * Callers:
 *     ?GetLightInfo@CDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18026D090 (-GetLightInfo@CDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?GetLightInfo@CPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18027D3B0 (-GetLightInfo@CPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?GetLightInfo@CSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180282250 (-GetLightInfo@CSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1800CFDCC (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180190198 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18019C240 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     ?NormalizeVec3@CLight@@IEBAXAEBUD2D_VECTOR_3F@@PEAU2@@Z @ 0x180264974 (-NormalizeVec3@CLight@@IEBAXAEBUD2D_VECTOR_3F@@PEAU2@@Z.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

__int64 __fastcall CLight::CalcEyePointOrVector(__int64 a1, __int64 a2, __int64 a3)
{
  CTransform3D *v3; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  float v11; // xmm14_4
  float v12; // xmm3_4
  float v13; // xmm11_4
  float v14; // xmm15_4
  float v15; // xmm12_4
  float v16; // xmm9_4
  float v17; // xmm7_4
  float v18; // xmm10_4
  float v19; // xmm6_4
  float v20; // xmm13_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm8_4
  float v24; // xmm8_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  unsigned int v27; // xmm1_4
  unsigned int v28; // xmm1_4
  __int128 v30; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h]
  __int128 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h]
  __int128 v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+88h] [rbp-80h]
  __int128 v36; // [rsp+98h] [rbp-70h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-60h]
  __int128 v38; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-40h]
  __int128 v40; // [rsp+D8h] [rbp-30h]
  __int128 v41; // [rsp+E8h] [rbp-20h]
  int v42; // [rsp+F8h] [rbp-10h]
  __int128 v43; // [rsp+108h] [rbp+0h] BYREF
  __int64 v44; // [rsp+118h] [rbp+10h]
  __int128 v45; // [rsp+128h] [rbp+20h] BYREF
  __int64 v46; // [rsp+138h] [rbp+30h]
  _OWORD v47[4]; // [rsp+148h] [rbp+40h] BYREF
  int v48; // [rsp+188h] [rbp+80h]

  v3 = *(CTransform3D **)(a3 + 232);
  if ( !v3 )
    goto LABEL_6;
  Matrix = CTransform3D::GetMatrix(v3, (const struct D2D_SIZE_F *)(a3 + 140));
  v6 = *((_OWORD *)Matrix + 1);
  v38 = *(_OWORD *)Matrix;
  v7 = *((_OWORD *)Matrix + 2);
  v39 = v6;
  v8 = *((_OWORD *)Matrix + 3);
  LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
  v40 = v7;
  v41 = v8;
  v42 = (int)Matrix;
  if ( CMILMatrix::Invert((CMILMatrix *)&v38, v9, v10) )
  {
    v47[0] = v38;
    v47[1] = v39;
    v48 = v42;
    v47[2] = v40;
    v47[3] = v41;
    CalcFrustumOutline((CMILMatrix *)v47, (float *)&v36, (float *)&v30, (float *)&v32, (float *)&v34);
    v11 = *(float *)&v36 - *(float *)&v34;
    v12 = *(float *)&v34 - *(float *)&v32;
    v13 = *(float *)&v30 - *(float *)&v32;
    v14 = *((float *)&v36 + 1) - *((float *)&v34 + 1);
    v15 = *((float *)&v30 + 1) - *((float *)&v32 + 1);
    v16 = *((float *)&v30 + 2) - *((float *)&v32 + 2);
    v17 = *(float *)&v36 - *(float *)&v30;
    v18 = *((float *)&v36 + 1) - *((float *)&v30 + 1);
    v19 = *((float *)&v36 + 2) - *((float *)&v30 + 2);
    v43 = v34;
    v20 = *((float *)&v36 + 2) - *((float *)&v34 + 2);
    v21 = *((float *)&v34 + 2) - *((float *)&v32 + 2);
    v22 = (float)(*((float *)&v34 + 1) - *((float *)&v32 + 1)) * (float)(*((float *)&v34 + 1) - *((float *)&v32 + 1));
    v34 = v32;
    v44 = v35;
    v32 = v30;
    v35 = v33;
    v33 = v31;
    v45 = v36;
    v46 = v37;
    v23 = sqrtf_0((float)(v22 + (float)(v12 * v12)) + (float)(v21 * v21));
    v24 = (float)(v23 + sqrtf_0((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19))) * 0.5;
    v25 = sqrtf_0((float)((float)(v15 * v15) + (float)(v13 * v13)) + (float)(v16 * v16));
    v26 = sqrtf_0((float)((float)(v14 * v14) + (float)(v11 * v11)) + (float)(v20 * v20));
    if ( IntersectFourLines(
           &v45,
           &v32,
           &v34,
           &v43,
           (float)(v24 + (float)((float)(v25 + v26) * 0.5)) / 20.0,
           (float *)&v30) )
    {
      v27 = DWORD1(v30);
      *(_DWORD *)a2 = v30;
      *(_QWORD *)(a2 + 4) = __PAIR64__(DWORD2(v30), v27);
      *(_DWORD *)(a2 + 12) = 1065353216;
    }
    else
    {
      *(_QWORD *)&v30 = 0LL;
      DWORD2(v30) = 1065353216;
      CMILMatrix::Transform3DVector(
        (CMILMatrix *)&v38,
        (struct D2D_VECTOR_3F *)&v32,
        (const struct D2D_VECTOR_3F *)&v30);
      *(_QWORD *)&v30 = 0LL;
      DWORD2(v30) = 0;
      CLight::NormalizeVec3(0LL, (const struct D2D_VECTOR_3F *)&v32, (struct D2D_VECTOR_3F *)&v30);
      v28 = DWORD1(v30);
      *(_DWORD *)a2 = v30;
      *(_QWORD *)(a2 + 4) = __PAIR64__(DWORD2(v30), v28);
      *(_DWORD *)(a2 + 12) = 0;
    }
  }
  else
  {
LABEL_6:
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 1065353216LL;
  }
  return a2;
}
