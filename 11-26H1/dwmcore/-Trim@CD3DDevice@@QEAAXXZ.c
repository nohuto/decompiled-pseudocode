/*
 * XREFs of ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801357B0
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAA_NXZ @ 0x1800695A0 (-AdvanceFrame@CDeviceManager@@IEAA_NXZ.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x18013557C (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x1801FED6C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x18021C2A0 (-TrimAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacySwapChain@@@Z @ 0x18029659C (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x180297270 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 *     ?SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z @ 0x1802A4050 (-SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z.c)
 * Callees:
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800357F4 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x18006A4D0 (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x180135824 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::Trim(union _SLIST_HEADER *this)
{
  ULONGLONG Region; // rcx
  ULONGLONG Alignment; // rcx

  CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps((CRenderTargetBitmapCache *)((char *)&this[28].HeaderX64 + 8));
  CD2DContext::ReleaseCachedD2DTarget((CD2DContext *)&this[1]);
  CD3DResourceManager::DestroyReleasedResources(this + 71);
  Region = this[34].Region;
  if ( Region )
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)Region + 880LL))(Region);
  Alignment = this[33].Alignment;
  if ( Alignment )
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)Alignment + 136LL))(Alignment);
  *((_BYTE *)&this[93].HeaderX64 + 4) = 0;
}
