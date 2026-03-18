/*
 * XREFs of gsl::final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___::_final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___ @ 0x180259684
 * Callers:
 *     ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802597C0 (-ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CC.c)
 * Callees:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800642A4 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 */

__int64 __fastcall gsl::final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___::_final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return CDrawingContext::PopRenderTargetInternal(*(CDrawingContext **)a1, 0);
  return result;
}
