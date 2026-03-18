/*
 * XREFs of ?SupportedMPOAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18020660C
 * Callers:
 *     ?CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCaps@@_N@Z @ 0x1802392A0 (-CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCap.c)
 *     ?IsOverlayCompatibleScale@COverlayContext@@IEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_N@Z @ 0x18023D258 (-IsOverlayCompatibleScale@COverlayContext@@IEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4Overl.c)
 *     ?CalcSwapChainBufferSize@CMonitorTransform@@QEAA?AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlayCaps@@@Z @ 0x18028D8BC (-CalcSwapChainBufferSize@CMonitorTransform@@QEAA-AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlay.c)
 * Callees:
 *     ?CalcStretchFactors@@YAXAEBUtagRECT@@0W4DXGI_MODE_ROTATION@@PEAM2@Z @ 0x1802396B0 (-CalcStretchFactors@@YAXAEBUtagRECT@@0W4DXGI_MODE_ROTATION@@PEAM2@Z.c)
 */

char __fastcall OverlayCaps::SupportedMPOAttributes(
        OverlayCaps *this,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a2)
{
  char v3; // bl
  enum DXGI_MODE_ROTATION v5; // r8d
  float v6; // [rsp+48h] [rbp+10h] BYREF
  float v7; // [rsp+50h] [rbp+18h] BYREF

  v3 = 1;
  if ( *((_DWORD *)a2 + 13) == 1 )
    goto LABEL_9;
  if ( *((_DWORD *)a2 + 13) != 2 )
  {
    if ( *((_DWORD *)a2 + 13) == 3 )
    {
      if ( (*((_BYTE *)this + 12) & 1) == 0 && (*((_BYTE *)this + 12) & 6) != 6 )
        return 0;
      goto LABEL_9;
    }
    if ( *((_DWORD *)a2 + 13) != 4 )
      return 0;
  }
  if ( (*((_BYTE *)this + 12) & 1) == 0 )
    return 0;
LABEL_9:
  v5 = *((_DWORD *)a2 + 13);
  v6 = 0.0;
  v7 = 0.0;
  CalcStretchFactors((const struct tagRECT *)((char *)a2 + 4), (const struct tagRECT *)((char *)a2 + 20), v5, &v6, &v7);
  if ( *((float *)this + 4) < v6 || v7 < *((float *)this + 5) )
    return 0;
  return v3;
}
