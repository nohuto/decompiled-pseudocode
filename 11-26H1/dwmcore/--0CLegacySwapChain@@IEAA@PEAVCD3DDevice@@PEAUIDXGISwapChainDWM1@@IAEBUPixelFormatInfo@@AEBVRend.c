/*
 * XREFs of ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x180199694
 * Callers:
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAV1@@Z @ 0x180198B0C (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@A.c)
 *     ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802A68F8 (-Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainD.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@U_LUID@@III@Z @ 0x1802A6FBC (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@1@@Z @ 0x180216694 (--0-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@.c)
 *     ??0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x180218304 (--0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefre.c)
 */

__int64 __fastcall CLegacySwapChain::CLegacySwapChain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 result; // rax
  int v15; // [rsp+78h] [rbp+20h] BYREF

  CScribbleSwapChain::CScribbleSwapChain(a1, a2, a5, a6, a7, a8, a9, a10, a11);
  *(_QWORD *)a1 = &CLegacySwapChain::`vftable'{for `COverlaySwapChain'};
  *(_QWORD *)(a1 + 24) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 32) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 256) = &CConversionSwapChain::`vftable'{for `IScribbleSwapChain'};
  *(_QWORD *)(a1 + 280) = &CLegacyStereoSwapChain::`vftable';
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 288),
    a3);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = a1 + 328;
  *(_QWORD *)(a1 + 312) = a1 + 328;
  *(_QWORD *)(a1 + 320) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 400;
  *(_QWORD *)(a1 + 384) = a1 + 400;
  *(_QWORD *)(a1 + 392) = a1 + 424;
  v15 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>(
    a1 + 424,
    &v15);
  *(_QWORD *)(a1 + 488) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 500) = 0LL;
  *(_DWORD *)(a1 + 496) = a4;
  return result;
}
