/*
 * XREFs of ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x1802563F0
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255E28 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802560AC (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18008D01C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180255D1C (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@AEBVCMILMatrix@@AEBV-$TMilRect_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RenderDirtyRegion(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        struct ISwapChain *a3,
        const struct CMILMatrix *a4,
        enum CRemoteAppRenderTarget::ProtectionMode *a5)
{
  char *v5; // rsi
  unsigned int v6; // ebx
  __int64 *v11; // rax
  int v12; // eax
  COcclusionContext *v13; // rbx
  const struct D2D_RECT_F *v14; // rsi
  __int64 v15; // r12
  struct CVisualTree *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v22; // [rsp+40h] [rbp-88h]
  struct D2D_RECT_F v23; // [rsp+48h] [rbp-80h] BYREF
  __int64 v24; // [rsp+58h] [rbp-70h]

  v5 = (char *)this + 280;
  v6 = 0;
  *(_DWORD *)a5 = 0;
  if ( *((_DWORD *)this + 74) )
  {
    v11 = (__int64 *)(*(__int64 (__fastcall **)(struct ISwapChain *))(*(_QWORD *)a3 + 112LL))(a3);
    v12 = CDrawingContext::BeginFrame(
            (__int64)a2,
            v11,
            (__int64)a4,
            (CRemoteAppRenderTarget *)((char *)this + 140),
            3u,
            0LL);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x208u, 0LL);
    }
    else
    {
      v22 = (**(__int64 (__fastcall ***)(char *))v5)(v5);
      v13 = (COcclusionContext *)v22;
      CMergedRectBase<8>::GetRects((unsigned int *)v5 + 4, &v23);
      v14 = *(const struct D2D_RECT_F **)&v23.right;
      v15 = *(_QWORD *)&v23.right + 16LL * *(_QWORD *)&v23.left;
      while ( v14 != (const struct D2D_RECT_F *)v15 )
      {
        v16 = (struct CVisualTree *)*((_QWORD *)this + 14);
        v23 = *v14;
        v24 = 0LL;
        v17 = CDrawingContext::DrawVisualTree(a2, v16, &v23.left, v13, 2, 0, 0LL);
        v6 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x214u, 0LL);
          CDrawingContext::EndFrame(a2);
          return v6;
        }
        CRemoteAppRenderTarget::NotifyRenderedRect(v18, (__int64)a3, (__int64)a4, v14);
        v13 = (COcclusionContext *)v22;
        ++v14;
      }
      if ( *((_BYTE *)a2 + 7980) )
      {
        *(_DWORD *)a5 = 2;
      }
      else if ( *((_BYTE *)this + 2152) )
      {
        *(_DWORD *)a5 = 1;
      }
      v19 = CDrawingContext::EndFrame(a2);
      v6 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x223u, 0LL);
      }
      else if ( g_LockAndReadOffscreenTarget )
      {
        v20 = (*(__int64 (__fastcall **)(struct ISwapChain *))(*(_QWORD *)a3 + 112LL))(a3);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v20 + 112LL))(
          v20,
          ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL));
      }
    }
  }
  return v6;
}
