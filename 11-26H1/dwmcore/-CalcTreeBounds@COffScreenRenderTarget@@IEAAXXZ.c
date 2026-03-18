/*
 * XREFs of ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x1800643C8
 * Callers:
 *     ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x18005F7B0 (-UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A25C (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?OnContentSizeChanged@CCaptureController@@IEAAXXZ @ 0x18026A3A0 (-OnContentSizeChanged@CCaptureController@@IEAAXXZ.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A45C (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1802864B0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ @ 0x180286930 (-UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180057D50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COffScreenRenderTarget::CalcTreeBounds(
        COffScreenRenderTarget *this,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __m128i *v3; // rbx
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm6
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  bool v10; // al
  __m128 v11; // xmm1
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  __int64 v15; // [rsp+28h] [rbp-19h] BYREF
  float v16; // [rsp+30h] [rbp-11h]
  float v17; // [rsp+34h] [rbp-Dh]
  __m128 v18[4]; // [rsp+38h] [rbp-9h] BYREF
  int v19; // [rsp+78h] [rbp+37h]
  int v20; // [rsp+A8h] [rbp+67h] BYREF
  int v21; // [rsp+ACh] [rbp+6Bh]

  v3 = (__m128i *)((char *)this + 376);
  if ( *((_QWORD *)this + 14) )
  {
    v5 = *(__m128 *)((char *)this + 308);
    v6 = *(__m128 *)((char *)this + 324);
    v19 = *((_DWORD *)this + 93);
    v7 = (__m128)_mm_loadu_si128(v3);
    v18[0] = v5;
    v8 = *(__m128 *)((char *)this + 340);
    v18[1] = v6;
    v9 = *(__m128 *)((char *)this + 356);
    v18[2] = v8;
    v18[3] = v9;
    v10 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)v18, v18, a3);
    LOWORD(v19) = v19 & 0xC003;
    if ( v10 )
    {
      (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 12) + 40LL))((char *)this + 96, &v20);
      v15 = 0LL;
      v16 = (float)v20;
      v17 = (float)v21;
      CMILMatrix::Transform2DBoundsHelper<0>(v18, &v15, v3);
    }
    else
    {
      *v3 = (__m128i)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v11 = (__m128)_mm_loadu_si128(v3);
    LODWORD(v12) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
    LODWORD(v13) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
    LODWORD(v14) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
    if ( (v7.m128_f32[0] != v11.m128_f32[0]
       || v14 != _mm_shuffle_ps(v11, v11, 85).m128_f32[0]
       || v13 != _mm_shuffle_ps(v11, v11, 170).m128_f32[0]
       || v12 != _mm_shuffle_ps(v11, v11, 255).m128_f32[0])
      && (v13 > v7.m128_f32[0] && v12 > v14 || !IsEmpty((const struct D2D_RECT_F *)v3))
      && ((v7.m128_f32[0] > -3.4028235e38 || v13 < 3.4028235e38) && (v14 > -3.4028235e38 || v12 < 3.4028235e38)
       || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite((float *)v3->m128i_i32)) )
    {
      *(_BYTE *)(*((_QWORD *)this + 14) + 2628LL) = 1;
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 408);
    }
  }
  else
  {
    *((_QWORD *)this + 48) = 0LL;
    v3->m128i_i64[0] = 0LL;
  }
}
