/*
 * XREFs of gsl::final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___::_final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___ @ 0x180259664
 * Callers:
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C5500 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180290C5C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall gsl::final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___::_final_action__CCursorState::AddShadowToShape_::_58_::_lambda_1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return CDrawingContext::EndFrame(*(CDrawingContext **)a1);
  return result;
}
