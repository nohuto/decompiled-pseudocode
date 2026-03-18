/*
 * XREFs of ?GetAttributes@DesktopPlaneInfo@COverlayContext@@QEBAXAEBVOverlayCaps@@PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023B3EC
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800F0834 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18023A8A0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 * Callees:
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void __fastcall COverlayContext::DesktopPlaneInfo::GetAttributes(
        COverlayContext::DesktopPlaneInfo *this,
        const struct OverlayCaps *a2,
        struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  __int128 v8; // xmm0

  memset_0(a3, 0, 0x70uLL);
  v5 = 0;
  if ( *((_BYTE *)this + 68) )
  {
    *((_DWORD *)a3 + 13) = 1;
    v6 = *((_DWORD *)this + 16);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
LABEL_9:
          LOBYTE(v5) = *((_BYTE *)this + 69) != 0;
          *((_DWORD *)a3 + 14) = v5;
          *((_DWORD *)a3 + 19) = *((_DWORD *)this + 14);
          *((_DWORD *)a3 + 24) = 2;
          *((_DWORD *)a3 + 26) = *((_DWORD *)this + 15);
          return;
        }
        *(_DWORD *)a3 = 4;
      }
      *(_OWORD *)((char *)a3 + 4) = *(_OWORD *)((char *)this + 8);
      *(_OWORD *)((char *)a3 + 20) = *(_OWORD *)((char *)this + 24);
      v8 = *(_OWORD *)((char *)this + 40);
    }
    else
    {
      *((_DWORD *)a3 + 3) = *(_DWORD *)this;
      *((_DWORD *)a3 + 4) = *((_DWORD *)this + 1);
      v8 = *(_OWORD *)((char *)a3 + 4);
      *(_OWORD *)((char *)a3 + 20) = v8;
    }
    *(_OWORD *)((char *)a3 + 36) = v8;
    goto LABEL_9;
  }
}
