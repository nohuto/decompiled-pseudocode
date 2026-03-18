/*
 * XREFs of ?OnTransformChanged@CCaptureController@@IEAAXXZ @ 0x18021E7C4
 * Callers:
 *     ?SetTransform@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCTransform3D@@@Z @ 0x18021E790 (-SetTransform@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCTransf.c)
 * Callees:
 *     ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z @ 0x1801DAE88 (-SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z.c)
 */

void __fastcall CCaptureController::OnTransformChanged(CCaptureController *this)
{
  struct CResource ***v1; // rsi
  struct CResource ***i; // rbx

  v1 = (struct CResource ***)*((_QWORD *)this + 21);
  for ( i = (struct CResource ***)*((_QWORD *)this + 20); i != v1; ++i )
    CCaptureRenderTarget::SetTransform(*i, *((struct CTransform3D **)this + 14));
}
