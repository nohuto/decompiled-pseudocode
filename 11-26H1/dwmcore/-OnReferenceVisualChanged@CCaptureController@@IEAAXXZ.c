/*
 * XREFs of ?OnReferenceVisualChanged@CCaptureController@@IEAAXXZ @ 0x18021E740
 * Callers:
 *     ?SetReferenceVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisual@@@Z @ 0x18021E70C (-SetReferenceVisual@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVC.c)
 * Callees:
 *     ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x18021EB9C (-SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CCaptureController::OnReferenceVisualChanged(CCaptureController *this)
{
  CCaptureRenderTarget **v1; // rsi
  CCaptureRenderTarget **i; // rbx

  v1 = (CCaptureRenderTarget **)*((_QWORD *)this + 21);
  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 20); i != v1; ++i )
    CCaptureRenderTarget::SetReferenceVisual(*i, *((struct CVisual **)this + 15));
}
