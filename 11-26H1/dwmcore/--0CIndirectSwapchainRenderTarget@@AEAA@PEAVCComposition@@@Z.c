/*
 * XREFs of ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18020F1D8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x1801C974C (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 */

CIndirectSwapchainRenderTarget *__fastcall CIndirectSwapchainRenderTarget::CIndirectSwapchainRenderTarget(
        CIndirectSwapchainRenderTarget *this,
        struct CComposition *a2)
{
  _QWORD *v3; // rax
  CIndirectSwapchainRenderTarget *result; // rax
  const char *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v6 = 37;
  v5 = "DWM Rendertarget (indirect swapchain)";
  COffScreenRenderTarget::COffScreenRenderTarget((unsigned __int64)this, a2, (__int64)&v5, 0);
  *(_QWORD *)this = &CIndirectSwapchainRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 298) = &CIndirectSwapchainRenderTarget::`vftable'{for `IOcclusionChangeTarget'};
  *((_QWORD *)this + 299) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 300) = 0LL;
  *((_QWORD *)this + 301) = 0LL;
  v3 = operator new(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 300) = v3;
  result = this;
  *((_QWORD *)this + 302) = 0LL;
  *((_QWORD *)this + 303) = 0LL;
  *((_QWORD *)this + 304) = 0LL;
  *((_DWORD *)this + 610) = 0;
  return result;
}
