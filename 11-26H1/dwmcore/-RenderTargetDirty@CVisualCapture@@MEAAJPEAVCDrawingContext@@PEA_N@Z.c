/*
 * XREFs of ?RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180286810
 * Callers:
 *     <none>
 * Callees:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckForRenderCompleted@CVisualCapture@@IEAAXXZ @ 0x18028631C (-CheckForRenderCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1802863B0 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180286888 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::RenderTargetDirty(CVisualCapture *this, struct CDrawingContext *a2, bool *a3)
{
  int v4; // eax
  unsigned int v5; // r9d

  v4 = COffScreenRenderTarget::RenderTargetDirty(this, a2, a3);
  if ( v4 < 0 )
  {
    v5 = 178;
    goto LABEL_6;
  }
  v4 = CVisualCapture::EnqueueSetEvent(this);
  if ( v4 < 0 )
  {
    v5 = 180;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v5, 0LL);
    CVisualCapture::SendCaptureCompleted(this);
    return 0LL;
  }
  CVisualCapture::CheckForRenderCompleted(this);
  return 0LL;
}
