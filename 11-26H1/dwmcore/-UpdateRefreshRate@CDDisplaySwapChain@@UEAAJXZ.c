/*
 * XREFs of ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x18029B1B0
 * Callers:
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x180254160 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@PEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x18029DEBC (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@RefreshRateInfo@@QEAA_NAEBV1@@Z @ 0x1801CA9CC (-Update@RefreshRateInfo@@QEAA_NAEBV1@@Z.c)
 *     ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z @ 0x1801DFBAC (-GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PE.c)
 */

__int64 __fastcall CDDisplaySwapChain::UpdateRefreshRate(CDDisplaySwapChain *this)
{
  struct Windows::Devices::Display::Core::IDisplayTarget *v1; // rdx
  int RateInfoForTarget; // eax
  unsigned int v4; // edi
  char v6; // r11
  CComposition *v7; // rcx
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (struct Windows::Devices::Display::Core::IDisplayTarget *)*((_QWORD *)this + 49);
  v8[0] = 0x10000003CLL;
  v8[1] = 0LL;
  v8[2] = 0LL;
  v8[3] = 1LL;
  v8[4] = 0LL;
  v8[5] = 0LL;
  RateInfoForTarget = CDDisplayManager::GetRateInfoForTarget(this, v1, (struct RefreshRateInfo *)v8);
  v4 = RateInfoForTarget;
  if ( RateInfoForTarget >= 0 )
  {
    if ( RefreshRateInfo::Update((CDDisplaySwapChain *)((char *)this + 104), (const struct RefreshRateInfo *)v8) )
    {
      if ( *((_QWORD *)this + 19) )
        *((_QWORD *)this + 19) = 0LL;
      v7 = g_pComposition;
      if ( v6 != *((_DWORD *)this + 32) > 1u )
        *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 750LL) = 1;
      *(_BYTE *)(*((_QWORD *)v7 + 77) + 749LL) = 1;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)RateInfoForTarget);
    return v4;
  }
}
