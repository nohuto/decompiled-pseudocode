/*
 * XREFs of ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x180058938
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??0?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18005A290 (--0-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x18012F240 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B5D94 (-AddDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@AEAAXXZ @ 0x180252FCC (-Optimize@-$CMergedRectBase@$03@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplayRenderTarget::AddComputeScribbleDirtyRects(CDDisplayRenderTarget *this)
{
  _OWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  int ComputeScribbleInvalidRects; // eax
  unsigned int v6; // eax
  _OWORD *v7; // rsi
  _OWORD *i; // rdi
  __int128 v9; // [rsp+28h] [rbp-79h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-69h] BYREF
  _OWORD v11[10]; // [rsp+3Ch] [rbp-65h] BYREF
  char v12; // [rsp+DCh] [rbp+3Bh]
  char v13; // [rsp+E0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  if ( COverlayContext::AnyDesktopPlaneScaling((CDDisplayRenderTarget *)((char *)this + 232)) )
  {
    *((_QWORD *)&v9 + 1) = *((_QWORD *)this + 3747);
    *(_QWORD *)&v9 = 0LL;
  }
  else
  {
    v9 = *(_OWORD *)((char *)this + 29960);
  }
  v10 = 0;
  v2 = v11;
  v3 = 5LL;
  do
  {
    TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v2++);
    --v3;
  }
  while ( v3 );
  v4 = *((_QWORD *)this + 27) + 256LL;
  v12 = 0;
  v13 = -1;
  ComputeScribbleInvalidRects = CScribbleSwapChain::GetComputeScribbleInvalidRects(v4, (char *)this + 30072, &v9, &v10);
  if ( ComputeScribbleInvalidRects < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x506,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\ddisplayrendertarget.cpp",
      (const char *)(unsigned int)ComputeScribbleInvalidRects,
      v9);
  v6 = v10;
  if ( v10 )
  {
    if ( !v13 )
    {
      CMergedRectBase<4>::Optimize(&v10);
      v6 = v10;
    }
    gsl::details::extent_type<-1>::extent_type<-1>(&v9, v6);
    if ( (_QWORD)v9 == -1LL )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v7 = &v11[v9];
    for ( i = v11; i != v7; ++i )
      CTargetDirtyBase<8>::AddDirtyRect((char *)this + 30224, i);
  }
}
