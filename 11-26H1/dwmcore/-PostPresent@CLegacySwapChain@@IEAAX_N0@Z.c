/*
 * XREFs of ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x180034184
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180033A40 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180034610 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801A8440 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802A6B30 (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1802A6C50 (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x180186E80 (-GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z.c)
 *     ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ @ 0x18019D5F0 (-GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@QEAA_NXZ @ 0x18025D408 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySwapChain::PostPresent(CLegacySwapChain *this, char a2, char a3)
{
  bool v3; // bl
  __int64 v7; // rcx
  struct ISwapChainBuffer *PhysicalBuffer; // rax
  int v9; // eax
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !a2 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkScanoutBuffer2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InkScanoutBuffer2>::GetImpl'::`2'::impl) )
    {
      if ( !a3 )
      {
        v7 = *((_QWORD *)this + 36);
        v10 = 0;
        if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 120LL))(v7, &v10) >= 0 )
        {
          PhysicalBuffer = CLegacySwapChain::GetPhysicalBuffer(
                             (CLegacySwapChain *)((char *)this + 24),
                             *((_DWORD *)this + 125));
          (*(void (__fastcall **)(struct ISwapChainBuffer *, _QWORD))(*(_QWORD *)PhysicalBuffer + 144LL))(
            PhysicalBuffer,
            v10);
        }
      }
    }
    *((_DWORD *)this + 125) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 256LL))(*((_QWORD *)this + 36));
    **((_DWORD **)this + 23) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_LEGACYSWAPCHAIN_BUFFERFLIP,
        *((unsigned int *)this + 125));
  }
  CLegacySwapChain::GetVidPnTargetId((CLegacySwapChain *)((char *)this + 24));
  if ( !a2 )
  {
    v9 = *((_DWORD *)this + 126);
    if ( v9 )
    {
      v3 = 1;
      *((_DWORD *)this + 126) = v9 - 1;
    }
  }
  CScribbleSwapChain::PostPresentForComputeScribble(this, v3);
}
