/*
 * XREFs of ?Release@CBitmapBrush@@QEAAXXZ @ 0x18009B690
 * Callers:
 *     ?OnGraphicsDeviceLost@CAnimatedTransitionVisual@@UEAAXXZ @ 0x1800963B0 (-OnGraphicsDeviceLost@CAnimatedTransitionVisual@@UEAAXXZ.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800965FC (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CBitmapBrush::Release(__int64 *this)
{
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset(this);
}
