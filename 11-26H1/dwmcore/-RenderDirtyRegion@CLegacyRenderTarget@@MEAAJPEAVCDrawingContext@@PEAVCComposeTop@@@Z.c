/*
 * XREFs of ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650
 * Callers:
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180258C00 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800642A4 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18006AAF0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18008BAF0 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x18008BFD0 (-GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18008D01C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800ED670 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x1800F6FA0 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180159A24 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x1801A9424 (McTemplateU0xqq_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x1801A9E00 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1801B529C (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801D76FC (-Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x1801DC5F8 (-SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x18020AF74 (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z @ 0x180219988 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderDirtyRegion(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  double v3; // xmm2_8
  unsigned int *v4; // r13
  unsigned int v6; // ebx
  __int64 v8; // r12
  struct CVisualTree *v9; // rcx
  __int64 v10; // xmm1_8
  int EffectiveDirectFlipMode; // eax
  CDirectFlipInfo *v12; // rbx
  int CutoffZ; // eax
  int DeviceTarget; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  float v18; // xmm1_4
  int v19; // eax
  struct D2D_RECT_F *v20; // rdx
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // r13d
  _DWORD *v27; // r12
  _DWORD *i; // rsi
  float *v29; // r15
  _DWORD *v30; // rbx
  float v31; // xmm1_4
  float v32; // xmm0_4
  int v33; // xmm1_4
  struct CVisualTree *v34; // rdx
  float v35; // xmm0_4
  unsigned int v37; // [rsp+28h] [rbp-69h]
  char v38; // [rsp+48h] [rbp-49h]
  struct COcclusionContext *OcclusionContext; // [rsp+50h] [rbp-41h]
  struct _D3DCOLORVALUE v41; // [rsp+60h] [rbp-31h] BYREF
  __int64 v42; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-19h]
  __int64 v44; // [rsp+80h] [rbp-11h]
  __m128 v45; // [rsp+88h] [rbp-9h] BYREF
  __int64 v46; // [rsp+98h] [rbp+7h]

  v4 = (unsigned int *)((char *)this + 30208);
  v6 = 0;
  v38 = 0;
  OcclusionContext = CMonitorDirty::GetOcclusionContext((CLegacyRenderTarget *)((char *)this + 30208), (__int64)a2, v3);
  *((_DWORD *)OcclusionContext + 280) = 0x7FFFFFFF;
  CMergedRectBase<8>::GetRects(v4 + 4, &v42);
  v8 = v42;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start,
      (_DWORD)a2,
      0,
      v42);
  v9 = (struct CVisualTree *)*((_QWORD *)this + 23);
  v10 = *((_QWORD *)this + 4015);
  v45 = *(__m128 *)((char *)this + 32104);
  v46 = v10;
  CDesktopTree::UpdateCVIRenderTargets(v9, (__int64)&v45, (struct D2D_RECT_F *)((char *)this + 29928));
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 216);
  if ( EffectiveDirectFlipMode == 1 )
  {
    if ( !CDirectFlipInfo::PresentNeeded(*((CDirectFlipInfo **)this + 2438)) )
      return v6;
  }
  else
  {
    if ( EffectiveDirectFlipMode == 2 )
    {
      dword_1803DE364 |= 2u;
      return v6;
    }
    if ( (unsigned int)(EffectiveDirectFlipMode - 3) <= 1 )
    {
      v12 = (CDirectFlipInfo *)*((_QWORD *)this + 2438);
      CutoffZ = CDirectFlipInfo::GetCutoffZ(v12, OcclusionContext);
      *(_QWORD *)&v41.r = 0LL;
      *((_DWORD *)OcclusionContext + 280) = CutoffZ;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v41);
      DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v12, (struct IDeviceTarget **)&v41);
      v6 = DeviceTarget;
      if ( DeviceTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTarget, 0x2ACu, 0LL);
      }
      else
      {
        if ( RenderTargetInfo::IsHDR((CLegacyRenderTarget *)((char *)this + 32104)) )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)(*(_QWORD *)&v41.r + 8LL) + 24LL))(
                  *(_QWORD *)&v41.r + 8LL,
                  &v45);
          if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v15 + 8)) )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v41.r + 160LL))(*(_QWORD *)&v41.r);
        }
        v16 = CDrawingContext::PushRenderTarget(a2, *(struct IDeviceTarget **)&v41.r);
        v6 = v16;
        if ( v16 >= 0 )
        {
          v38 = 1;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
          goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x2B4u, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
      return v6;
    }
  }
LABEL_17:
  if ( COverlayContext::AnyDesktopPlaneScaling((CLegacyRenderTarget *)((char *)this + 216)) || !*((_BYTE *)this + 30201) )
  {
LABEL_22:
    v21 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 216LL))(this);
    v25 = v43;
    v26 = v21;
    v27 = (_DWORD *)(v43 + 16 * v8);
    for ( i = (_DWORD *)(v43 + 8); ; i += 4 )
    {
      v29 = (float *)(i - 2);
      if ( i - 2 == v27 )
        break;
      v30 = i + 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qdffff_EventWriteTransfer(v25, v22, v23, v24, *(_DWORD *)v29, *(i - 1), *i, *v30);
      v31 = *(float *)i - *v29;
      v32 = *(float *)v30 - *((float *)i - 1);
      v44 = 0LL;
      dword_1803DE378 += (int)(float)(v31 * v32);
      v33 = *(i - 1);
      v34 = (struct CVisualTree *)*((_QWORD *)this + 14);
      *(float *)&v42 = *v29;
      v35 = *(float *)i;
      HIDWORD(v42) = v33;
      v43 = __PAIR64__(*v30, LODWORD(v35));
      v19 = CDrawingContext::DrawVisualTree(a2, v34, v26, 0, 0LL);
      v6 = v19;
      if ( v19 < 0 )
      {
        v37 = 749;
        goto LABEL_32;
      }
      CLegacyRenderTarget::NotifyRenderedRect((__int64)this, (struct D2D_RECT_F *)(i - 2), 0);
      if ( a3 )
      {
        v19 = CComposeTop::SubtractOverdraw((__int64)a3, (__int64)(i - 2));
        v6 = v19;
        if ( v19 < 0 )
        {
          v37 = 757;
          goto LABEL_32;
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x_EventWriteTransfer(v25, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a2);
    goto LABEL_37;
  }
  v17 = *((_DWORD *)this + 30);
  *(struct _D3DCOLORVALUE *)&v41.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
  v45.m128_u64[0] = 0LL;
  v18 = (float)*((int *)this + 31);
  v45.m128_f32[2] = (float)v17;
  v45.m128_f32[3] = v18;
  v19 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v45, 1, 1);
  v6 = v19;
  if ( v19 < 0 )
  {
    v37 = 713;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v37, 0LL);
  }
  else
  {
    v6 = CDrawingContext::Clear(a2, &v41);
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    if ( (v6 & 0x80000000) == 0 )
    {
      CLegacyRenderTarget::NotifyRenderedRect((__int64)this, v20, 0);
      CMonitorDirty::SetFullTightDirtyRegion((CMonitorDirty *)v4);
      *((_BYTE *)this + 30201) = 0;
      goto LABEL_22;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, (const int *const)v20, 0, v6, 0x2D1u, v20);
  }
LABEL_37:
  if ( v38 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
  return v6;
}
