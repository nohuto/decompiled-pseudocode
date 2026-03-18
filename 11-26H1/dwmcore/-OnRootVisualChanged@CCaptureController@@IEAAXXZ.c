/*
 * XREFs of ?OnRootVisualChanged@CCaptureController@@IEAAXXZ @ 0x18021E848
 * Callers:
 *     ?SetRootVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisual@@@Z @ 0x18021E814 (-SetRootVisual@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisua.c)
 * Callees:
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x18014A014 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CCaptureController::OnRootVisualChanged(CCaptureController *this)
{
  CCaptureRenderTarget **v1; // rsi
  CCaptureRenderTarget **i; // rbx

  v1 = (CCaptureRenderTarget **)*((_QWORD *)this + 21);
  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 20); i != v1; ++i )
    CCaptureRenderTarget::SetTargetVisual(*i, *((struct CVisual **)this + 13));
}
