/*
 * XREFs of ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ @ 0x180059F10
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??0?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18005A290 (--0-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18019F3A8 (-GetRects@-$CMergedRectBase@$03@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B5D94 (-AddDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::AddComputeScribbleDirtyRects(CLegacyRenderTarget *this)
{
  _BYTE *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // [rsp+28h] [rbp-E0h]
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h]
  __int128 v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v13[172]; // [rsp+5Ch] [rbp-ACh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+18h]

  if ( COverlayContext::AnyDesktopPlaneScaling((CLegacyRenderTarget *)((char *)this + 216)) )
  {
    *((_QWORD *)&v11 + 1) = *((_QWORD *)this + 3745);
    *(_QWORD *)&v11 = 0LL;
  }
  else
  {
    v11 = *(_OWORD *)((char *)this + 29944);
  }
  v12 = 0;
  v2 = v13;
  v3 = 5LL;
  do
  {
    TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v2);
    v2 += 16;
    --v3;
  }
  while ( v3 );
  v4 = *((_QWORD *)this + 25) + 256LL;
  v13[160] = 0;
  v13[164] = -1;
  v5 = (*(__int64 (__fastcall **)(__int64, char *, __int128 *, int *))(*(_QWORD *)v4 + 96LL))(
         v4,
         (char *)this + 30056,
         &v11,
         &v12);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4F2,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\legacyrendertarget.cpp",
      (const char *)(unsigned int)v5,
      v8);
  if ( v12 )
  {
    CMergedRectBase<4>::GetRects(&v12, &v9);
    v6 = v10;
    v7 = v10 + 16 * v9;
    while ( v6 != v7 )
    {
      CTargetDirtyBase<8>::AddDirtyRect((char *)this + 30208, v6);
      v6 += 16LL;
    }
  }
}
