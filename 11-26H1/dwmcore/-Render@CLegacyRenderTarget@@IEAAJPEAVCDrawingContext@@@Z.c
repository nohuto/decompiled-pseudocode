/*
 * XREFs of ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800F0834 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     ?GetTargetSyncLockCount@CTargetStats@@QEBAIXZ @ 0x1800F0D84 (-GetTargetSyncLockCount@CTargetStats@@QEBAIXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801942F0 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801945F8 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18022CF50 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x18022F694 (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x18022F718 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 *     _CLegacyRenderTarget::Render_::_43_::_lambda_1_::operator() @ 0x180252DCC (_CLegacyRenderTarget--Render_--_43_--_lambda_1_--operator().c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1802534E0 (McTemplateU0qx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::Render(CLegacyRenderTarget *this, struct CDrawingContext *a2)
{
  __int64 v2; // rax
  struct CComposeTop *v5; // rsi
  bool v6; // r14
  char v8; // r12
  unsigned int TargetSyncLockCount; // ebx
  char v10; // al
  __int64 v11; // rcx
  struct IOverlaySwapChain *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  bool v19; // zf
  float v20; // xmm6_4
  char *v21; // rsi
  int v22; // eax
  int v23; // edi
  int v24; // eax
  float v25; // xmm7_4
  float v26; // xmm9_4
  float v27; // xmm8_4
  unsigned int FrameRate; // r14d
  unsigned int CPUTimePerFrame; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // r12d
  int v33; // eax
  unsigned int v34; // [rsp+20h] [rbp-49h]
  struct D2D_RECT_F v35; // [rsp+40h] [rbp-29h] BYREF
  float v36; // [rsp+50h] [rbp-19h] BYREF
  float v37; // [rsp+54h] [rbp-15h]
  float v38; // [rsp+58h] [rbp-11h]
  float v39; // [rsp+5Ch] [rbp-Dh]
  CLegacyRenderTarget *v40; // [rsp+D0h] [rbp+67h] BYREF

  v2 = *((_QWORD *)this + 23);
  v5 = *(struct CComposeTop **)(v2 + 4048);
  v6 = v5 && CComposeTop::HasNewContent(*(CComposeTop **)(v2 + 4048));
  if ( !*((_DWORD *)this + 7556) && !v6 )
    return 0LL;
  v8 = *((_BYTE *)this + 32080);
  TargetSyncLockCount = CTargetStats::GetTargetSyncLockCount((CLegacyRenderTarget *)((char *)this + 32128));
  if ( TargetSyncLockCount && *((_DWORD *)this + 8094) )
  {
    v10 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 224LL))(this);
    v11 = *((_QWORD *)this + 25);
    v12 = (struct IOverlaySwapChain *)(v11 + 24);
    if ( !v11 )
      v12 = 0LL;
    if ( (int)COverlayContext::SyncLock(
                (CLegacyRenderTarget *)((char *)this + 216),
                v12,
                TargetSyncLockCount,
                *((_DWORD *)this + 8084),
                v10) >= 0 )
    {
      *((_DWORD *)this + 8094) += TargetSyncLockCount;
      ++*((_DWORD *)this + 8095);
      v13 = *((_QWORD *)this + 4040);
      if ( v13 )
      {
        *((_QWORD *)this + 4040) = v13 + *((_QWORD *)this + 4041) * TargetSyncLockCount;
        *((_DWORD *)this + 8084) += TargetSyncLockCount;
      }
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 136LL))(*((_QWORD *)this + 25) + 24LL);
  v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 11) + 56LL))((char *)this + 88);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 112LL))(*((_QWORD *)this + 25) + 24LL);
  v16 = CDrawingContext::BeginFrame(a2, v15, v14, (char *)this + 140, 1, (char *)this + 216);
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( *((_DWORD *)this + 7556)
      && (v18 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *, struct CDrawingContext *, struct CComposeTop *))(*(_QWORD *)this + 248LL))(
                  this,
                  a2,
                  v5),
          v17 = v18,
          v18 < 0) )
    {
      v34 = 435;
    }
    else
    {
      v19 = *((_BYTE *)this + 30664) == 0xFF;
      *((_DWORD *)this + 7556) = 0;
      *((_BYTE *)this + 30660) = 0;
      if ( !v19 )
        *((_BYTE *)this + 30664) = 0;
      *((_WORD *)this + 16040) = 0;
      if ( !v6 && (!v8 || !v5) || (v18 = CLegacyRenderTarget::RenderComposeTop(this, a2, v5, v8), v17 = v18, v18 >= 0) )
      {
        v20 = 0.0;
        if ( *((float *)this + 7482) != 0.0 )
          goto LABEL_26;
        if ( *((float *)this + 7483) != 0.0 )
          goto LABEL_26;
        if ( !*((_BYTE *)this + 32514) )
          goto LABEL_26;
        v17 = 0;
        v40 = this;
        v21 = (char *)g_pComposition + 1000;
        if ( g_pComposition == (CComposition *)-1000LL || !*((_BYTE *)g_pComposition + 1008) )
          goto LABEL_26;
        v24 = *((_DWORD *)this + 30);
        v36 = 0.0;
        v25 = 0.0;
        v37 = 0.0;
        v26 = (float)v24;
        v27 = (float)*((int *)this + 31);
        v38 = (float)v24;
        v35 = 0LL;
        v39 = v27;
        FrameRate = CDebugFrameCounter::GetFrameRate((CComposition *)((char *)g_pComposition + 1000));
        CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame((CDebugFrameCounter *)v21);
        v32 = CPUTimePerFrame;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qx_EventWriteTransfer(v31, v30, FrameRate, CPUTimePerFrame);
        if ( v21 != (char *)-4632LL )
        {
          v33 = CDisplayDebugFrameCounter::Display(
                  (CDisplayDebugFrameCounter *)(v21 + 4632),
                  FrameRate,
                  v32,
                  a2,
                  (__int64)this + 29988,
                  (__int64)&v36,
                  CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0,
                  (__int64)&v35);
          v17 = v33;
          if ( v33 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x96u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x1CCu, 0LL);
            goto LABEL_26;
          }
          v27 = v39;
          v26 = v38;
          v25 = v37;
          v20 = v36;
        }
        if ( v20 > v35.left )
          v35.left = v20;
        if ( v25 > v35.top )
          v35.top = v25;
        if ( v35.right > v26 )
          v35.right = v26;
        if ( v35.bottom > v27 )
          v35.bottom = v27;
        if ( IsEmpty(&v35) )
        {
          *(_QWORD *)&v35.right = 0LL;
          *(_QWORD *)&v35.left = 0LL;
        }
        if ( !IsEmpty(&v35) )
          CLegacyRenderTarget::Render_::_43_::_lambda_1_::operator()(&v40, &v35);
        goto LABEL_26;
      }
      v34 = 445;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v34, 0LL);
LABEL_26:
    v22 = CDrawingContext::EndFrame(a2);
    v23 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x1D3u, 0LL);
    if ( !v17 || v17 >= 0 && v23 < 0 )
      return (unsigned int)v23;
    return (unsigned int)v17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x1A5u, 0LL);
  return (unsigned int)v17;
}
