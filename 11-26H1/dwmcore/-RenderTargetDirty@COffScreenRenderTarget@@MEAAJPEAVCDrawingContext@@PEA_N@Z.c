/*
 * XREFs of ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0
 * Callers:
 *     ?RenderTargetDirty@CIndirectSwapchainRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1801BD320 (-RenderTargetDirty@CIndirectSwapchainRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180257B50 (-RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180286810 (-RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800570F4 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x180057518 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ @ 0x1800577C4 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180184B40 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x1801AA6E0 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x1801E4148 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18021D20C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::RenderTargetDirty(
        COffScreenRenderTarget *this,
        struct CDrawingContext *a2,
        bool *a3)
{
  __int128 v3; // xmm0
  __int64 v5; // rax
  __int64 v7; // r12
  char v8; // r15
  int v9; // r14d
  int v10; // r13d
  int v11; // eax
  int v12; // esi
  CComposition **v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r12
  int v16; // r11d
  unsigned int i; // edx
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  char *v21; // r12
  char *j; // rax
  int v23; // eax
  struct CVisualTree *v24; // rdx
  int v25; // xmm0_4
  int v26; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  char v31; // [rsp+40h] [rbp-D8h]
  unsigned int v32; // [rsp+44h] [rbp-D4h]
  unsigned int ResampleMode; // [rsp+48h] [rbp-D0h]
  __int64 v34; // [rsp+50h] [rbp-C8h]
  _DWORD *v35; // [rsp+58h] [rbp-C0h]
  char *v36; // [rsp+68h] [rbp-B0h]
  __int64 v37; // [rsp+78h] [rbp-A0h]
  _QWORD v39[3]; // [rsp+88h] [rbp-90h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-78h] BYREF
  int v41; // [rsp+B0h] [rbp-68h]
  int v42; // [rsp+B4h] [rbp-64h]
  int v43; // [rsp+B8h] [rbp-60h]
  int v44; // [rsp+BCh] [rbp-5Ch]
  __int64 v45; // [rsp+C0h] [rbp-58h]

  v3 = *(_OWORD *)((char *)this + 140);
  *a3 = 0;
  v5 = *(_QWORD *)this;
  v7 = 0LL;
  v31 = 0;
  v40 = v3;
  v8 = 0;
  ResampleMode = 0;
  v9 = 0;
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(v5 + 280))(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x14Du, 0LL);
    v13 = (CComposition **)((char *)this + 24);
  }
  else
  {
    if ( !*((_DWORD *)this + 578) )
      return (unsigned int)v12;
    QueryPerformanceCounter((LARGE_INTEGER *)this + 49);
    v13 = (CComposition **)((char *)this + 24);
    v8 = 1;
    *(_BYTE *)(*((_QWORD *)this + 3) + 6458LL) = 1;
    (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 312LL))(this);
    LOBYTE(v14) = 1;
    (*(void (__fastcall **)(COffScreenRenderTarget *, __int64, __int64))(*(_QWORD *)this + 288LL))(
      this,
      *((_QWORD *)this + 14) + 112LL,
      v14);
    if ( *((_DWORD *)this + 106) )
    {
      (**((void (__fastcall ***)(char *))this + 51))((char *)this + 408);
      v15 = *(_QWORD *)(*((_QWORD *)this + 14) + 72LL);
      v34 = v15;
      v9 = (*(_DWORD *)(v15 + 96) >> 23) & 0x7F;
      v10 = (int)(*(_DWORD *)(v15 + 96) << 9) >> 28;
      ResampleMode = CVisual::GetResampleMode(v15);
      *(_DWORD *)(v15 + 96) = v16 & 0xFE87FFFF | 0x1080000;
      CVisual::SetResampleMode(v15, *((unsigned int *)this + 45));
      if ( !*((_BYTE *)this + 864) )
        CMergedRectBase<8>::Optimize((char *)this + 424);
      gsl::details::extent_type<-1>::extent_type<-1>(v39, *((unsigned int *)this + 106));
      if ( v39[0] == -1LL || this == (COffScreenRenderTarget *)-428LL && v39[0] )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      for ( i = 0; ; i = v32 + 1 )
      {
        v32 = i;
        if ( i >= *((_DWORD *)this + 578) )
          goto LABEL_18;
        v18 = *(_QWORD *)(*((_QWORD *)this + 286) + 8LL * i);
        v37 = v18;
        (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 304LL))(this);
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 144LL))(v18);
        v20 = CDrawingContext::BeginFrame(
                a2,
                (v19 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v19 >> 64),
                (char *)this + 308,
                &v40,
                2,
                0LL);
        v12 = v20;
        if ( v20 < 0 )
          break;
        if ( *((_BYTE *)this + 2378) )
        {
          v29 = CDrawingContext::PushColorTransformLayer(a2);
          v12 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x18Au, 0LL);
            goto LABEL_17;
          }
          v31 = 1;
        }
        ++dword_1803DE368;
        v21 = (char *)this + 16 * v39[0] + 428;
        for ( j = (char *)this + 436; ; j = (char *)(v35 + 4) )
        {
          v35 = j;
          v36 = j - 8;
          if ( j - 8 == v21 )
            break;
          v23 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 216LL))(this);
          v24 = (struct CVisualTree *)*((_QWORD *)this + 14);
          v41 = *(_DWORD *)v36;
          v45 = 0LL;
          v25 = *v35;
          v42 = *(v35 - 1);
          v44 = v35[1];
          v43 = v25;
          v26 = CDrawingContext::DrawVisualTree(a2, v24, v23, 0, 0LL);
          v12 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x197u, 0LL);
            goto LABEL_17;
          }
        }
        *((_BYTE *)this + 2376) = *((_BYTE *)a2 + 7982);
        if ( v31 )
        {
          v31 = 0;
          v28 = CDrawingContext::PopLayerInternal(a2);
          v12 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x1A3u, 0LL);
LABEL_17:
            CDrawingContext::EndFrame(a2);
            goto LABEL_18;
          }
        }
        if ( g_LockAndReadOffscreenTarget )
        {
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 144LL))(v37);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 112LL))(
            v30,
            ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL));
        }
        *a3 = 1;
        CDrawingContext::EndFrame(a2);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x180u, 0LL);
LABEL_18:
      v7 = v34;
    }
  }
  CMergedRectBase<8>::Reset((char *)this + 424);
  *((_WORD *)this + 1140) = 0;
  if ( v31 )
    CDrawingContext::PopLayerInternal(a2);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 96) = (v10 << 19) & 0x780000 ^ (*(_DWORD *)(v7 + 96) & 0xC007FFFF | (v9 << 23));
    CVisual::SetResampleMode(v7, ResampleMode);
  }
  if ( v8 )
  {
    *((_BYTE *)*v13 + 6458) = 0;
    (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 320LL))(this);
  }
  if ( v12 >= 0 )
    COffScreenRenderTarget::SetNeedsFlush(this);
  CComposition::RestoreCursors(*v13);
  return (unsigned int)v12;
}
