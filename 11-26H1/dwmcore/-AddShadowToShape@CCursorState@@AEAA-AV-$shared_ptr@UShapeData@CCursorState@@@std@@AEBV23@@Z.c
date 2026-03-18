/*
 * XREFs of ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180290C5C
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802923D8 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180015760 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z @ 0x180016FBC (-GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x1800AF4BC (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1800E1FE0 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800E646C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180102130 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180102580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180110538 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AAD5C (-InternalQueryInterface@-$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@.c)
 *     ?Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801D76FC (-Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___ @ 0x1801DCCC0 (gsl--final_action__ShadowHelpers--GenerateMaskIntermediate_--_8_--_lambda_2___--_final_action__S.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180215DF4 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     gsl::final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___::_final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___ @ 0x180259664 (gsl--final_action__CCursorState--AddShadowToShape_--_58_--_lambda_1___--_final_action__CCursorSt.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x18029070C (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x1802984C0 (-CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CCursorState::AddShadowToShape(__int64 a1, _QWORD *a2, _QWORD **a3)
{
  CDeviceManager *v5; // rcx
  CD2DEffect *v6; // rbx
  struct CD3DDevice *v7; // rdi
  CD2DEffect *v8; // rbx
  struct CD3DDevice *v9; // rdi
  __int64 v10; // rcx
  struct ID2D1Effect *v11; // rbx
  struct ID2D1Effect *v12; // r8
  struct ID2D1Effect *v13; // rbx
  struct ID2D1Effect *v14; // rsi
  __int64 *v15; // rax
  struct CD3DDevice *v16; // rbx
  __int64 v17; // rcx
  CDrawingContext *v18; // rax
  struct IRenderTargetBitmap *v19; // rdi
  __int64 v20; // rax
  CDrawingContext *v21; // rbx
  unsigned int r_low; // r12d
  unsigned int g_low; // r13d
  CSystemMemoryBitmap *v24; // rax
  CSystemMemoryBitmap *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rbx
  CD2DEffect *v29; // [rsp+40h] [rbp-89h] BYREF
  struct CD3DDevice *v30; // [rsp+48h] [rbp-81h] BYREF
  struct ID2D1Effect *v31; // [rsp+50h] [rbp-79h] BYREF
  ID2D1Effect *v32; // [rsp+58h] [rbp-71h] BYREF
  struct IRenderTargetBitmap *v33; // [rsp+60h] [rbp-69h] BYREF
  ID2D1Effect *v34; // [rsp+68h] [rbp-61h] BYREF
  struct ID2D1Bitmap *v35; // [rsp+70h] [rbp-59h] BYREF
  struct IWICBitmapSource *v36; // [rsp+78h] [rbp-51h] BYREF
  struct CDrawingContext *v37; // [rsp+80h] [rbp-49h] BYREF
  CDrawingContext *v38; // [rsp+88h] [rbp-41h] BYREF
  float v39; // [rsp+90h] [rbp-39h]
  __int64 v40; // [rsp+94h] [rbp-35h]
  char v41; // [rsp+9Ch] [rbp-2Dh]
  __int16 v42; // [rsp+9Dh] [rbp-2Ch]
  char v43; // [rsp+9Fh] [rbp-2Ah]
  int v44; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v45; // [rsp+A4h] [rbp-25h]
  struct _D3DCOLORVALUE v46; // [rsp+B0h] [rbp-19h] BYREF
  __m128i si128; // [rsp+C0h] [rbp-9h] BYREF
  int v48; // [rsp+D0h] [rbp+7h]
  int v49; // [rsp+D4h] [rbp+Bh]
  __int64 v50; // [rsp+D8h] [rbp+Fh] BYREF
  unsigned int v51; // [rsp+E0h] [rbp+17h]
  unsigned int v52; // [rsp+E4h] [rbp+1Bh]

  v30 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v30);
  if ( (int)CDeviceManager::GetDefaultDevice(v5, &v30) >= 0 )
  {
    v31 = 0LL;
    v29 = 0LL;
    if ( (int)CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)v30 + 16), &CLSID_D2D1Shadow, &v29) < 0
      || (v6 = v29, (int)CD2DEffect::GetID2DEffect(v29, &v31) < 0) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_45;
    }
    v7 = v30;
    v32 = 0LL;
    v29 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( (int)CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)v7 + 16), &CLSID_D2D12DAffineTransform, &v29) < 0
      || (v8 = v29, (int)CD2DEffect::GetID2DEffect(v29, &v32) < 0) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_17;
    }
    v9 = v30;
    v34 = 0LL;
    v29 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( (int)CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)v9 + 16), &CLSID_D2D1Composite, &v29) < 0
      || (int)CD2DEffect::GetID2DEffect(v29, &v34) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_16;
    }
    v10 = (*a3)[3];
    v36 = 0LL;
    if ( (int)CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>::InternalQueryInterface(
                v10,
                &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                &v36) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
LABEL_15:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
LABEL_16:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
LABEL_45:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
      goto LABEL_46;
    }
    v35 = 0LL;
    if ( (int)CD2DContext::CreateBitmapFromWicBitmap((struct CD3DDevice *)((char *)v30 + 16), v36, &v35) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
LABEL_20:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
      goto LABEL_15;
    }
    v11 = v31;
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v31 + 112LL))(
      v31,
      0LL,
      v35,
      1LL);
    LODWORD(v33) = 0x40000000;
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, struct IRenderTargetBitmap **, int))(*(_QWORD *)v11 + 72LL))(
      v11,
      0LL,
      0LL,
      &v33,
      4);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __m128i *, int))(*(_QWORD *)v11 + 72LL))(
      v11,
      1LL,
      0LL,
      &si128,
      16);
    v12 = v11;
    v13 = v32;
    ID2D1Effect::SetInputEffect(v32, 0, v12);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v48 = 1077936128;
    v49 = 1065353216;
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __m128i *, int))(*(_QWORD *)v13 + 72LL))(
      v13,
      2LL,
      0LL,
      &si128,
      24);
    v14 = v34;
    ID2D1Effect::SetInputEffect(v34, 0, v13);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v14 + 112LL))(
      v14,
      1LL,
      v35,
      1LL);
    v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, struct _D3DCOLORVALUE *))(*(_QWORD *)((*a3)[3] + 120LL) + 32LL))(
                       (*a3)[3] + 120LL,
                       &v46);
    v16 = v30;
    v33 = 0LL;
    v44 = 87;
    v17 = *v15;
    v18 = (CDrawingContext *)*((_QWORD *)v30 + 118);
    LODWORD(v46.r) = v17 + 6;
    LODWORD(v46.g) = HIDWORD(v17) + 6;
    v38 = v18;
    v42 = 0;
    v43 = 0;
    v45 = 1LL;
    v39 = NAN;
    v40 = 0LL;
    v41 = 0;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v33);
    si128.m128i_i32[2] = 13;
    si128.m128i_i64[0] = (__int64)"Cursor Shadow";
    if ( (int)CD3DDevice::CreateRenderTargetBitmap(
                (__int64)v16,
                (const struct CResourceTag *)&si128,
                (const struct D2D_SIZE_U *)&v46,
                (struct PixelFormatInfo *)&v44,
                (struct RenderTargetInfo *)&v38,
                1,
                &v33) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
LABEL_23:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
      goto LABEL_20;
    }
    v37 = 0LL;
    CDrawingContext::Create(&v37);
    v19 = v33;
    v20 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v33 + 144LL))(v33);
    v21 = v37;
    if ( (int)CDrawingContext::BeginFrame(
                (__int64)v37,
                (__int64 *)((v20 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v20 >> 64)),
                0LL,
                0LL,
                0,
                0LL) >= 0 )
    {
      v38 = 0LL;
      r_low = LODWORD(v46.r);
      si128.m128i_i8[8] = 1;
      g_low = LODWORD(v46.g);
      si128.m128i_i64[0] = (__int64)v21;
      v39 = (float)SLODWORD(v46.r);
      *(float *)&v40 = (float)SLODWORD(v46.g);
      if ( (int)CDrawingContext::PushGpuClipRectInternal((__int64)v21, 0LL, (__m128 *)&v38, 1, 0) >= 0 )
      {
        v38 = v21;
        LOBYTE(v39) = 1;
        *(struct _D3DCOLORVALUE *)&v46.r = 0LL;
        if ( (int)CDrawingContext::Clear(v21, &v46) >= 0
          && (int)CDrawingContext::FillEffect((const void **)v21, v14, 0LL, 0LL, 0) >= 0
          && (int)CDrawingContext::FlushD2D(v21) >= 0 )
        {
          gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___(&v38);
          gsl::final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___::_final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___((__int64)&si128);
          v24 = (CSystemMemoryBitmap *)operator new(0x98uLL);
          if ( v24 )
            v25 = CSystemMemoryBitmap::CSystemMemoryBitmap(v24);
          else
            v25 = 0LL;
          wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
            &v46,
            (__int64)v25);
          v26 = *(_QWORD *)&v46.r;
          if ( (int)CSystemMemoryBitmap::HrInit(*(void ***)&v46.r, r_low, g_low, (enum DXGI_FORMAT *)&v44, 0) < 0
            || (v50 = 0LL,
                v51 = r_low,
                v52 = g_low,
                (*(int (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, __int64, _QWORD, _DWORD))(*(_QWORD *)v19 + 128LL))(
                  v19,
                  &v50,
                  (v26 + 16) & -(__int64)(v26 != 0),
                  0LL,
                  0) < 0) )
          {
            *a2 = 0LL;
            a2[1] = 0LL;
          }
          else
          {
            std::make_shared<CCursorState::ShapeData,>(&si128);
            v27 = si128.m128i_i64[0];
            *(_QWORD *)si128.m128i_i64[0] = **a3;
            *(_DWORD *)(v27 + 8) = *((_DWORD *)*a3 + 2);
            *(_DWORD *)(v27 + 12) = *((_DWORD *)*a3 + 3);
            *(_BYTE *)(v27 + 16) = *((_BYTE *)*a3 + 16);
            *(_BYTE *)(v27 + 17) = 1;
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)(v27 + 24),
              (__int64 *)&v46);
            *(_OWORD *)a2 = __PAIR128__(si128.m128i_u64[1], v27);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v46);
          goto LABEL_26;
        }
        *a2 = 0LL;
        a2[1] = 0LL;
        gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___(&v38);
      }
      else
      {
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      gsl::final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___::_final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___((__int64)&si128);
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
LABEL_26:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
    goto LABEL_23;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_46:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v30);
  return a2;
}
