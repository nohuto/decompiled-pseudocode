/*
 * XREFs of ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x14042A0A4
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1401916AC (-GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1401A142C (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1401A14C8 (-ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x14032E360 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x14032E9CC (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x14032F1D4 (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1403A8E54 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x14040AB20 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140434008 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 */

char __fastcall CheckAndUpdateMultiPlaneOverlayFromInternalState(
        unsigned int a1,
        unsigned int a2,
        struct CIFlipPresentHistoryTokenData *a3,
        char a4,
        struct ADAPTER_RENDER *a5,
        struct ADAPTER_DISPLAY *a6,
        struct tagRECT *a7)
{
  __int64 v9; // rdi
  __int64 v10; // rsi
  struct tagRECT *v11; // rbx
  const struct DXGALLOCATION *PlaneAllocationUnsafe; // r15
  __int128 v14; // xmm6
  __int64 v15; // rax
  enum D3DDDI_COLOR_SPACE_TYPE v16; // edi
  unsigned int v17; // r12d
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v18; // r13d
  char v19; // di
  int v20; // [rsp+78h] [rbp-71h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v21; // [rsp+7Ch] [rbp-6Dh] BYREF
  unsigned int v22[28]; // [rsp+88h] [rbp-61h] BYREF

  v9 = a1;
  v10 = a2;
  v11 = (struct tagRECT *)(*((_QWORD *)a6 + 16) + 4024LL * a1);
  PlaneAllocationUnsafe = DISPLAY_SOURCE::GetPlaneAllocationUnsafe((DISPLAY_SOURCE *)v11, a2);
  if ( PlaneAllocationUnsafe )
  {
    memset(v22, 0, 0x58uLL);
    DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
      (DISPLAY_SOURCE *)v11,
      v10,
      v22,
      (struct tagRECT *)&v22[1],
      (struct tagRECT *)&v22[5],
      (struct tagRECT *)&v22[9],
      (enum _D3DDDI_ROTATION *)&v22[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *)&v22[14],
      (enum D3DDDI_COLOR_SPACE_TYPE *)&v22[18],
      &v22[20]);
    v14 = *(_OWORD *)(*(__int64 (__fastcall **)(struct CIFlipPresentHistoryTokenData *))(*(_QWORD *)a3 + 8LL))(a3);
    v15 = *(_QWORD *)a3;
    *(_OWORD *)&v22[1] = v14;
    v16 = (*(unsigned int (__fastcall **)(struct CIFlipPresentHistoryTokenData *))(v15 + 112))(a3);
    v22[18] = v16;
    if ( a4 )
    {
      *a7 = v11[43];
      *(_OWORD *)&v22[5] = v14;
      *(_OWORD *)&v22[9] = v14;
      DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe((DISPLAY_SOURCE *)v11, (const struct tagRECT *)&v22[1], a7);
    }
    v17 = v22[20];
    v18 = v22[14];
    DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
      (DISPLAY_SOURCE *)v11,
      v10,
      PlaneAllocationUnsafe,
      v22[0],
      (const struct tagRECT *)&v22[1],
      (const struct tagRECT *)&v22[5],
      (const struct tagRECT *)&v22[9],
      (enum _D3DDDI_ROTATION)v22[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v22[14],
      v16,
      v22[20]);
    v19 = 0;
    v20 = 0;
    v21.0 = 0;
    CheckMultiPlaneOverlayInternal3(a1, a5, a6, &v20, &v21);
    DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe((DISPLAY_SOURCE *)v11, v10);
    if ( v20 )
    {
      v19 = 1;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        (DISPLAY_SOURCE *)v11,
        v10,
        PlaneAllocationUnsafe,
        1,
        v22[0],
        (const struct tagRECT *)&v22[1],
        (const struct tagRECT *)&v22[5],
        (const struct tagRECT *)&v22[9],
        (enum _D3DDDI_ROTATION)v22[13],
        v18,
        (enum D3DDDI_COLOR_SPACE_TYPE)v22[18],
        v17,
        D3DDDIFMT_FORCE_UINT|0x80000000,
        1u);
      if ( a4 )
      {
        DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe((DISPLAY_SOURCE *)v11);
        DISPLAY_SOURCE::SetPostCompositionConfigUnsafe((DISPLAY_SOURCE *)v11, 1u, (const struct tagRECT *)&v22[1], a7);
      }
    }
    return v19;
  }
  else
  {
    WdLogSingleEntry2(2LL, (unsigned int)v9, (unsigned int)v10);
    WdLogGlobalForLineNumber = 820;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failing CheckAndUpdateMultiPlaneOverlayFromInternalState because allocation is NULL, VidPnSourceId: (0x%I"
                "64x), Plane: (0x%I64x)",
      v9,
      v10,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}
