/*
 * XREFs of ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x180035018
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034920 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?GetPhysicalBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x1801965F0 (-GetPhysicalBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@QEAA_NXZ @ 0x18025D408 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplaySwapChain::PostPresent(CDDisplaySwapChain *this, char a2, char a3)
{
  struct ISwapChainBuffer *PhysicalBuffer; // rax
  unsigned int v6; // eax

  if ( !a2 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkScanoutBuffer2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InkScanoutBuffer2>::GetImpl'::`2'::impl)
      && !a3 )
    {
      PhysicalBuffer = CDDisplaySwapChain::GetPhysicalBuffer(
                         (CDDisplaySwapChain *)((char *)this + 24),
                         *((_DWORD *)this + 131));
      (*(void (__fastcall **)(struct ISwapChainBuffer *, _QWORD))(*(_QWORD *)PhysicalBuffer + 144LL))(
        PhysicalBuffer,
        *((unsigned int *)this + 132));
    }
    if ( *((_QWORD *)this + 61) != *((_QWORD *)this + 62) )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>();
      *((_QWORD *)this + 62) = *((_QWORD *)this + 61);
    }
    **((_DWORD **)this + 23) = 0;
    v6 = *((_DWORD *)this + 131) + 1;
    *((_BYTE *)this + 665) = 0;
    *((_DWORD *)this + 131) = v6 % *((_DWORD *)this + 128);
  }
  CScribbleSwapChain::PostPresentForComputeScribble(this, 0);
}
