/*
 * XREFs of ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18001771C
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180018D34 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z @ 0x180017520 (-CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x1800179D0 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180057CB8 (-IsEquivalentTo@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x180159064 (-Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateIntermediates(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4)
{
  bool IsRectangularShadow; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  __int64 *v15; // rsi
  __int64 v16; // r15
  struct CDrawingContext *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  int FastShadowBitmap; // eax
  __int64 v22; // rcx
  __int64 v23; // r14
  int v24; // eax
  float v25; // xmm1_4
  __int128 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+30h] BYREF

  *((_WORD *)this + 34) = 0;
  v27 = (__int64)*a3;
  IsRectangularShadow = CDropShadow::ShadowIntermediates::IsRectangularShadow(this);
  v12 = FLOAT_1_0;
  LODWORD(v13) = v27;
  if ( IsRectangularShadow )
  {
    v25 = fmaxf(1.0, a4 + a4);
    if ( *(float *)&v27 > v25 )
    {
      *(float *)&v27 = v25;
      v13 = v25;
      *((_BYTE *)this + 68) = 1;
    }
    v14 = *((float *)&v27 + 1);
    if ( *((float *)&v27 + 1) > v25 )
    {
      *((float *)&v27 + 1) = v25;
      v14 = v25;
      *((_BYTE *)this + 69) = 1;
    }
  }
  else
  {
    v14 = *((float *)&v27 + 1);
  }
  *((_QWORD *)&v26 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v13));
  *(_QWORD *)&v26 = 0LL;
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v26, v9, v10, v11);
  v15 = (__int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 7)
    && !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEquivalentTo(
                           &v26,
                           (char *)this + 8) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 7);
  }
  v16 = *v15;
  *(_OWORD *)((char *)this + 8) = v26;
  if ( CDropShadow::ShadowIntermediates::IsRectangularShadow(this) && (float)(fminf(a3->width, a3->height) * 0.5) >= a4 )
  {
    if ( !ShadowHelpers::s_cpFastShadowBlur )
    {
      FastShadowBitmap = ShadowHelpers::CreateFastShadowBitmap(a2, v17);
      v19 = FastShadowBitmap;
      if ( FastShadowBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FastShadowBitmap, 0x301u, 0LL);
        return v19;
      }
    }
    wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
      (__int64 *)this + 7,
      (__int64 *)&ShadowHelpers::s_cpFastShadowBlur);
    *(_OWORD *)((char *)this + 24) = ShadowHelpers::s_rcFastShadowBlur;
  }
  else if ( !*v15 )
  {
    v22 = *((_QWORD *)this + 6);
    if ( !v22 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 64LL))(v22, 19LL) )
      v23 = *((_QWORD *)g_pComposition + 90);
    else
      v23 = *((_QWORD *)this + 6);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 7);
    DWORD2(v26) = 19;
    *(_QWORD *)&v26 = "DWM DropShadow Blur";
    v24 = CShadowBlurProducer::Create(
            (unsigned int)&v26,
            (_DWORD)a2,
            (unsigned int)&v27,
            v23,
            (__int64)this + 8,
            LODWORD(a4),
            (__int64)this + 56,
            (__int64)this + 24);
    v19 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x316u, 0LL);
      return v19;
    }
  }
  v18 = *((_QWORD *)this + 6);
  if ( v18 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, 19LL) )
    v12 = *(float *)(*((_QWORD *)this + 6) + 116LL);
  if ( v16 != *v15 || *((float *)this + 16) != v12 )
  {
    *((float *)this + 16) = v12;
    *(_QWORD *)this = GetCurrentFrameId();
  }
  return 0;
}
