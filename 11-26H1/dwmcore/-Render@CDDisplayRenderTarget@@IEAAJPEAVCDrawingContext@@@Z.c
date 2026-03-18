/*
 * XREFs of ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x1800358F0 (-CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800ED6B8 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1800EDBD0 (-IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1800EDC30 (-GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ.c)
 *     ?GetTargetSyncLockCount@CTargetStats@@QEBAIXZ @ 0x1800F0D84 (-GetTargetSyncLockCount@CTargetStats@@QEBAIXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801945F8 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E4808 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x1801FC760 (-SyncLock@CDDisplayRenderTarget@@UEAAXI@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18022CF50 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x18022F694 (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x18022F718 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1802534E0 (McTemplateU0qx_EventWriteTransfer.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1802543B0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Render(CDDisplayRenderTarget *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  struct CComposeTop *v6; // r14
  bool v7; // r15
  _DWORD *v8; // r12
  char v10; // r13
  unsigned int TargetSyncLockCount; // eax
  const struct CMILMatrix *DeviceTransform; // rax
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  char *v16; // r14
  int v17; // eax
  int v18; // edi
  int v19; // eax
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  unsigned int FrameRate; // r15d
  unsigned int CPUTimePerFrame; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r13d
  int v29; // eax
  unsigned int v30; // [rsp+28h] [rbp-49h]
  struct D2D_RECT_F v31; // [rsp+48h] [rbp-29h] BYREF
  float v32; // [rsp+58h] [rbp-19h] BYREF
  float v33; // [rsp+5Ch] [rbp-15h]
  float v34; // [rsp+60h] [rbp-11h]
  float v35; // [rsp+64h] [rbp-Dh]

  v2 = 0;
  v5 = *((_QWORD *)this + 25);
  v6 = *(struct CComposeTop **)(v5 + 4048);
  v7 = v6 && CComposeTop::HasNewContent(*(CComposeTop **)(v5 + 4048));
  v8 = (_DWORD *)((char *)this + 30240);
  if ( !*((_DWORD *)this + 7560) )
  {
    if ( !v7 )
      return v2;
    v8 = (_DWORD *)((char *)this + 30240);
  }
  v10 = *((_BYTE *)this + 32096);
  TargetSyncLockCount = CTargetStats::GetTargetSyncLockCount((CDDisplayRenderTarget *)((char *)this + 32152));
  if ( TargetSyncLockCount )
    CDDisplayRenderTarget::SyncLock((CDDisplayRenderTarget *)((char *)this + 160), TargetSyncLockCount);
  if ( v7 )
    COverlaySwapChain::CopyFrontToBackBuffer((COverlaySwapChain *)(*((_QWORD *)this + 27) + 24LL));
  DeviceTransform = CDDisplayRenderTarget::GetDeviceTransform((CDDisplayRenderTarget *)((char *)this + 88));
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 464LL)
                              + 8LL * *(unsigned int *)(*((_QWORD *)this + 27) + 524LL))
                  + 216LL);
  v14 = CDrawingContext::BeginFrame(
          a2,
          (v13 + 16) & -(__int64)(v13 != 0),
          DeviceTransform,
          (char *)this + 140,
          1,
          (char *)this + 232);
  v2 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x2AFu, 0LL);
    return v2;
  }
  if ( *v8 )
  {
    v15 = CDDisplayRenderTarget::RenderDirtyRegion(this, a2, v6);
    v2 = v15;
    if ( v15 < 0 )
    {
      v30 = 701;
LABEL_52:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v30, 0LL);
      goto LABEL_18;
    }
  }
  if ( v7 || v10 && v6 )
  {
    v15 = CDDisplayRenderTarget::RenderComposeTop(this, a2, v6, v10);
    v2 = v15;
    if ( v15 < 0 )
    {
      v30 = 709;
      goto LABEL_52;
    }
  }
  if ( !CDDisplayRenderTarget::IsPrimaryMonitor((CDDisplayRenderTarget *)((char *)this + 160)) )
    goto LABEL_18;
  v2 = 0;
  v16 = (char *)g_pComposition + 1000;
  if ( g_pComposition == (CComposition *)-1000LL || !*((_BYTE *)g_pComposition + 1008) )
    goto LABEL_18;
  v19 = *((_DWORD *)this + 30);
  v20 = 0.0;
  v21 = 0.0;
  v32 = 0.0;
  v22 = (float)v19;
  v23 = (float)*((int *)this + 31);
  v33 = 0.0;
  v34 = (float)v19;
  v35 = v23;
  v31 = 0LL;
  FrameRate = CDebugFrameCounter::GetFrameRate((CComposition *)((char *)g_pComposition + 1000));
  CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame((CDebugFrameCounter *)v16);
  v28 = CPUTimePerFrame;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qx_EventWriteTransfer(v27, v26, FrameRate, CPUTimePerFrame);
  if ( v16 == (char *)-4632LL )
  {
LABEL_40:
    if ( v20 > v31.left )
      v31.left = v20;
    if ( v21 > v31.top )
      v31.top = v21;
    if ( v31.right > v22 )
      v31.right = v22;
    if ( v31.bottom > v23 )
      v31.bottom = v23;
    if ( IsEmpty(&v31) )
    {
      *(_QWORD *)&v31.right = 0LL;
      *(_QWORD *)&v31.left = 0LL;
    }
    if ( !IsEmpty(&v31) )
    {
      CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, &v31, 1);
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect((char *)this + 30224, &v31);
    }
    goto LABEL_18;
  }
  v29 = CDisplayDebugFrameCounter::Display(
          (CDisplayDebugFrameCounter *)(v16 + 4632),
          FrameRate,
          v28,
          a2,
          (__int64)this + 30004,
          (__int64)&v32,
          CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0,
          (__int64)&v31);
  v2 = v29;
  if ( v29 >= 0 )
  {
    v23 = v35;
    v22 = v34;
    v21 = v33;
    v20 = v32;
    goto LABEL_40;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x96u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x2D4u, 0LL);
LABEL_18:
  v17 = CDrawingContext::EndFrame(a2);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x2DBu, 0LL);
  if ( !v2 || (v2 & 0x80000000) == 0 && v18 < 0 )
    return (unsigned int)v18;
  return v2;
}
