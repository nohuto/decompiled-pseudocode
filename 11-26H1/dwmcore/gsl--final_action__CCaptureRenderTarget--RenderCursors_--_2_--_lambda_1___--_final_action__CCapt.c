/*
 * XREFs of gsl::final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___::_final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___ @ 0x180256A18
 * Callers:
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802579B0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

_BYTE *__fastcall gsl::final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___::_final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___(
        __int64 a1)
{
  char v1; // r11
  __int64 v2; // r10
  _BYTE *result; // rax

  v1 = 0;
  v2 = a1;
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( **(_BYTE **)a1 )
      CDrawingContext::PopRenderOptionsInternal(**(CDrawingContext ***)(a1 + 8), 1);
    result = *(_BYTE **)(v2 + 16);
    if ( *result != v1 )
      return (_BYTE *)CDrawingContext::EndFrame(**(CDrawingContext ***)(v2 + 8));
  }
  return result;
}
