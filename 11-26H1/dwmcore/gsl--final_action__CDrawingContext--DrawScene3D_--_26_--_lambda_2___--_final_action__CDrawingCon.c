/*
 * XREFs of gsl::final_action__CDrawingContext::DrawScene3D_::_26_::_lambda_2___::_final_action__CDrawingContext::DrawScene3D_::_26_::_lambda_2___ @ 0x1802347FC
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 */

_BYTE *__fastcall gsl::final_action__CDrawingContext::DrawScene3D_::_26_::_lambda_2___::_final_action__CDrawingContext::DrawScene3D_::_26_::_lambda_2___(
        __int64 a1)
{
  _BYTE *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
      return (_BYTE *)CDrawingContext::PopLayer(*(CDrawingContext **)(a1 + 8));
  }
  return result;
}
