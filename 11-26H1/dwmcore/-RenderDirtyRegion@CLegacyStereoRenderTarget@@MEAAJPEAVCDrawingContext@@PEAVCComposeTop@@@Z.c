/*
 * XREFs of ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180258C00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800642A4 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18006AAF0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x18008BFD0 (-GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18008D01C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetClearMode@CLegacyStereoRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x180247450 (-GetClearMode@CLegacyStereoRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::RenderDirtyRegion(
        CLegacyStereoRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  double v3; // xmm2_8
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  COcclusionContext *OcclusionContext; // r15
  int ClearMode; // r12d
  unsigned int *v12; // r14
  unsigned int *i; // rsi
  int v14; // xmm1_4
  struct CVisualTree *v15; // rdx
  unsigned int v16; // xmm0_4
  int v17; // eax
  int v18; // eax
  int v19; // edi
  __int64 v21; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-60h]
  __int64 v23; // [rsp+50h] [rbp-58h]

  v6 = CLegacyRenderTarget::RenderDirtyRegion(this, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x69u, 0LL);
  }
  else if ( *((_DWORD *)this + 7556) && (!*((_BYTE *)this + 32528) || *(_DWORD *)(*((_QWORD *)this + 3) + 824LL)) )
  {
    v8 = CDrawingContext::PushRenderTarget(
           a2,
           (struct IDeviceTarget *)((*(_QWORD *)(*((_QWORD *)this + 4065) + 512LL) + 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 4065) + 512LL) != 0LL)));
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x71u, 0LL);
    }
    else
    {
      OcclusionContext = CMonitorDirty::GetOcclusionContext((CLegacyStereoRenderTarget *)((char *)this + 30208), v9, v3);
      ClearMode = CLegacyStereoRenderTarget::GetClearMode((__int64)this);
      CMergedRectBase<8>::GetRects((unsigned int *)this + 7556, &v21);
      v12 = (unsigned int *)(v22 + 16 * v21);
      for ( i = (unsigned int *)(v22 + 8); i - 2 != v12; i += 4 )
      {
        v14 = *(i - 1);
        v15 = (struct CVisualTree *)*((_QWORD *)this + 14);
        LODWORD(v21) = *(i - 2);
        v16 = *i;
        HIDWORD(v21) = v14;
        v22 = __PAIR64__(i[1], v16);
        v23 = 0LL;
        v17 = CDrawingContext::DrawVisualTree(a2, v15, (float *)&v21, OcclusionContext, ClearMode, 0, 0LL);
        v7 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x7Eu, 0LL);
          break;
        }
      }
      v18 = CDrawingContext::PopRenderTargetInternal(a2, 0);
      v19 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x85u, 0LL);
      if ( !v7 || v7 >= 0 && v19 < 0 )
        return (unsigned int)v19;
    }
  }
  return (unsigned int)v7;
}
