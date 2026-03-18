/*
 * XREFs of ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1800579DC
 * Callers:
 *     ?RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z @ 0x18009B0B8 (-RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C5500 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1800582E4 (-IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180058410 (-AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CCachedImageProducer::CCachedRealization *__fastcall CCachedImageProducer::FindRealizationInternal(
        CCachedImageProducer *this,
        const struct RenderTargetInfo *a2)
{
  CCachedImageProducer::CCachedRealization **v3; // rbx
  CCachedImageProducer::CCachedRealization **v4; // rdi
  char v5; // bp

  v3 = (CCachedImageProducer::CCachedRealization **)*((_QWORD *)this + 4);
  v4 = (CCachedImageProducer::CCachedRealization **)*((_QWORD *)this + 5);
  v5 = *((_BYTE *)g_pComposition + 6458);
  while ( v3 != v4 )
  {
    if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)*v3 + 24LL))(*(_QWORD *)*v3) >= 0
      && CCachedImageProducer::CCachedRealization::IsUsableOnTarget(*v3, a2, v5)
      && CCachedImageProducer::CCachedRealization::AttributesMatch(*v3, a2) )
    {
      return *v3;
    }
    ++v3;
  }
  return 0LL;
}
