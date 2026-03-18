/*
 * XREFs of ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18018AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A45C (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::DetachFromChannel(
        CCaptureRenderTarget *this,
        struct CChannelContext *a2,
        bool a3)
{
  CCaptureController *v5; // rcx

  v5 = (CCaptureController *)*((_QWORD *)this + 301);
  *((_QWORD *)this + 301) = 0LL;
  if ( v5 )
    CCaptureController::RemoveRenderTarget(v5, this);
  CNotificationResource::DetachFromChannel(this, a2, a3);
}
