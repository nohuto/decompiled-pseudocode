/*
 * XREFs of ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400
 * Callers:
 *     ?RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180249CB0 (-RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x180057518 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18008D01C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180159A24 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801945F8 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180255294 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180255730 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::Render(CRemoteRenderTarget *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  char v3; // r12
  __int64 v6; // r15
  CComposeTop *v7; // r15
  __int64 *v8; // rax
  int v9; // eax
  struct CVisualTree *v10; // rcx
  __int64 v11; // xmm1_8
  COcclusionContext *v12; // rbx
  struct D2D_RECT_F *v13; // rdi
  __int64 v14; // r13
  struct CVisualTree *v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  struct D2D_RECT_F v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]

  v2 = 0;
  v3 = 0;
  if ( !*((_QWORD *)this + 24) )
    goto LABEL_28;
  v6 = *((_QWORD *)this + 26);
  if ( !v6 || *(int *)(*((_QWORD *)this + 3) + 6256LL) > 3 )
    goto LABEL_28;
  v7 = *(CComposeTop **)(v6 + 4048);
  if ( v7 && CComposeTop::HasNewContent(v7) )
    LOBYTE(v2) = 1;
  CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 336, *((_QWORD *)this + 14) + 112LL);
  if ( (_BYTE)v2 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 136LL))(*((_QWORD *)this + 24));
  if ( !*((_DWORD *)this + 88) && !(_BYTE)v2 )
    goto LABEL_25;
  v8 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 112LL))(*((_QWORD *)this + 24));
  v9 = CDrawingContext::BeginFrame(
         (__int64)a2,
         v8,
         (__int64)this + 240,
         (CRemoteRenderTarget *)((char *)this + 140),
         1u,
         0LL);
  v2 = v9;
  if ( v9 < 0 )
  {
    v20 = 159;
    goto LABEL_19;
  }
  v10 = (struct CVisualTree *)*((_QWORD *)this + 26);
  v11 = *(_QWORD *)((char *)this + 324);
  v22 = *(struct D2D_RECT_F *)((char *)this + 308);
  v3 = 1;
  v23 = v11;
  CDesktopTree::UpdateCVIRenderTargets(v10, (__int64)&v22, (struct D2D_RECT_F *)this + 14);
  v21 = (**((__int64 (__fastcall ***)(char *))this + 42))((char *)this + 336);
  v12 = (COcclusionContext *)v21;
  CMergedRectBase<8>::GetRects((unsigned int *)this + 88, &v22);
  v13 = *(struct D2D_RECT_F **)&v22.right;
  v14 = *(_QWORD *)&v22.right + 16LL * *(_QWORD *)&v22.left;
  while ( v13 != (struct D2D_RECT_F *)v14 )
  {
    v15 = (struct CVisualTree *)*((_QWORD *)this + 14);
    v22 = *v13;
    v23 = 0LL;
    v16 = CDrawingContext::DrawVisualTree(a2, v15, &v22.left, v12, 2, 0, 0LL);
    v2 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xB0u, 0LL);
      goto LABEL_29;
    }
    CRemoteRenderTarget::NotifyRenderedRect((__int64)this, v13, 0);
    if ( v7 )
    {
      v9 = CComposeTop::SubtractOverdraw((__int64)v7, (__int64)v13);
      v2 = v9;
      if ( v9 < 0 )
      {
        v20 = 186;
        goto LABEL_19;
      }
    }
    v12 = (COcclusionContext *)v21;
    ++v13;
  }
  if ( !v7 || (v9 = CRemoteRenderTarget::RenderComposeTop(this, a2, v7, *((_BYTE *)this + 2208)), v2 = v9, v9 >= 0) )
  {
LABEL_25:
    v3 = 0;
    v9 = CDrawingContext::EndFrame(a2);
    v2 = v9;
    if ( v9 < 0 )
    {
      v20 = 201;
      goto LABEL_19;
    }
LABEL_28:
    v3 = 0;
    goto LABEL_29;
  }
  v20 = 196;
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v20, 0LL);
LABEL_29:
  CMergedRectBase<8>::Reset((__int64)this + 352);
  *((_WORD *)this + 1104) = 0;
  if ( v3 )
    CDrawingContext::EndFrame(a2);
  if ( g_LockAndReadTarget )
  {
    v17 = *((_QWORD *)this + 24);
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 112LL))(v17);
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 112LL))(
        v18,
        ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL));
    }
  }
  return v2;
}
