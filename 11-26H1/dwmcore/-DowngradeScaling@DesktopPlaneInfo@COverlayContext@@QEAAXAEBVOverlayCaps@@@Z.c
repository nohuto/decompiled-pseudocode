/*
 * XREFs of ?DowngradeScaling@DesktopPlaneInfo@COverlayContext@@QEAAXAEBVOverlayCaps@@@Z @ 0x18023B0A8
 * Callers:
 *     ?DowngradeDesktopPlaneScaling@COverlayContext@@QEAAXXZ @ 0x18023B004 (-DowngradeDesktopPlaneScaling@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023DD58 (-SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 */

void __fastcall COverlayContext::DesktopPlaneInfo::DowngradeScaling(
        COverlayContext::DesktopPlaneInfo *this,
        const struct OverlayCaps *a2)
{
  int v2; // ebx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _BYTE v7[4]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v8; // [rsp+24h] [rbp-84h]
  __int128 v9; // [rsp+34h] [rbp-74h]
  int v10; // [rsp+54h] [rbp-54h]

  v2 = 0;
  if ( *((_DWORD *)this + 16) == 1 )
  {
    memset_0(v7, 0, 0x70uLL);
    v5 = *(_OWORD *)((char *)this + 8);
    v6 = *(_OWORD *)((char *)this + 24);
    v10 = 1;
    v8 = v5;
    v9 = v6;
    if ( OverlayCaps::SupportedPanelFitterAttributes(a2, (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)v7) )
      v2 = 2;
  }
  *((_DWORD *)this + 16) = v2;
}
