/*
 * XREFs of ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180036F6C
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180197C44 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CTreeEffectLayer::GetDestToTexSpaceTransform(__int64 a1, _DWORD *a2, unsigned int a3)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  __int64 v11; // rax
  float v12; // xmm5_4
  float v13; // xmm4_4
  _DWORD *result; // rax
  float v15; // xmm1_4
  float v16; // xmm3_4
  int v17; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // [rsp+28h] [rbp-49h] BYREF
  __int64 v21; // [rsp+2Ch] [rbp-45h]
  float v22; // [rsp+34h] [rbp-3Dh]
  float v23; // [rsp+38h] [rbp-39h]
  float v24; // [rsp+3Ch] [rbp-35h]
  _DWORD v25[2]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v26[24]; // [rsp+48h] [rbp-29h] BYREF
  __m128i si128; // [rsp+60h] [rbp-11h] BYREF
  __int64 v28; // [rsp+70h] [rbp-1h]

  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 32LL))(
    *(_QWORD *)(a1 + 8) + 8LL,
    v25);
  v6 = *(float *)(a1 + 280);
  v7 = (float)*(int *)(a1 + 16);
  v8 = (float)*(int *)(a1 + 20);
  v9 = (float)(*(float *)(a1 + 196) - v7) * v6;
  v10 = (float)(*(float *)(a1 + 200) - v8) * v6;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 256) + 696LL) )
  {
    v9 = *(float *)(a1 + 228) - v7;
    v10 = *(float *)(a1 + 232) - v8;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 160LL) + 24LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 248) + 160LL),
          a3);
  si128 = *(__m128i *)v11;
  v28 = *(_QWORD *)(v11 + 16);
  if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&si128) )
  {
    D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&si128);
    v9 = v9 + *(float *)&v28;
    v10 = v10 + *((float *)&v28 + 1);
    v28 = 0LL;
  }
  v21 = 0LL;
  v20 = 1.0 / (float)v25[0];
  v22 = 1.0 / (float)v25[1];
  v23 = 0.0 - (float)(v20 * 0.0);
  v24 = 0.0 - (float)(v22 * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v26,
    (const struct D2D1::Matrix3x2F *)&v20,
    (const struct D2D1::Matrix3x2F *)&si128);
  *(float *)&v28 = v9 / v12;
  *((float *)&v28 + 1) = v10 / v13;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v20,
    (const struct D2D1::Matrix3x2F *)v26,
    (const struct D2D1::Matrix3x2F *)&si128);
  result = a2;
  v15 = v22;
  v16 = v20;
  v17 = v21;
  a2[3] = HIDWORD(v21);
  v18 = v23;
  *((float *)a2 + 4) = v15;
  v19 = v24;
  *((float *)a2 + 6) = v18;
  *((float *)a2 + 7) = v19;
  *(float *)a2 = v16;
  a2[1] = v17;
  a2[2] = 0;
  a2[5] = 0;
  a2[8] = 1065353216;
  return result;
}
