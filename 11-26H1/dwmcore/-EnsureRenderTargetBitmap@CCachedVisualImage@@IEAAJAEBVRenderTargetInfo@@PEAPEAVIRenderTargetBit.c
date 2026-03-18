/*
 * XREFs of ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18009A68C
 * Callers:
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18009A4E0 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A5A0 (-RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801904D0 (-Snapshot@CCachedVisualImage@@QEAAJXZ.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180262260 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180262340 (-GetRenderTargetBitmap@CCachedVisualImage@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 * Callees:
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18009B5B8 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x18009B720 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x18009B848 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800F6E10 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x18016EC60 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801746F0 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ??$emplace_back@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@$$QEAV21@@Z @ 0x180261FAC (--$emplace_back@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmap(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IRenderTargetBitmap **a3)
{
  unsigned int v3; // edi
  struct CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  struct CCachedVisualImage::CCachedTarget **v9; // rcx
  __m128 v10; // xmm2
  __int64 *v11; // rdx
  struct D2D_SIZE_U v12; // rdx
  struct CCachedVisualImage::CCachedTarget *v13; // rax
  struct CCachedVisualImage::CCachedTarget *v14; // rsi
  int v15; // eax
  int v16; // eax
  struct CCachedVisualImage::CCachedTarget *v17; // rsi
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-30h]
  struct CCachedVisualImage::CCachedTarget *v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  float width; // [rsp+40h] [rbp-10h]
  float height; // [rsp+44h] [rbp-Ch]
  struct CCachedVisualImage::CCachedTarget *v24; // [rsp+80h] [rbp+30h] BYREF
  struct IRenderTargetBitmap *v25; // [rsp+90h] [rbp+40h] BYREF
  struct D2D_SIZE_U v26; // [rsp+98h] [rbp+48h] BYREF

  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  v3 = 0;
  *a3 = 0LL;
  v25 = 0LL;
  if ( *((_BYTE *)this + 1601) )
  {
    CCachedVisualImage::RemoveInvalidTargets(this, *(struct D2D_SIZE_U *)((char *)this + 1592));
    ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget(this, a2);
    if ( ExistingCachedTarget
      || (v9 = (struct CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 21),
          (__int64)(*((_QWORD *)this + 22) - (_QWORD)v9) >> 3)
      && (ExistingCachedTarget = *v9) != 0LL )
    {
      v11 = (__int64 *)((char *)ExistingCachedTarget + 8);
      goto LABEL_22;
    }
    v19 = 781;
  }
  else
  {
    (*(void (__fastcall **)(char *, struct D2D_SIZE_U *))(*((_QWORD *)this + 10) + 32LL))((char *)this + 80, &v26);
    if ( *((_QWORD *)this + 15) && v26.width && v26.height )
    {
      if ( *((_DWORD *)this + 401) == 1 )
      {
        v21 = 0LL;
        height = (float)(int)v26.height;
        width = (float)(int)v26.width;
      }
      else
      {
        v10 = (__m128)_mm_loadu_si128((const __m128i *)this + 6);
        LODWORD(v21) = v10.m128_i32[0];
        LODWORD(height) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
        HIDWORD(v21) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
        LODWORD(width) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
      }
      if ( (unsigned __int8)IsRectEmptyOrInvalid(&v21) )
      {
        v19 = 811;
        goto LABEL_4;
      }
      CCachedVisualImage::RemoveInvalidTargets(this, v12);
      v13 = CCachedVisualImage::FindExistingCachedTarget(this, a2);
      v20 = v13;
      v14 = v13;
      if ( !v13 )
      {
        v24 = 0LL;
        v16 = CCachedVisualImage::CreateCachedTarget(this, v26, a2, &v20);
        v3 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x33Fu, 0LL);
        }
        else
        {
          v17 = v20;
          v24 = v20;
          v18 = CCachedVisualImage::CCachedTarget::Update(v20);
          v3 = v18;
          if ( v18 >= 0 )
          {
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)&v25,
              (__int64 *)v17 + 1);
            std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::emplace_back<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
              (char *)this + 168,
              &v24);
            std::unique_ptr<CCachedVisualImage::CCachedTarget>::~unique_ptr<CCachedVisualImage::CCachedTarget>(&v24);
            goto LABEL_27;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x345u, 0LL);
        }
        std::unique_ptr<CCachedVisualImage::CCachedTarget>::~unique_ptr<CCachedVisualImage::CCachedTarget>(&v24);
        return v3;
      }
      v15 = CCachedVisualImage::CCachedTarget::Update(v13);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x335u, 0LL);
        return v3;
      }
      v11 = (__int64 *)((char *)v14 + 8);
LABEL_22:
      wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
        (__int64 *)&v25,
        v11);
LABEL_27:
      *a3 = v25;
      return v3;
    }
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((char *)this + 168);
    v19 = 794;
  }
LABEL_4:
  v3 = -2003304309;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, v19, 0LL);
  return v3;
}
