/*
 * XREFs of ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x18015A6EC
 * Callers:
 *     ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015926C (-ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 *     ?ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B32CC (-ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCa.c)
 * Callees:
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180019868 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18001A090 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x180038AB4 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800D369C (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x18015B11C (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShadowHelpers::GenerateBlurIntermediate(
        struct CResourceTag *a1,
        struct CDrawingContext *a2,
        __int64 a3,
        _QWORD *a4,
        __int128 *a5,
        float a6,
        __int64 a7,
        _OWORD *a8)
{
  __int128 v12; // xmm0
  __m128 m22_low; // xmm6
  enum D3D_FEATURE_LEVEL v14; // edx
  int v15; // eax
  unsigned int v16; // ebx
  CExternalEffectGraph *v17; // rbx
  int v18; // eax
  int v19; // edi
  struct D2D_MATRIX_3X2_F v21; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+48h] [rbp-B8h] BYREF
  char v23; // [rsp+58h] [rbp-A8h]
  __int128 v24; // [rsp+60h] [rbp-A0h] BYREF
  char v25; // [rsp+70h] [rbp-90h]
  char v26; // [rsp+8Ch] [rbp-74h]
  __int128 v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+B4h] [rbp-4Ch]
  char v29; // [rsp+C8h] [rbp-38h]
  _BYTE v30[8]; // [rsp+D0h] [rbp-30h] BYREF
  void (__fastcall ***v31)(_QWORD, GUID *, __int64); // [rsp+D8h] [rbp-28h]
  __int128 v32; // [rsp+124h] [rbp+24h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v24 = 0LL;
  v27 = 0LL;
  v25 = 0;
  EffectInput::Reset((struct EffectInput *)&v24);
  v12 = *a5;
  v26 = 1;
  v29 = 1;
  v28 = v12;
  EffectInput::EffectInput((EffectInput *)v30, (const struct EffectInput *)&v24);
  v23 = 0;
  v22 = 0LL;
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v22 + 1, a3);
  CDrawListBitmap::operator=((__int64 *)&v24, (__int64 *)&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22 + 1);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v22);
  *(_QWORD *)&v21.m[1][0] = 0LL;
  v21.m11 = a6 / 3.0;
  v21.m12 = a6 / 3.0;
  CBlurRenderingGraph::DeterminePreScale(
    (const struct EffectInput *)&v24,
    (const struct EffectInput *)v30,
    1,
    &v21,
    (struct D2D_VECTOR_2F *)v21.m[1]);
  m22_low = (__m128)LODWORD(v21.m22);
  v14 = *(_DWORD *)(*((_QWORD *)a2 + 4) + 624LL);
  *(_QWORD *)&v21.m[2][0] = 0LL;
  v21.m11 = v21.m11 * v21.m21;
  v21.m12 = v21.m12 * v21.m22;
  v15 = CBlurRenderingGraph::Create(
          a1,
          v14,
          (const struct D2D_VECTOR_2F *)&v21,
          D2D1_GAUSSIANBLUR_OPTIMIZATION_BALANCED,
          D2D1_BORDER_MODE_SOFT,
          (struct CBlurRenderingGraph **)v21.m[2]);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v15);
    if ( *(_QWORD *)&v21.m[2][0] )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v21.m[2][0] + 8LL))(*(_QWORD *)&v21.m[2][0]);
  }
  else
  {
    v17 = *(CExternalEffectGraph **)&v21.m[2][0];
    *(_QWORD *)(*(_QWORD *)&v21.m[2][0] + 1584LL) = _mm_unpacklo_ps((__m128)LODWORD(v21.m21), m22_low).m128_u64[0];
    if ( a4 )
      *((_QWORD *)v17 + 195) = *a4;
    v18 = CExternalEffectGraph::Render(v17, a2, (const struct EffectInput *)&v24, (struct EffectInput *)v30);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
        (const char *)(unsigned int)v18);
      (*(void (__fastcall **)(CExternalEffectGraph *))(*(_QWORD *)v17 + 8LL))(v17);
      v16 = v19;
    }
    else
    {
      (**v31)(v31, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, a7);
      if ( a8 )
        *a8 = v32;
      if ( v17 )
        (*(void (__fastcall **)(CExternalEffectGraph *))(*(_QWORD *)v17 + 8LL))(v17);
      v16 = 0;
    }
  }
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v30);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v24);
  return v16;
}
