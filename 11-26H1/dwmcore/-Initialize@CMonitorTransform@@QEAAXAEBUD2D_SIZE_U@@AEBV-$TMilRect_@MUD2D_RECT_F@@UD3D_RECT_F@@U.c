/*
 * XREFs of ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204064
 * Callers:
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180148BBC (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801FC5DC (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180254208 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x180255170 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1802594EC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMonitorTransform::Initialize(
        __int64 a1,
        const struct D2D_SIZE_U *a2,
        __int128 *a3,
        float a4,
        int a5,
        int a6,
        _OWORD *a7)
{
  char v7; // r9
  __int128 v8; // xmm0
  float v9; // xmm0_4
  float v10; // [rsp+28h] [rbp+28h]

  if ( !a2->width || (v7 = 1, !a2->height) )
    v7 = 0;
  v8 = *a3;
  *(_DWORD *)(a1 + 64) = a6;
  *(float *)a1 = a4;
  *(_DWORD *)(a1 + 4) = a5;
  *(_OWORD *)(a1 + 8) = v8;
  if ( a7 )
  {
    *(_OWORD *)(a1 + 24) = *a7;
  }
  else if ( !v7 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v9 = (float)((float)(*(float *)(a1 + 16) - *(float *)(a1 + 8)) * a4) + 6291456.25;
  *(_DWORD *)(a1 + 40) = (int)(LODWORD(v9) << 10) >> 11;
  v10 = (float)((float)(*(float *)(a1 + 20) - *(float *)(a1 + 12)) * a4) + 6291456.25;
  *(_DWORD *)(a1 + 44) = (int)(LODWORD(v10) << 10) >> 11;
  if ( v7 )
  {
    *(_DWORD *)(a1 + 272) = -1;
    CMonitorTransform::UpdateSize((CMonitorTransform *)a1, a2);
  }
  else
  {
    *(_QWORD *)(a1 + 268) = 0LL;
    *(_QWORD *)(a1 + 128) = 1065353216LL;
    *(_QWORD *)(a1 + 68) = 1065353216LL;
    *(_QWORD *)(a1 + 76) = 0LL;
    *(_DWORD *)(a1 + 84) = 0;
    *(_QWORD *)(a1 + 88) = 1065353216LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_DWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 108) = 1065353216LL;
    *(_QWORD *)(a1 + 116) = 0LL;
    *(_DWORD *)(a1 + 124) = 0;
    *(_BYTE *)(a1 + 133) &= 0xE9u;
    *(_BYTE *)(a1 + 133) |= 0x29u;
    *(_BYTE *)(a1 + 132) = -86;
    *(_QWORD *)(a1 + 204) = 1065353216LL;
    *(_QWORD *)(a1 + 212) = 0LL;
    *(_DWORD *)(a1 + 220) = 0;
    *(_QWORD *)(a1 + 224) = 1065353216LL;
    *(_QWORD *)(a1 + 232) = 0LL;
    *(_DWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 244) = 1065353216LL;
    *(_QWORD *)(a1 + 252) = 0LL;
    *(_DWORD *)(a1 + 260) = 0;
    *(_DWORD *)(a1 + 264) = 1065353216;
    *(_BYTE *)(a1 + 269) &= 0xE9u;
    *(_BYTE *)(a1 + 269) |= 0x29u;
    *(_BYTE *)(a1 + 268) = -86;
    *(_WORD *)(a1 + 280) = 0;
  }
}
