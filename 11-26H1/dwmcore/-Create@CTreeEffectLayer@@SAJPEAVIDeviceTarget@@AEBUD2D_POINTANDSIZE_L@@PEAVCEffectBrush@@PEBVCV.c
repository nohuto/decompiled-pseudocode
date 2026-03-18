/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800F8ECC
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800F898C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ??0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800F91F4 (--0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitma.c)
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x1800F93CC (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::Create(
        __int64 *a1,
        __m128i *a2,
        CEffectBrush *a3,
        __int64 a4,
        __m128 *a5,
        __int64 a6,
        _QWORD *a7)
{
  __m128 v7; // xmm2
  float v9; // xmm6_4
  __m128i v13; // xmm7
  __int64 v14; // rax
  unsigned __int64 v15; // xmm7_8
  __int64 (__fastcall *v16)(__int64 *); // rax
  unsigned __int64 v17; // rbx
  int v18; // ecx
  __m128i v19; // xmm0
  int v20; // edx
  __m128i v21; // xmm0
  int v22; // ecx
  __int64 v23; // rax
  struct RenderTargetInfo *v24; // rax
  int Bitmap; // eax
  unsigned int v26; // edi
  _QWORD *v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v32; // [rsp+48h] [rbp-71h] BYREF
  __m128i v33; // [rsp+58h] [rbp-61h] BYREF
  const char *v34; // [rsp+68h] [rbp-51h] BYREF
  int v35; // [rsp+70h] [rbp-49h]
  _BYTE v36[24]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v37[4]; // [rsp+90h] [rbp-29h] BYREF
  int v38; // [rsp+94h] [rbp-25h]

  v9 = FLOAT_1_0;
  *a7 = 0LL;
  (*(void (__fastcall **)(__int64 *, _BYTE *))(a1[1] + 24))(a1 + 1, v37);
  v38 = 1;
  v13 = *a2;
  if ( a3 && CEffectBrush::HasBlurEffectNode(a3) )
    v13 = _mm_cvttps_epi32(*a5);
  v14 = *a1;
  v33 = v13;
  v15 = _mm_srli_si128(v13, 8).m128i_u64[0];
  v16 = *(__int64 (__fastcall **)(__int64 *))(v14 + 40);
  v17 = HIDWORD(v15);
  if ( (unsigned int)v15 > HIDWORD(v15) )
    LODWORD(v17) = v15;
  v18 = *(_DWORD *)(v16(a1) + 968);
  if ( (unsigned int)v17 > v18 )
    v9 = (float)v18 / (float)(int)v17;
  v19 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v15);
  *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 * v9;
  if ( (_mm_cvtsi128_si32(v19) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)*(float *)v19.m128i_i32 - *(float *)v19.m128i_i32;
    v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
    v20 = (int)*(float *)v19.m128i_i32 - _mm_cvtsi128_si32((__m128i)v7);
  }
  else
  {
    *(float *)&v32 = *(float *)v19.m128i_i32 + 6291456.25;
    v20 = (int)((_DWORD)v32 << 10) >> 11;
  }
  v21 = (__m128i)COERCE_UNSIGNED_INT((float)v33.m128i_i32[3]);
  v33.m128i_i32[2] = v20;
  *(float *)v21.m128i_i32 = *(float *)v21.m128i_i32 * v9;
  if ( (_mm_cvtsi128_si32(v21) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)*(float *)v21.m128i_i32 - *(float *)v21.m128i_i32;
    v22 = (int)*(float *)v21.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v32 = *(float *)v21.m128i_i32 + 6291456.25;
    v22 = (int)((_DWORD)v32 << 10) >> 11;
  }
  v33.m128i_i32[3] = v22;
  if ( v20 <= 0 || v22 <= 0 )
  {
    v26 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0x80u, 0LL);
    return v26;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 64LL))(a4, 71LL) )
  {
    v26 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x7Bu, 0LL);
    return v26;
  }
  v23 = *a1;
  v32 = 0LL;
  v24 = (struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v23 + 120))(a1, v36);
  v35 = 44;
  v34 = "DWM Scratch Rendertarget (tree effect layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v34,
             (UINT32 *)&v33,
             (struct PixelFormatInfo *)v37,
             v24,
             1,
             (__int64 *)&v32);
  v26 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0x6Eu, 0LL);
    v30 = v32;
    if ( !v32 )
      return v26;
    v29 = *v32;
    goto LABEL_20;
  }
  v27 = operator new(0x120uLL);
  v28 = v32;
  if ( v27 )
    v27 = (_QWORD *)CTreeEffectLayer::CTreeEffectLayer(v27, &v33, a5, v32, a3, a6, LODWORD(v9));
  *a7 = v27;
  v27[32] = a4;
  if ( v28 )
  {
    v29 = *v28;
    v30 = v28;
LABEL_20:
    (*(void (__fastcall **)(_QWORD *))(v29 + 16))(v30);
  }
  return v26;
}
