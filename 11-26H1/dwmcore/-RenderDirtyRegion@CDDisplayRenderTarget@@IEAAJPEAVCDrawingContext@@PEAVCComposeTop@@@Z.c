/*
 * XREFs of ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800642A4 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18006AAF0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x18008BFD0 (-GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800ED670 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800ED6B8 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x1800F6FA0 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180159A24 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
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

__int64 __fastcall CDDisplayRenderTarget::RenderDirtyRegion(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  double v3; // xmm2_8
  int v5; // ebx
  _DWORD *v7; // rsi
  __int64 v8; // r8
  const struct COcclusionContext *v9; // r12
  __int64 v10; // r15
  struct CVisualTree *v11; // rcx
  struct CDrawingContext **v12; // xmm1_8
  int EffectiveDirectFlipMode; // eax
  int v14; // edx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // ecx
  int v18; // xmm7_4
  float *v19; // rsi
  float *v20; // r15
  float *v21; // r12
  float *v22; // rbx
  float v23; // xmm1_4
  float v24; // xmm0_4
  unsigned int v25; // xmm1_4
  struct CVisualTree *v26; // rdx
  int v27; // eax
  char v28; // al
  int *v29; // rax
  const struct FastRegion::Internal::CRgnData **v30; // r13
  __m128i v31; // xmm6
  const struct FastRegion::Internal::CRgnData *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // eax
  const struct FastRegion::Internal::CRgnData *v35; // rcx
  __int64 v36; // r12
  D3DVALUE v37; // eax
  int v38; // edx
  signed __int32 v39; // xmm0_4
  int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // r12d
  D3DVALUE r; // ecx
  __int64 v44; // rax
  struct CDrawingContext *v45; // rax
  bool v46; // zf
  CDirectFlipInfo *v48; // rbx
  int DeviceTarget; // eax
  __int64 v50; // rax
  int v51; // eax
  int v52; // eax
  float v53; // xmm1_4
  const int *v54; // rdx
  unsigned int v55; // [rsp+20h] [rbp-E0h]
  char v56; // [rsp+40h] [rbp-C0h]
  unsigned int v57; // [rsp+48h] [rbp-B8h] BYREF
  struct CDrawingContext *v58; // [rsp+50h] [rbp-B0h] BYREF
  const struct COcclusionContext *OcclusionContext; // [rsp+58h] [rbp-A8h]
  struct _D3DCOLORVALUE v60; // [rsp+60h] [rbp-A0h] BYREF
  __m128 v61; // [rsp+70h] [rbp-90h] BYREF
  __m128i v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+90h] [rbp-70h]
  FastRegion::CRegion *v64; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v65[18]; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+F0h] [rbp-10h] BYREF
  struct CDrawingContext **v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  struct _D3DCOLORVALUE *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  unsigned int *v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]

  v58 = a3;
  v5 = 0;
  v56 = 0;
  v7 = (_DWORD *)((char *)this + 30240);
  OcclusionContext = CMonitorDirty::GetOcclusionContext(
                       (CDDisplayRenderTarget *)((char *)this + 30224),
                       (__int64)a2,
                       v3);
  v9 = OcclusionContext;
  *((_DWORD *)OcclusionContext + 280) = 0x7FFFFFFF;
  if ( !*((_BYTE *)this + 30680) )
    CMergedRectBase<8>::Optimize((__int64)this + 30240);
  v10 = (unsigned int)*v7;
  if ( this == (CDDisplayRenderTarget *)-30244LL && *v7 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v60.r = 0.0;
    v57 = v10;
    v67 = (struct CDrawingContext **)&v61;
    v61.m128_u64[0] = (unsigned __int64)a2;
    v69 = &v60;
    v68 = 8LL;
    v71 = &v57;
    v70 = 4LL;
    v72 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start,
      v8,
      4u,
      &v66);
  }
  v11 = (struct CVisualTree *)*((_QWORD *)this + 25);
  v12 = (struct CDrawingContext **)*((_QWORD *)this + 4016);
  v66 = (struct _EVENT_DATA_DESCRIPTOR)*((_OWORD *)this + 2007);
  v67 = v12;
  CDesktopTree::UpdateCVIRenderTargets(v11, (__int64)&v66, (struct D2D_RECT_F *)((char *)this + 29944));
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode((char *)this + 232);
  if ( EffectiveDirectFlipMode == 1 )
  {
    if ( !CDirectFlipInfo::PresentNeeded(*((CDirectFlipInfo **)this + 2440)) )
      goto LABEL_34;
  }
  else
  {
    if ( EffectiveDirectFlipMode == 2 )
    {
      dword_1803DE364 |= 2u;
      goto LABEL_34;
    }
    v17 = EffectiveDirectFlipMode - 3;
    if ( (unsigned int)(EffectiveDirectFlipMode - 3) < 2 )
    {
      v48 = (CDirectFlipInfo *)*((_QWORD *)this + 2440);
      *((_DWORD *)v9 + 280) = CDirectFlipInfo::GetCutoffZ(v48, v9);
      *(_QWORD *)&v60.r = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v60);
      DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v48, (struct IDeviceTarget **)&v60);
      v5 = DeviceTarget;
      if ( DeviceTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTarget, 0x41Bu, 0LL);
      }
      else
      {
        if ( RenderTargetInfo::IsHDR((CDDisplayRenderTarget *)((char *)this + 32112)) )
        {
          v50 = (*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)(*(_QWORD *)&v60.r + 8LL) + 24LL))(
                  *(_QWORD *)&v60.r + 8LL,
                  &v61);
          if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v50 + 8)) )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v60.r + 160LL))(*(_QWORD *)&v60.r);
        }
        v51 = CDrawingContext::PushRenderTarget(a2, *(struct IDeviceTarget **)&v60.r);
        v5 = v51;
        if ( v51 >= 0 )
        {
          v56 = 1;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v60);
          goto LABEL_9;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x423u, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v60);
      goto LABEL_34;
    }
  }
LABEL_9:
  v18 = 0;
  if ( (!*((_BYTE *)this + 19284) || !*((_DWORD *)this + 4820)) && *((_BYTE *)this + 30217) )
  {
    v52 = *((_DWORD *)this + 30);
    *(struct _D3DCOLORVALUE *)&v60.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
    v61.m128_u64[0] = 0LL;
    v53 = (float)*((int *)this + 31);
    v61.m128_f32[2] = (float)v52;
    v61.m128_f32[3] = v53;
    v27 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v61, 1, 1);
    v5 = v27;
    if ( v27 < 0 )
    {
      v55 = 1080;
LABEL_42:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, v55, 0LL);
      goto LABEL_34;
    }
    v5 = CDrawingContext::Clear(a2, &v60);
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, v54, 0, v5, 0x440u, 0LL);
      goto LABEL_34;
    }
    CDDisplayRenderTarget::NotifyRenderedRect(this, v54, 0LL);
    CMonitorDirty::SetFullTightDirtyRegion((CDDisplayRenderTarget *)((char *)this + 30224));
    *((_BYTE *)this + 30217) = 0;
  }
  if ( *((_DWORD *)this + 7552) == 2 )
    v18 = *((_DWORD *)this + 7553);
  v19 = (float *)((char *)this + 30252);
  v20 = (float *)((char *)this + 16 * v10 + 30244);
  while ( 1 )
  {
    v21 = v19 - 2;
    if ( v19 - 2 == v20 )
      break;
    v22 = v19 + 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(
        v17,
        v14,
        v15,
        v16,
        *(_DWORD *)v21,
        *((_DWORD *)v19 - 1),
        *(_DWORD *)v19,
        *(_DWORD *)v22);
    v23 = *v19 - *v21;
    v24 = *v22 - *(v19 - 1);
    v63 = 0LL;
    dword_1803DE378 += (int)(float)(v23 * v24);
    v25 = *((_DWORD *)v19 - 1);
    v26 = (struct CVisualTree *)*((_QWORD *)this + 14);
    v62.m128i_i32[0] = *(__int32 *)v21;
    *(__int64 *)((char *)v62.m128i_i64 + 4) = __PAIR64__(*(_DWORD *)v19, v25);
    v62.m128i_i32[3] = *(__int32 *)v22;
    v27 = CDrawingContext::DrawVisualTree(a2, v26, 1, v18, 0LL);
    v5 = v27;
    if ( v27 < 0 )
    {
      v55 = 1121;
      goto LABEL_42;
    }
    *(struct _D3DCOLORVALUE *)&v60.r = 0LL;
    if ( !*((_BYTE *)this + 19284) || (v28 = 1, !*((_DWORD *)this + 4820)) )
      v28 = 0;
    CMILMatrix::Transform2DBoundsHelper<0>(
      (__int64)this + (v28 != 0 ? 30140LL : 30004LL),
      (const struct D2D_RECT_F *)(v19 - 2),
      &v60.r);
    v29 = PixelAlign((int *)&v66, (unsigned int *)&v60, v3);
    v30 = (const struct FastRegion::Internal::CRgnData **)(*((_QWORD *)this + 27) + 24LL);
    v31 = *(__m128i *)v29;
    v32 = *v30;
    v62 = v31;
    v33 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **))v32 + 14))(v30);
    (*(void (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v33 + 88LL))(v33, &v61);
    v34 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **))*v30 + 12))(v30);
    v35 = *v30;
    v57 = v34;
    v36 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **))v35 + 26))(v30);
    LODWORD(v37) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 88LL))(v36);
    v38 = _mm_cvtsi128_si32(v31);
    v39 = _mm_srli_si128(v31, 8).m128i_u32[0];
    v60.r = v37;
    v64 = (FastRegion::CRegion *)v65;
    if ( v38 >= v39 || (v40 = _mm_cvtsi128_si32(_mm_srli_si128(v31, 12)), v62.m128i_i32[1] >= v40) )
    {
      v65[0] = 0;
    }
    else
    {
      v65[0] = 2;
      v65[1] = v38;
      v65[2] = v39;
      v65[3] = v62.m128i_i32[1];
      v65[4] = 16;
      v65[7] = v38;
      v65[8] = v39;
      v65[5] = v40;
      v65[6] = 16;
    }
    CRegion::Union(v30 + 20, &v64);
    (*(void (__fastcall **)(__int64, FastRegion::CRegion **))(*(_QWORD *)v36 + 120LL))(v36, &v64);
    v41 = v57;
    v42 = 0;
    if ( v57 )
    {
      r = v60.r;
      do
      {
        if ( v42 != LODWORD(r) )
        {
          v44 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **, _QWORD))*v30 + 28))(
                  v30,
                  v42);
          (*(void (__fastcall **)(__int64, FastRegion::CRegion **))(*(_QWORD *)v44 + 104LL))(v44, &v64);
          v41 = v57;
          r = v60.r;
        }
        ++v42;
      }
      while ( v42 < v41 );
    }
    FastRegion::CRegion::FreeMemory(&v64);
    v45 = v58;
    *((_BYTE *)this + 32528) = 1;
    if ( v45 )
    {
      v27 = CComposeTop::SubtractOverdraw(v45, v19 - 2);
      v5 = v27;
      if ( v27 < 0 )
      {
        v55 = 1129;
        goto LABEL_42;
      }
    }
    v19 += 4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v58 = a2;
    v68 = 8LL;
    v67 = &v58;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop,
      v15,
      2u,
      &v66);
  }
LABEL_34:
  v46 = *((_BYTE *)this + 30680) == 0xFF;
  *((_DWORD *)this + 7560) = 0;
  *((_BYTE *)this + 30676) = 0;
  if ( !v46 )
    *((_BYTE *)this + 30680) = 0;
  *((_WORD *)this + 16048) = 0;
  if ( v56 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
  return (unsigned int)v5;
}
