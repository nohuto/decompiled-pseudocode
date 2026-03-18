/*
 * XREFs of ?OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ @ 0x18026A408
 * Callers:
 *     ?SetDefaultSDRBoost@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJM@Z @ 0x18024ADB4 (-SetDefaultSDRBoost@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJM@Z.c)
 *     ?SetProperty@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024CD30 (-SetProperty@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAAJUDCOMPOSITIO.c)
 * Callees:
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801D3930 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 */

void __fastcall CCaptureController::OnDefaultSDRBoostChanged(CCaptureController *this)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  __int64 v4; // rcx

  v1 = (__int64 *)*((_QWORD *)this + 21);
  for ( i = (__int64 *)*((_QWORD *)this + 20); i != v1; ++i )
  {
    v4 = *i;
    *(_DWORD *)(v4 + 2600) = *((_DWORD *)this + 22);
    CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts((enum DXGI_COLOR_SPACE_TYPE *)v4);
  }
}
