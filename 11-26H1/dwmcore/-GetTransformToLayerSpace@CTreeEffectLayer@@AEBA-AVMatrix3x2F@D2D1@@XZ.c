/*
 * XREFs of ?GetTransformToLayerSpace@CTreeEffectLayer@@AEBA?AVMatrix3x2F@D2D1@@XZ @ 0x1802502C4
 * Callers:
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18005CE3C (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::GetTransformToLayerSpace(__int64 a1, D2D1::Matrix3x2F *a2)
{
  float v2; // xmm1_4
  int v3; // eax
  __m128i v4; // xmm0
  int v5; // eax
  __int64 v6; // r9
  float v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+24h] [rbp-34h]
  float v10; // [rsp+2Ch] [rbp-2Ch]
  float v11; // [rsp+30h] [rbp-28h]
  float v12; // [rsp+34h] [rbp-24h]
  __m128i si128; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int32 v14; // [rsp+48h] [rbp-10h]
  float v15; // [rsp+4Ch] [rbp-Ch]

  v2 = *(float *)(a1 + 280);
  v3 = *(_DWORD *)(a1 + 16);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = 0LL;
  v8 = v2;
  v10 = v2;
  v4 = _mm_cvtsi32_si128(-v3);
  v5 = *(_DWORD *)(a1 + 20);
  v14 = _mm_cvtepi32_ps(v4).m128_u32[0];
  v15 = (float)-v5;
  v11 = 0.0 - (float)(v2 * 0.0);
  v12 = v11;
  D2D1::Matrix3x2F::SetProduct(a2, (const struct D2D1::Matrix3x2F *)&si128, (const struct D2D1::Matrix3x2F *)&v8);
  return v6;
}
