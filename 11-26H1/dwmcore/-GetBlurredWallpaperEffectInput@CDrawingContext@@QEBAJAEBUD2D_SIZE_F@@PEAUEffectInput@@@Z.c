/*
 * XREFs of ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2EB0
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18026A0D0 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18001A090 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180039A10 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B38B0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x1800C88D0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2A94 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800D34F8 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ @ 0x1800D35C8 (-GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800D369C (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1800D4500 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D47B0 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800D4AA0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x180216868 (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@PEAVCMILMatrix@@@Z @ 0x180260BE8 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@PEAVCMILMatrix@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180262340 (-GetRenderTargetBitmap@CCachedVisualImage@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::GetBlurredWallpaperEffectInput(
        const struct CVisualTree **this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  const struct D2D_SIZE_F *v5; // r13
  CDrawingContext *v6; // rcx
  CComposition *v7; // rax
  struct CVisual *v8; // rbx
  CVisualTree *DesktopTree; // r12
  struct CVisual *CurrentVisual; // rax
  const struct CVisualTreePath *v11; // r15
  CVisual *v12; // rsi
  int WorldTransform; // esi
  float width; // xmm0_4
  float height; // xmm1_4
  CSparseStorage::AllocatedStorage *v16; // rcx
  __m128i v17; // xmm1
  int v18; // eax
  float left; // xmm7_4
  float top; // xmm10_4
  float bottom; // xmm9_4
  float right; // xmm6_4
  CVisualSurface *BlurredWallpaperSurface; // rax
  int ExplicitRealizationSizeCVI; // eax
  unsigned int v25; // ebx
  float *v26; // rax
  float v27; // xmm6_4
  FLOAT x; // xmm7_4
  float v29; // xmm2_4
  float y; // xmm6_4
  float v31; // xmm1_4
  __int32 v32; // eax
  __int128 v33; // xmm1
  CCachedVisualImage *v34; // rbx
  CDrawListBitmap *v35; // rax
  int v36; // eax
  CVisualTree *v38; // rax
  const struct CVisualTree *v39; // r15
  int v40; // eax
  unsigned int v41; // r13d
  struct CTreeData *v42; // rax
  struct CTreeData *v43; // rax
  __int64 v44; // rdx
  const struct RenderTargetInfo *v45; // rax
  __int64 v46; // rax
  struct D2D_RECT_F v47; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_VECTOR_2F v48[2]; // [rsp+40h] [rbp-C0h] BYREF
  float v49; // [rsp+50h] [rbp-B0h]
  float v50; // [rsp+54h] [rbp-ACh]
  __m256i v51; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v52; // [rsp+80h] [rbp-80h]
  __m128i v53; // [rsp+90h] [rbp-70h]
  char v54; // [rsp+A0h] [rbp-60h]
  __int16 v55; // [rsp+A1h] [rbp-5Fh]
  char v56; // [rsp+A3h] [rbp-5Dh]
  __m128i si128; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v58; // [rsp+C0h] [rbp-40h]
  __m128i v59; // [rsp+D0h] [rbp-30h]
  __m128i v60; // [rsp+E0h] [rbp-20h]
  int v61; // [rsp+F0h] [rbp-10h]
  __m128i v62; // [rsp+100h] [rbp+0h] BYREF
  int v63; // [rsp+110h] [rbp+10h]
  int v64; // [rsp+114h] [rbp+14h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v5 = a2;
  *(_QWORD *)&v47.left = a2;
  EffectInput::Reset(a3);
  v7 = g_pComposition;
  *((_BYTE *)a3 + 44) = 1;
  *((_BYTE *)a3 + 104) = 1;
  *((_BYTE *)a3 + 106) = 1;
  v8 = (struct CVisual *)*((_QWORD *)v7 + 86);
  if ( !v8 )
  {
    CDrawingContext::SetEffectInputToTransparentBlack(v6, v5, a3);
    *((_DWORD *)a3 + 10) |= 0x200u;
    return 0LL;
  }
  DesktopTree = CVisual::GetDesktopTree(*((CVisual **)v7 + 86));
  if ( DesktopTree )
  {
    v61 = 10666;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v58 = _mm_load_si128((const __m128i *)&_xmm);
    v59 = _mm_load_si128((const __m128i *)&_xmm);
    v60 = _mm_load_si128((const __m128i *)&_xmm);
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
    v11 = this[996];
    v12 = CurrentVisual;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v11 + 8LL) + 192LL))(*(_QWORD *)(*(_QWORD *)v11 + 8LL)) )
    {
      WorldTransform = CVisual::GetWorldTransform(v12, v11, (struct CMILMatrix *)&si128);
      if ( WorldTransform < 0 )
      {
        v44 = 1725LL;
        goto LABEL_25;
      }
    }
    else
    {
      v38 = CVisual::GetDesktopTree(v12);
      v39 = v38;
      if ( v38 )
      {
        v40 = CVisualTree::EnsureVisualTransform(v38, v12);
        v41 = v40;
        if ( v40 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6C6,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
            (const char *)(unsigned int)v40);
          return v41;
        }
        v42 = CVisual::EnsureTreeData(v12, v39);
        CVisual::EnsureWorldTransform(v12, v39, v42);
        WorldTransform = CVisual::GetWorldTransform(v12, v39, (struct CMILMatrix *)&si128, 0LL, 0LL);
        if ( WorldTransform < 0 )
        {
          v44 = 1740LL;
          goto LABEL_25;
        }
        v5 = *(const struct D2D_SIZE_F **)&v47.left;
      }
      else
      {
        WorldTransform = CVisual::GetWorldTransform(v12, this[993], (struct CMILMatrix *)&si128, 0LL, 0LL);
        if ( WorldTransform < 0 )
        {
          v44 = 1745LL;
          goto LABEL_25;
        }
      }
      WorldTransform = CVisualTree::EnsureVisualTransform(DesktopTree, v8);
      if ( WorldTransform < 0 )
      {
        v44 = 1750LL;
        goto LABEL_25;
      }
      v43 = CVisual::EnsureTreeData(v8, DesktopTree);
      CVisual::EnsureWorldTransform(v8, DesktopTree, v43);
    }
    width = v5->width;
    height = v5->height;
    *(_QWORD *)&v47.left = 0LL;
    v47.right = width + 0.0;
    v47.bottom = height + 0.0;
    *(_OWORD *)&v48[0].x = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)&si128, &v47, (float *)v48);
    v16 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)v8 + 27);
    if ( (*((_DWORD *)v16 + 1) & 0x10000) != 0 )
    {
      v17 = *(__m128i *)((char *)CSparseStorage::AllocatedStorage::FindSlot(v16, 16) + 4);
      v18 = _mm_cvtsi128_si32(v17);
    }
    else
    {
      v17 = 0LL;
      v18 = 0;
    }
    v56 = 0;
    *(__m128i *)&v48[0].x = v17;
    left = (float)v18;
    v54 = -86;
    top = (float)v17.m128i_i32[1];
    bottom = (float)_mm_cvtsi128_si32(_mm_srli_si128(v17, 12));
    v55 = 41;
    right = (float)_mm_srli_si128(v17, 8).m128i_i32[0];
    *(__m128i *)v51.m256i_i8 = _mm_load_si128((const __m128i *)&_xmm);
    *(__m128i *)&v51.m256i_u64[2] = _mm_load_si128((const __m128i *)&_xmm);
    v47.bottom = bottom;
    v47.left = (float)v18;
    v47.top = (float)v17.m128i_i32[1];
    v47.right = right;
    v52 = _mm_load_si128((const __m128i *)&_xmm);
    v53 = _mm_load_si128((const __m128i *)&_xmm);
    WorldTransform = CVisual::GetWorldTransform(v8, DesktopTree, (struct CMILMatrix *)&v51, 0LL, 0LL);
    if ( WorldTransform >= 0 )
    {
      if ( !CMILMatrix::IsIdentity<1>((__int64)&v51) )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v51, &v47, &v47.left);
        bottom = v47.bottom;
        right = v47.right;
        top = v47.top;
        left = v47.left;
      }
      BlurredWallpaperSurface = CVisual::GetBlurredWallpaperSurface(v8);
      *(_QWORD *)&v47.left = 0LL;
      v48[0] = 0LL;
      ExplicitRealizationSizeCVI = CVisualSurface::GetExplicitRealizationSizeCVI(
                                     BlurredWallpaperSurface,
                                     v48,
                                     (struct CCachedVisualImage **)&v47);
      v25 = ExplicitRealizationSizeCVI;
      if ( ExplicitRealizationSizeCVI >= 0 )
      {
        v51.m256i_i64[0] = si128.m128i_i64[0];
        v51.m256i_i32[2] = si128.m128i_i32[3];
        v51.m256i_i64[3] = v60.m128i_i64[0];
        v52.m128i_i32[0] = v60.m128i_i32[3];
        *(__int64 *)((char *)&v51.m256i_i64[1] + 4) = v58.m128i_i64[0];
        v51.m256i_i32[5] = v58.m128i_i32[3];
        v63 = LODWORD(left) ^ _xmm;
        v64 = LODWORD(top) ^ _xmm;
        v62 = _mm_load_si128((const __m128i *)&_xmm);
        v26 = Matrix3x3::operator*((float *)v51.m256i_i32, (float *)si128.m128i_i32, (float *)v62.m128i_i32);
        v27 = right - left;
        x = v48[0].x;
        v29 = v48[0].x / v27;
        y = v48[0].y;
        v31 = v48[0].y;
        *(_QWORD *)&v48[0].y = 0LL;
        v48[0].x = v29 / v48[0].x;
        v48[1].y = (float)(v31 / (float)(bottom - top)) / y;
        v49 = 0.0 - (float)(v48[0].x * 0.0);
        v50 = 0.0 - (float)(v48[1].y * 0.0);
        Matrix3x3::operator*(v26, (float *)v51.m256i_i32, (float *)v48);
        *(_QWORD *)((char *)a3 + 84) = 0LL;
        *((FLOAT *)a3 + 23) = x;
        *((float *)a3 + 24) = y;
        v32 = v52.m128i_i32[0];
        v33 = *(_OWORD *)&v51.m256i_u64[2];
        v34 = *(CCachedVisualImage **)&v47.left;
        *((_OWORD *)a3 + 3) = *(_OWORD *)v51.m256i_i8;
        *((_OWORD *)a3 + 4) = v33;
        *((_DWORD *)a3 + 20) = v32;
        v35 = CDrawListBitmap::CDrawListBitmap(
                (CDrawListBitmap *)&v62,
                (struct IBitmapResource *)(((unsigned __int64)v34 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)v34 >> 64)));
        CDrawListBitmap::operator=(a3, v35);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v62.m128i_i64[1]);
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(v62.m128i_i64);
        v36 = *((_DWORD *)a3 + 10) | 0x200;
        *((_DWORD *)a3 + 10) = v36;
        if ( this[25] )
          *((_DWORD *)a3 + 10) = v36 | 0x40;
        if ( g_LockAndReadBlurredWallpaperBackdropTexture )
        {
          v48[0] = 0LL;
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v48);
          v45 = (const struct RenderTargetInfo *)(*((__int64 (__fastcall **)(char *))this[2] + 2))((char *)this + 16);
          if ( (int)CCachedVisualImage::GetRenderTargetBitmap(v34, v45, (struct IRenderTargetBitmap **)v48) >= 0 )
          {
            v46 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v48 + 144LL))(*(_QWORD *)v48);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v46 + 112LL))(
              v46,
              (unsigned __int64)(this + 2) & -(__int64)(this != 0LL));
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v48);
        }
        if ( v34 )
          (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v34 + 16LL))(v34);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
        (const char *)(unsigned int)ExplicitRealizationSizeCVI);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v47);
      return v25;
    }
    v44 = 1767LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)WorldTransform);
    return (unsigned int)WorldTransform;
  }
  v25 = -2003292412;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6B2,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
    (const char *)0x88982F04LL);
  return v25;
}
