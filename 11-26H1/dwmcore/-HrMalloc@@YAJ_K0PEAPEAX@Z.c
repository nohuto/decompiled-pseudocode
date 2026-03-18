/*
 * XREFs of ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E1EE0
 * Callers:
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1800E1FE0 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800F2A20 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800F3470 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18016F230 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@M$01$01$09@@QEAAXXZ @ 0x180190420 (-Optimize@-$CWatermarkStack@M$01$01$09@@QEAAXXZ.c)
 *     ?Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z @ 0x1802174A4 (-Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x18022535C (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 *     ?Grow@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@AEAAJ_KIIPEAPEAX@Z @ 0x18023685C (-Grow@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@VCCornerRects@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x180237300 (-Grow@-$CWatermarkStack@VCCornerRects@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x18029436C (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x1802944E0 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802B4A2C (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HrMalloc(unsigned __int64 a1, unsigned __int64 a2, void **a3)
{
  SIZE_T v4; // rdi
  HANDLE ProcessHeap; // rax
  void *v6; // rax

  if ( !a3 || !a2 || !a1 || a1 >= 0xFFFFFFFFFFFFFFFFuLL / a2 )
    return 2147942487LL;
  v4 = a2 * a1;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, v4);
  *a3 = v6;
  if ( v6 )
    return 0LL;
  else
    return 2147942414LL;
}
