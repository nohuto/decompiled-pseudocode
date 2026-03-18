/*
 * XREFs of ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801E610C
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801BFAA4 (-NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV-$TMilRect_@HUtagRE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushOverlayClip(CDrawingContext *this, __int64 *a2, int *a3)
{
  double v3; // xmm2_8
  __int64 i; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct D2D_RECT_F v17; // xmm0
  __int64 v18; // rax
  int (__fastcall *v19)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, _QWORD **)); // rbx
  COverlayContext *v20; // rbx
  const struct CVisual *CurrentVisual; // rax
  struct _LUID v22; // r8
  struct D2D_RECT_F v23; // [rsp+30h] [rbp-39h] BYREF
  struct D2D_RECT_F v24; // [rsp+40h] [rbp-29h] BYREF
  _OWORD v25[4]; // [rsp+50h] [rbp-19h] BYREF
  int v26; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  _QWORD *v28; // [rsp+D0h] [rbp+67h] BYREF
  int (__fastcall ***v29)(_QWORD, GUID *, _QWORD **); // [rsp+E0h] [rbp+77h] BYREF
  char v30; // [rsp+E8h] [rbp+7Fh] BYREF

  v23 = 0LL;
  for ( i = 0LL; i < 4; ++i )
    *(&v24.left + i) = (float)a3[i];
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)this + 88, &v24, &v23.left);
  v8 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (__m128 *)&v23, 1, 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    CDrawingContext::GetClipBoundsWorld((__int64)this, &v23.left);
    if ( !IsEmpty(&v23) )
    {
      v13 = *(_OWORD *)((char *)this + 88);
      v14 = *(_OWORD *)((char *)this + 104);
      v26 = *((_DWORD *)this + 38);
      v25[0] = v13;
      v15 = *(_OWORD *)((char *)this + 120);
      v25[1] = v14;
      v16 = *(_OWORD *)((char *)this + 136);
      v25[2] = v15;
      v25[3] = v16;
      if ( CMILMatrix::Invert((CMILMatrix *)v25, v11, v12) )
      {
        v24 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v25, &v23, &v24.left);
        v17 = *(struct D2D_RECT_F *)PixelAlign((int *)&v23, (unsigned int *)&v24, v3);
      }
      else
      {
        v17 = *(struct D2D_RECT_F *)a3;
      }
      v18 = *a2;
      v24 = v17;
      v29 = 0LL;
      v28 = 0LL;
      v19 = *(int (__fastcall **)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, _QWORD **)))(v18 + 64);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v29);
      if ( v19(a2, &v29) >= 0 )
      {
        if ( v28 )
          (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
        if ( (**v29)(v29, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v28) >= 0 )
        {
          v20 = (COverlayContext *)*((_QWORD *)this + 5);
          (*(void (__fastcall **)(_QWORD *, char *))(v28[2] + 24LL))(v28 + 2, &v30);
          CurrentVisual = CDrawingContext::GetCurrentVisual(this);
          COverlayContext::NotifyOverlayInvertedContent(v20, CurrentVisual, v22, &v24);
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaldrawingcontext.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
